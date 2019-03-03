/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf_options.h"
#include "rpg_actor.h"
#include "rpg_mapinfo.h"
#include "rpg_system.h"
#include "rpg_save.h"
#include "rpg_savemapinfo.h"
#include "data.h"


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

void RPG::SaveActor::Fixup(int actor_id) {
	ID = actor_id;

	const RPG::Actor& actor = Data::actors[actor_id - 1];

	if (name == "\x1") {
		name = actor.name;
	}
	if (title == "\x1") {
		title = actor.title;
	}
	if (sprite_name.empty()) {
		sprite_name = actor.character_name;
		sprite_id = actor.character_index;
		sprite_flags = actor.transparent ? 3 : 0;
	}
	if (face_name.empty()) {
		face_name = actor.face_name;
		face_id = actor.face_index;
	}

	if (status.size() < Data::states.size()) {
		status.resize(Data::states.size());
	}
}

void RPG::SaveActor::UnFixup() {
	const RPG::Actor& actor = Data::actors[ID - 1];

	if (name == actor.name) {
		name = "\x1";
	}
	if (title == actor.title) {
		title = "\x1";
	}
	if (sprite_name == actor.character_name
			&& sprite_id == actor.character_index
			&& sprite_flags == (actor.transparent ? 3 : 0)) {
		sprite_name.clear();
		sprite_id = 0;
		sprite_flags = 0;
	}
	if (face_name == actor.face_name && face_id == actor.face_index) {
		face_name.clear();
		face_id = 0;
	}
}

void RPG::SaveSystem::Fixup() {
	const RPG::System& system = Data::system;

	if (graphics_name.empty()) {
		graphics_name = system.system_name;
	}
	switches.reserve(Data::switches.size());
	variables.reserve(Data::variables.size());
	if (battle_music.name.empty()) {
		battle_music = system.battle_music;
	}
	if (battle_end_music.name.empty()) {
		battle_end_music = system.battle_end_music;
	}
	if (inn_music.name.empty()) {
		inn_music = system.inn_music;
	}
	if (title_music.name.empty()) {
		title_music = system.title_music;
	}
	if (boat_music.name.empty()) {
		boat_music = system.boat_music;
	}
	if (ship_music.name.empty()) {
		ship_music = system.ship_music;
	}
	if (airship_music.name.empty()) {
		airship_music = system.airship_music;
	}
	if (gameover_music.name.empty()) {
		gameover_music = system.gameover_music;
	}
	if (cursor_se.name.empty()) {
		cursor_se = system.cursor_se;
	}
	if (decision_se.name.empty()) {
		decision_se = system.decision_se;
	}
	if (cancel_se.name.empty()) {
		cancel_se = system.cancel_se;
	}
	if (buzzer_se.name.empty()) {
		buzzer_se = system.buzzer_se;
	}
	if (battle_se.name.empty()) {
		battle_se = system.battle_se;
	}
	if (escape_se.name.empty()) {
		escape_se = system.escape_se;
	}
	if (enemy_attack_se.name.empty()) {
		enemy_attack_se = system.enemy_attack_se;
	}
	if (enemy_damaged_se.name.empty()) {
		enemy_damaged_se = system.enemy_damaged_se;
	}
	if (actor_damaged_se.name.empty()) {
		actor_damaged_se = system.actor_damaged_se;
	}
	if (dodge_se.name.empty()) {
		dodge_se = system.dodge_se;
	}
	if (enemy_death_se.name.empty()) {
		enemy_death_se = system.enemy_death_se;
	}
	if (item_se.name.empty()) {
		item_se = system.item_se;
	}

	FixInt(message_stretch, system.message_stretch);
	FixInt(transition_out, system.transition_out);
	FixInt(transition_in, system.transition_in);
	FixInt(battle_start_fadeout, system.battle_start_fadeout);
	FixInt(battle_start_fadein, system.battle_start_fadein);
	FixInt(battle_end_fadeout, system.battle_end_fadeout);
	FixInt(battle_end_fadein, system.battle_end_fadein);
}

void RPG::SaveSystem::UnFixup() {
	const RPG::System& system = Data::system;

	//TODO: Should be a C++14 polymorphic lambda
	auto reset_se = [](RPG::Sound& s) {
		s = {};
		s.name.clear();
	};

	auto reset_bgm = [](RPG::Music& s) {
		s = {};
		s.name.clear();
	};

	if (graphics_name == system.system_name) {
		graphics_name.clear();
	}

	if (battle_music == system.battle_music) {
		reset_bgm(battle_music);
	}
	if (battle_end_music == system.battle_end_music) {
		reset_bgm(battle_end_music);
	}
	if (inn_music == system.inn_music) {
		reset_bgm(inn_music);
	}
	if (title_music == system.title_music) {
		reset_bgm(title_music);
	}
	if (boat_music == system.boat_music) {
		reset_bgm(boat_music);
	}
	if (ship_music == system.ship_music) {
		reset_bgm(ship_music);
	}
	if (airship_music == system.airship_music) {
		reset_bgm(airship_music);
	}
	if (gameover_music == system.gameover_music) {
		reset_bgm(gameover_music);
	}
	if (cursor_se == system.cursor_se) {
		reset_se(cursor_se);
	}
	if (decision_se == system.decision_se) {
		reset_se(decision_se);
	}
	if (cancel_se == system.cancel_se) {
		reset_se(cancel_se);
	}
	if (buzzer_se == system.buzzer_se) {
		reset_se(buzzer_se);
	}
	if (battle_se == system.battle_se) {
		reset_se(battle_se);
	}
	if (escape_se == system.escape_se) {
		reset_se(escape_se);
	}
	if (enemy_attack_se == system.enemy_attack_se) {
		reset_se(enemy_attack_se);
	}
	if (enemy_damaged_se == system.enemy_damaged_se) {
		reset_se(enemy_damaged_se);
	}
	if (actor_damaged_se == system.actor_damaged_se) {
		reset_se(actor_damaged_se);
	}
	if (dodge_se == system.dodge_se) {
		reset_se(dodge_se);
	}
	if (enemy_death_se == system.enemy_death_se) {
		reset_se(enemy_death_se);
	}
	if (item_se == system.item_se) {
		reset_se(item_se);
	}

	UnFixInt(message_stretch, system.message_stretch);
	UnFixInt(transition_out, system.transition_out);
	UnFixInt(transition_in, system.transition_in);
	UnFixInt(battle_start_fadeout, system.battle_start_fadeout);
	UnFixInt(battle_start_fadein, system.battle_start_fadein);
	UnFixInt(battle_end_fadeout, system.battle_end_fadeout);
	UnFixInt(battle_end_fadein, system.battle_end_fadein);
}


void RPG::SaveMapInfo::Fixup(const RPG::Map& map) {
	FixInt(chipset_id, map.chipset_id);
}

void RPG::SaveMapInfo::Fixup(const RPG::MapInfo& map) {
	FixInt(encounter_rate, map.encounter_steps);
}

void RPG::SaveMapInfo::UnFixup(const RPG::Map& map) {
	UnFixInt(chipset_id, map.chipset_id);
}

void RPG::SaveMapInfo::UnFixup(const RPG::MapInfo& map) {
	UnFixInt(encounter_rate, map.encounter_steps);
}
