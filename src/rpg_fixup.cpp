/*
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
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
	if (message_stretch == -1) {
		message_stretch = system.message_stretch;
	}
}

void RPG::SaveMapInfo::Fixup(const RPG::Map& map) {
	if (chipset_id <= 0) {
		chipset_id = map.chipset_id;
	}
}
