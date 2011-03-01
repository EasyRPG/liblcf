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
#include "data.h"
#include "rpg_save.h"

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////

RPG::SaveTitle::SaveTitle() {
	hero_level = 0;
	hero_hp = 0;
	face1_id = 0;
	face2_id = 0;
	face3_id = 0;
	face4_id = 0;
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

RPG::SavePicture::SavePicture() {
	ID = 1;
	name = "";
	start_x = 160.0;
	start_y = 120.0;
	current_x = 160.0;
	current_y = 120.0;
	picture_scrolls = false;
	current_magnify = -1.0;
	current_top_trans = -1.0;
	transparency = false;
	current_red = -1.0;
	current_green = -1.0;
	current_blue = -1.0;
	current_sat = -1.0;
	effect_mode = -1;
	effect_speed = -1.0;
	current_bot_trans = -1.0;
	finish_x = -1.0;
	finish_y = -1.0;
	finish_magnify = -1;
	finish_top_trans = 0;
	finish_bot_trans = 0;
	finish_red = -1;
	finish_green = -1;
	finish_blue = -1;
	finish_sat = -1;
	effect2_speed = -1;
	time_left = -1;
	current_rotation = -1.0;
	current_waver = -1;
}

RPG::SavePartyLocation::SavePartyLocation() {
	map_id = -1;
	position_x = -1;
	position_y = -1;
	facing1 = -1;
	facing2 = -1;
	unknown_17 = -1;
	unknown_20 = -1;
	unknown_21 = -1;
	unknown_23 = -1;
	unknown_25 = -1;
	unknown_2a = -1;
	unknown_2b = -1;
	unknown_2c = -1;
	sprite_transparent = false;
	unknown_2f = -1;
	unknown_33 = -1;
	unknown_34 = -1;
	unknown_35 = -1;
	unknown_36 = -1;
	unknown_3e = -1;
	unknown_3f = -1;
	sprite_name = "";
	sprite_id = -1;
	unknown_4b = -1;
	unknown_51 = -1;
	unknown_52 = -1;
	unknown_53 = -1;
	pan_state = -1;
	pan_current_x = -1;
	pan_current_y = -1;
	pan_finish_x = -1;
	pan_finish_y = -1;
	unknown_79 = -1;
	unknown_7c = -1;
	unknown_83 = -1;
	unknown_84 = -1;
}

RPG::SaveVehicleLocation::SaveVehicleLocation() {
	map_id = -1;
	position_x = -1;
	position_y = -1;
	facing1 = -1;
	facing2 = -1;
	unknown_17 = -1;
	unknown_21 = -1;
	unknown_23 = -1;
	unknown_25 = -1;
	unknown_34 = -1;
	unknown_35 = -1;
	sprite_name = "";
	sprite_id = -1;
	unknown_4b = -1;
	unknown_65 = -1;
	sprite2_name = "";
	sprite2_id = -1;
}

RPG::SaveActor::SaveActor() {
	ID = -1;
	name = "";
	title = "";
	sprite_name = "";
	sprite_id = -1;
	sprite_flags = -1;
	face_name = "";
	face_id = -1;
	level = -1;
	exp = -1;
	hp_mod = 0;
	sp_mod = 0;
	attack_mod = 0;
	defense_mod = 0;
	spirit_mod = 0;
	agility_mod = 0;
	skills_size = -1;
	current_hp = -1;
	current_sp = -1;
	status_size = -1;
	changed_class = false;
	class_id = -1;
	unknown_5b = -1;
	two_weapon = false;
	lock_equipment = false;
	auto_battle = false;
	mighty_guard = false;
	unknown_60 = -1;
}

void RPG::SaveActor::Setup(int actor_id) {
	const RPG::Actor& actor = Data::actors[actor_id - 1];
	ID = actor.ID;
	name = actor.name;
	title = actor.title;
	sprite_name = actor.character_name;
	sprite_id = actor.character_index;
	sprite_flags = actor.transparent ? 3 : 0;
	face_name = actor.face_name;
	face_id = actor.face_index;
	level = actor.initial_level;
	exp = 0;
	hp_mod = 0;
	sp_mod = 0;
	attack_mod = 0;
	defense_mod = 0;
	spirit_mod = 0;
	agility_mod = 0;
	skills_size = 0;
	skills.clear();
	equipped.clear();
	equipped.push_back(actor.weapon_id);
	equipped.push_back(actor.shield_id);
	equipped.push_back(actor.armor_id);
	equipped.push_back(actor.helmet_id);
	equipped.push_back(actor.accessory_id);
	current_hp = 0;
	current_sp = 0;
	battle_commands = actor.battle_commands;
	status_size = 0;
	status.clear();
	changed_class = false;
	class_id = actor.class_id;
	unknown_5b = -1;
	two_weapon = actor.two_swords_style;
	lock_equipment = actor.fix_equipment;
	auto_battle = actor.auto_battle;
	mighty_guard = actor.super_guard;
	unknown_60 = -1;
}

RPG::SaveInventory::SaveInventory() {
	party_size = 0;
	items_size = 0;
	gold = 0;
	timer1_secs = 0;
	timer1_active = false;
	timer1_visible = false;
	timer1_battle = false;
	timer2_secs = 0;
	timer2_active = false;
	timer2_visible = false;
	timer2_battle = false;
	battles = 0;
	defeats = 0;
	escapes = 0;
	victories = 0;
	unknown_29 = -1;
	steps = 0;
}

void RPG::SaveInventory::Setup() {
	party = Data::system.party;
	party_size = party.size();
}

RPG::SaveMapEvent::SaveMapEvent() {
	ID = -1;
	unknown_01 = -1;
	map_id = -1;
	position_x = -1;
	position_y = -1;
	facing1 = -1;
	facing2 = -1;
	anim_frame = 1;
	unknown_18 = -1;
	unknown_1f = -1;
	unknown_20 = -1;
	layer = -1;
	unknown_22 = -1;
	unknown_23 = -1;
	unknown_24 = -1;
	unknown_25 = -1;
	unknown_2a = -1;
	unknown_2b = -1;
	unknown_2f = -1;
	anim_paused = 0;
	unknown_33 = -1;
	unknown_34 = -1;
	unknown_35 = -1;
	unknown_36 = -1;
	unknown_3e = -1;
	unknown_3f = -1;
	unknown_47 = -1;
	sprite_name = "";
	sprite_id = -1;
	unknown_4b = -1;
	flash_red = -1;
	flash_green = -1;
	flash_blue = -1;
	flash_current_level = 0.0;
	flash_time_left = 0;
	unknown_66 = -1;
	unknown_67 = -1;
}

void RPG::SaveMapEvent::Setup(const RPG::Event& event) {
	ID = event.ID;
	position_x = event.x;
	position_y = event.y;
}

RPG::SaveScreen::SaveScreen() {
	tint_finish_red = -1;
	tint_finish_green = -1;
	tint_finish_blue = -1;
	tint_finish_sat = -1;
	tint_current_red = -1.0;
	tint_current_green = -1.0;
	tint_current_blue = -1.0;
	tint_current_sat = -1.0;
	tint_time_left = -1;
	flash_continuous = false;
	flash_red = -1;
	flash_green = -1;
	flash_blue = -1;
	flash_current_level = -1.0;
	flash_time_left = -1;
	shake_continuous = false;
	shake_strength = -1;
	shake_speed = -1;
	shake_position = 0;
	shake_time_left = -1;
	pan_x = -1;
	pan_y = -1;
	battleanim_id = -1;
	battleanim_target = -1;
	battleanim_unk_2d = -1;
	battleanim_global = false;
	weather = 0;
	weather_strength = 0;
}

RPG::SaveEventCommands::SaveEventCommands() {
	ID = -1;
	commands_size = 0;
	current_command = -1;
	unknown_0c = -1;
	unknown_0d = -1;
	unknown_15 = -1;
}

RPG::SaveEventData::SaveEventData() {
	time_left = -1;
	unknown_16 = -1;
	unknown_17 = -1;
	unknown_20 = -1;
}

RPG::SaveCommonEvent::SaveCommonEvent() {
	ID = -1;
}

RPG::SaveMapInfo::SaveMapInfo() {
	pan_x = 0;
	pan_y = 0;
	encounter_rate = -1;
	chipset_id = -1;
	parallax_name = "";
	parallax_horz = false;
	parallax_vert = false;
	parallax_horz_auto = false;
	parallax_horz_speed = 0;
	parallax_vert_auto = false;
	parallax_vert_speed = 0;
}

void RPG::SaveMapInfo::Setup() {
	pan_x = 0;
	pan_y = 0;
	lower_tiles.resize(144);
	upper_tiles.resize(144);
	for (int i = 0; i < 144; i++) {
		lower_tiles[i] = i;
		upper_tiles[i] = i;
	}
}

void RPG::SaveMapInfo::Setup(const RPG::Map& map) {
	chipset_id = map.chipset_id;
	parallax_name = map.parallax_name;
	parallax_horz = map.parallax_loop_x;
	parallax_vert = map.parallax_loop_y;
	parallax_horz_auto = map.parallax_auto_loop_x;
	parallax_vert_auto = map.parallax_auto_loop_y;
	parallax_horz_speed = map.parallax_sx;
	parallax_vert_speed = map.parallax_sy;
}

void RPG::SaveMapInfo::Setup(const RPG::MapInfo& map_info) {
	encounter_rate = map_info.encounter_steps;
}

RPG::SaveEvents::SaveEvents() {
	events_size = -1;
	unknown_16 = -1;
	unknown_17 = -1;
	unknown_18 = -1;
	unknown_1c = -1;
	unknown_20 = -1;
	unknown_24 = -1;
	unknown_25 = -1;
}

RPG::SaveTarget::SaveTarget() {
	ID = -1;
	map_id = -1;
	map_x = -1;
	map_y = -1;
	switch_on = false;
	switch_id = -1;
}

RPG::Save::Save() {
	unknown_70 = -1;
}

void RPG::Save::Setup() {
	system.Setup();
	pictures.resize(50);
	party.resize(Data::actors.size());
	for (int i = 1; i <= (int) party.size(); i++)
		party[i - 1].Setup(i);
	map_info.Setup();
}

