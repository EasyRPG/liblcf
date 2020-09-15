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
