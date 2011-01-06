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

RPG::SaveData::SaveData() {
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
	unknown_36 = -1;
	transparent = false;
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
	unknown_21 = -1;
	unknown_23 = -1;
	unknown_25 = -1;
	unknown_2b = 0;
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
	unknown_51 = -1;
	auto_battle = false;
}

RPG::SaveInventory::SaveInventory() {
	party_size = 0;
	items_size = 0;
	gold = -1;
	timer_secs = -1;
	timer_18 = -1;
	timer_19 = -1;
	battles = -1;
	defeats = -1;
	unknown_22 = -1;
	unknown_23 = -1;
	unknown_29 = -1;
	steps = -1;
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
	anim_paused = 0;
	unknown_33 = -1;
	unknown_34 = -1;
	unknown_35 = -1;
	unknown_36 = -1;
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
	flash_status = -1;
	flash_red = -1;
	flash_green = -1;
	flash_blue = -1;
	flash_current_level = -1.0;
	flash_time_left = -1;
	unknown_2f = -1;
	shake_status = -1;
	shake_strength = -1;
	shake_speed = -1;
	shake_position = 0;
	shake_time_left = -1;
	pan_x = -1;
	pan_y = -1;
	unknown_2b = -1;
	unknown_2c = -1;
	unknown_2d = -1;
	unknown_2f = -1;
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
	unknown_16 = -1;
}

RPG::SaveEventData::SaveEventData() {
	time_left = -1;
}

RPG::SaveCommonEvent::SaveCommonEvent() {
	ID = -1;
}

RPG::SaveMapInfo::SaveMapInfo() {
	pan_x = -1;
	pan_y = -1;
	parallax_name = "";
	parallax_horz = false;
	parallax_vert = false;
	parallax_horz_auto = false;
	parallax_horz_speed = 0;
	parallax_vert_auto = false;
	parallax_vert_speed = 0;
}

RPG::SaveEvents::SaveEvents() {
	unknown_04 = -1;
}

RPG::Save::Save() {
}

