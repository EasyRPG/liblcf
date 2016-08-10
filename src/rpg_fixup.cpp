/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include "reader_options.h"
#include "rpg_actor.h"
#include "rpg_mapinfo.h"
#include "rpg_system.h"
#include "rpg_save.h"
#include "rpg_savemapinfo.h"
#include "data.h"

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
	if (class_id == -1) {
		class_id = actor.class_id;
	}
}

void RPG::SaveMapEvent::Fixup(const RPG::EventPage& page) {
	if (move_frequency == -1) {
		move_frequency = page.move_frequency;
	}
	if (move_speed == -1) {
		move_speed = page.move_speed;
	}
	if (sprite_name.empty()) {
		sprite_name = page.character_name;
	}
	if (sprite_id == -1) {
		sprite_id = page.character_index;
	}
}

void RPG::SaveSystem::Fixup() {
	const RPG::System& system = Data::system;

	if (graphics_name.empty()) {
		graphics_name = system.system_name;
	}
	if (switches.size() < Data::switches.size()) {
		switches.resize(Data::switches.size());
	}
	if (variables.size() < Data::variables.size()) {
		variables.resize(Data::variables.size());
	}
	if (battle_music.name.empty()) {
		battle_music.name = system.battle_music.name;
	}
	if (battle_end_music.name.empty()) {
		battle_end_music.name = system.battle_end_music.name;
	}
	if (inn_music.name.empty()) {
		inn_music.name = system.inn_music.name;
	}
	if (title_music.name.empty()) {
		title_music.name = system.title_music.name;
	}
	if (boat_music.name.empty()) {
		boat_music.name = system.boat_music.name;
	}
	if (ship_music.name.empty()) {
		ship_music.name = system.ship_music.name;
	}
	if (airship_music.name.empty()) {
		airship_music.name = system.airship_music.name;
	}
	if (gameover_music.name.empty()) {
		gameover_music.name = system.gameover_music.name;
	}
	if (cursor_se.name.empty()) {
		cursor_se.name = system.cursor_se.name;
	}
	if (decision_se.name.empty()) {
		decision_se.name = system.decision_se.name;
	}
	if (cancel_se.name.empty()) {
		cancel_se.name = system.cancel_se.name;
	}
	if (buzzer_se.name.empty()) {
		buzzer_se.name = system.buzzer_se.name;
	}
	if (battle_se.name.empty()) {
		battle_se.name = system.battle_se.name;
	}
	if (escape_se.name.empty()) {
		escape_se.name = system.escape_se.name;
	}
	if (enemy_attack_se.name.empty()) {
		enemy_attack_se.name = system.enemy_attack_se.name;
	}
	if (enemy_damaged_se.name.empty()) {
		enemy_damaged_se.name = system.enemy_damaged_se.name;
	}
	if (actor_damaged_se.name.empty()) {
		actor_damaged_se.name = system.actor_damaged_se.name;
	}
	if (dodge_se.name.empty()) {
		dodge_se.name = system.dodge_se.name;
	}
	if (enemy_death_se.name.empty()) {
		enemy_death_se.name = system.enemy_death_se.name;
	}
	if (item_se.name.empty()) {
		item_se.name = system.item_se.name;
	}
}

void RPG::SaveMapInfo::Fixup(const RPG::Map& map) {
	if (chipset_id <= 0) {
		chipset_id = map.chipset_id;
	}
}
