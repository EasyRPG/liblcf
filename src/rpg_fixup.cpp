/*
 * This file is part of EasyRPG.
 *
 * EasyRPG is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
 */


// Headers
#include "reader_options.h"
#include "rpg_actor.h"
#include "rpg_mapinfo.h"
#include "rpg_system.h"
#include "rpg_save.h"
#include "rpg_savemapinfo.h"
#include "data.h"

void RPG::SaveActor::Fixup() {
	const RPG::Actor& actor = Data::actors[ID - 1];

	if (name == "\x1") {
		name = actor.name;
	}
	if (title == "\x1") {
		title = actor.name;
	}
	if (sprite_name.empty()) {
		sprite_name = actor.character_name;
	}
	if (face_name.empty()) {
		face_name = actor.face_name;
	}
	if (face_id == -1) {
		face_id = actor.face_index;
	}
	if (sprite_id == -1) {
		sprite_id = actor.character_index;
	}
	if (sprite_flags == -1) {
		sprite_flags = actor.transparent ? 3 : 0;
	}
	if (class_id == -1) {
		class_id = actor.class_id;
	}
	// Remove, beginning from first zero conditions (invalid value)
	// No idea why they are written in the savegame by RPG_RT
	for (size_t i = 0; i < status.size(); ++i) {
		if (status[i] == 0) {
			status.resize(i);
			break;
		}
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
	if (chipset_id == -1) {
		chipset_id = map.chipset_id;
	}
}

void RPG::SavePartyLocation::Fixup() {
	if (move_speed == -1) {
		move_speed = 4;
	}
}

void RPG::SaveScreen::Fixup() {
	if (tint_current_red == -1.0) {
		tint_current_red = 100.0;
	}
	if (tint_current_green == -1.0) {
		tint_current_green = 100.0;
	}
	if (tint_current_blue == -1.0) {
		tint_current_blue = 100.0;
	}
	if (tint_current_sat == -1.0) {
		tint_current_sat = 100.0;
	}
}
