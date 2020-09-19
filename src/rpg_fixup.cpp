/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/config.h"
#include "lcf/rpg/actor.h"
#include "lcf/rpg/mapinfo.h"
#include "lcf/rpg/system.h"
#include "lcf/rpg/save.h"
#include "lcf/rpg/savemapinfo.h"
#include "lcf/data.h"

template <typename T, typename U>
static void FixInt(T& val, U def) {
	if (val < 0) {
		val = def;
	}
};

template <typename T, typename U>
void UnFixInt(T& val, U def) {
	if (val == def) {
		val = -1;
	}
};

namespace lcf {

void rpg::SaveActor::Fixup(int actor_id) {
	ID = actor_id;

	const rpg::Actor& actor = lcf::Data::actors[actor_id - 1];

	if (name == "\x1") {
		name = ToString(actor.name);
	}
	if (title == "\x1") {
		title = ToString(actor.title);
	}
	if (sprite_name.empty()) {
		sprite_name = ToString(actor.character_name);
		sprite_id = actor.character_index;
		transparency = actor.transparent ? 3 : 0;
	}
	if (face_name.empty()) {
		face_name = ToString(actor.face_name);
		face_id = actor.face_index;
	}

	if (status.size() < lcf::Data::states.size()) {
		status.resize(lcf::Data::states.size());
	}
}

void rpg::SaveActor::UnFixup() {
	const rpg::Actor& actor = lcf::Data::actors[ID - 1];

	if (name == actor.name) {
		name = "\x1";
	}
	if (title == actor.title) {
		title = "\x1";
	}
	if (sprite_name == actor.character_name
			&& sprite_id == actor.character_index
			&& transparency == (actor.transparent ? 3 : 0)) {
		sprite_name.clear();
		sprite_id = 0;
		transparency = 0;
	}
	if (face_name == actor.face_name && face_id == actor.face_index) {
		face_name.clear();
		face_id = 0;
	}
}

void rpg::SaveMapInfo::Fixup(const rpg::Map& map) {
	FixInt(chipset_id, map.chipset_id);
}

void rpg::SaveMapInfo::Fixup(const rpg::MapInfo& map) {
	FixInt(encounter_rate, map.encounter_steps);
}

void rpg::SaveMapInfo::UnFixup(const rpg::Map& map) {
	UnFixInt(chipset_id, map.chipset_id);
}

void rpg::SaveMapInfo::UnFixup(const rpg::MapInfo& map) {
	UnFixInt(encounter_rate, map.encounter_steps);
}

} // namespace lcf
