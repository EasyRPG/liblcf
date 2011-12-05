/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "rpg_savesystem.h"
#include "rpg_system.h"
#include "data.h"

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
RPG::SaveSystem::SaveSystem() {
	screen = 0;
	frame_count = 0;
	graphics_name = "";
	switches_size = 0;
	variables_size = 0;
	message_transparent = -1;
	message_position = -1;
	message_placement = -1;
	message_continue = -1;
	face_name = "";
	face_id = 0;
	face_right = false;
	face_flip = false;
	transparent = false;
	unknown_3d = -1;
	transition_out = -1;
	transition_in = -1;
	battle_start_fadeout = -1;
	battle_start_fadein = -1;
	battle_end_fadeout = -1;
	battle_end_fadein = -1;
	teleport_allowed = false;
	escape_allowed = false;
	save_allowed = false;
	menu_allowed = false;
	save_count = 0;
	save_slot = 1;
}

void RPG::SaveSystem::Setup() {
	const RPG::System& system = Data::system;
	screen = 0;
	frame_count = 0;
	graphics_name = system.system_name;
	switches_size = Data::switches.size();
	switches.resize(switches_size);
	variables_size = Data::variables.size();
	variables.resize(variables_size);
	message_transparent = -1;
	message_position = -1;
	message_placement = -1;
	message_continue = -1;
	face_name = "";
	face_id = -1;
	face_right = false;
	face_flip = false;
	transparent = false;
	unknown_3d = -1;
	title_music = system.title_music;
	battle_music = system.battle_music;
	battle_end_music = system.battle_end_music;
	inn_music = system.inn_music;
	// current_music
	// unknown1_music
	// unknown2_music
	// stored_music
	boat_music = system.boat_music;
	ship_music = system.ship_music;
	airship_music = system.airship_music;
	gameover_music = system.gameover_music;
	cursor_se = system.cursor_se;
	decision_se = system.decision_se;
	cancel_se = system.cancel_se;
	buzzer_se = system.buzzer_se;
	battle_se = system.battle_se;
	escape_se = system.escape_se;
	enemy_attack_se = system.enemy_attack_se;
	enemy_damaged_se = system.enemy_damaged_se;
	actor_damaged_se = system.actor_damaged_se;
	dodge_se = system.dodge_se;
	enemy_death_se = system.enemy_death_se;
	item_se = system.item_se;
	transition_out = system.transition_out;
	transition_in = system.transition_in;
	battle_start_fadeout = system.battle_start_fadeout;
	battle_start_fadein = system.battle_start_fadein;
	battle_end_fadeout = system.battle_end_fadeout;
	battle_end_fadein = system.battle_end_fadein;
	teleport_allowed = true;
	escape_allowed = true;
	save_allowed = true;
	menu_allowed = true;
	background = "";
	save_count = -1;
	save_slot = -1;
}
