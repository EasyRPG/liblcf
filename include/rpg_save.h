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

#ifndef _RPG_SAVE_H_
#define _RPG_SAVE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "rpg_music.h"
#include "rpg_sound.h"
#include "rpg_eventcommand.h"
#include "rpg_moveroute.h"

////////////////////////////////////////////////////////////
/// RPG::Map class
////////////////////////////////////////////////////////////
namespace RPG {
	class SaveTitle {
	public:
		SaveTitle();

		std::vector<uint8_t>  timestamp;
		std::string hero_name;
		int hero_level;
		int hero_hp;
		std::string face1_name;
		std::string face2_name;
		std::string face3_name;
		std::string face4_name;
		int face1_id;
		int face2_id;
		int face3_id;
		int face4_id;
	};

	class SaveData {
	public:
		SaveData();
		int screen;
		int frame_count;
		std::string graphics_name;
		int switches_size;
		std::vector<bool> switches;
		int variables_size;
		std::vector<uint32_t> variables;
		int message_transparent;
		int message_position;
		int message_placement;
		int message_continue;
		std::string face_name;
		int face_id;
		int unknown_36;
		bool transparent;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
		Music current_music;
		Music unknown1_music;
		Music unknown2_music;
		Music stored_music;
		Music boat_music;
		Music ship_music;
		Music airship_music;
		Music gameover_music;
		Sound cursor_se;
		Sound decision_se;
		Sound cancel_se;
		Sound buzzer_se;
		Sound battle_se;
		Sound escape_se;
		Sound enemy_attack_se;
		Sound enemy_damaged_se;
		Sound actor_damaged_se;
		Sound dodge_se;
		Sound enemy_death_se;
		Sound item_se;
		int transition_out;
		int transition_in;
		int battle_start_fadeout;
		int battle_start_fadein;
		int battle_end_fadeout;
		int battle_end_fadein;
		bool teleport_allowed;
		bool escape_allowed;
		bool save_allowed;
		bool menu_allowed;
		int save_count;
		int save_slot;
	};

	class SavePicture {
	public:
		SavePicture();

		int ID;
		std::string name;
		double start_x;
		double start_y;
		double current_x;
		double current_y;
		double current_magnify;
		double current_top_trans;
		bool transparency;
		double current_red;
		double current_green;
		double current_blue;
		double current_sat;
		int effect_mode;
		double effect_speed;
		double current_bot_trans;
		double finish_x;
		double finish_y;
		int finish_magnify;
		int finish_top_trans;
		int finish_bot_trans;
		int finish_red;
		int finish_green;
		int finish_blue;
		int finish_sat;
		int effect2_speed;
		int time_left;
		double current_rotation;
		int current_waver;
	};

	class SavePartyLocation {
	public:
		SavePartyLocation();

		int map_id;
		int position_x;
		int position_y;
		int facing1;
		int facing2;
		int unknown_17;
		int unknown_21;
		int unknown_23;
		int unknown_25;
		MoveRoute move_route;
		int unknown_2b;
		int unknown_34;
		int unknown_35;
		int unknown_36;
		int unknown_3e;
		int unknown_3f;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int unknown_51;
		int unknown_52;
		int unknown_53;
		int pan_current_x;
		int pan_current_y;
		int pan_finish_x;
		int pan_finish_y;
		int unknown_79;
		int unknown_7c;
		int unknown_83;
		int unknown_84;
	};

	class SaveVehicleLocation {
	public:
		SaveVehicleLocation();

		int map_id;
		int position_x;
		int position_y;
		int facing1;
		int facing2;
		int unknown_17;
		int unknown_21;
		int unknown_23;
		int unknown_25;
		MoveRoute move_route;
		int unknown_34;
		int unknown_35;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int unknown_65;
		std::string sprite2_name;
		int sprite2_id;
	};

	class SaveActor {
	public:
		SaveActor();

		int ID;
		int unknown_01;
		int unknown_02;
		std::string sprite_name;
		int sprite_id;
		std::string face_name;
		int face_id;
		int level;
		int exp;
		int hp_mod;
		int sp_mod;
		int attack_mod;
		int defense_mod;
		int spirit_mod;
		int agility_mod;
		int skills_size;
		std::vector<int16_t> skills;
		std::vector<int16_t> equipped;
		int current_hp;
		int current_sp;
		std::vector<uint8_t> unknown_50;
		int unknown_51;
		std::vector<int16_t> status;
		int unknown_5e;
	};

	class SaveInventory {
	public:
		SaveInventory();

		int party_size;
		std::vector<int16_t> party;
		int items_size;
		std::vector<int16_t> item_ids;
		std::vector<uint8_t> item_counts;
		std::vector<uint8_t> item_usage;
		int gold;
		int timer_secs;
		int timer_18;
		int timer_19;
		int battles;
		int defeats;
		int unknown_22;
		int unknown_23;
		int unknown_29;
		int steps;
	};

	class SaveMapEvent {
	public:
		SaveMapEvent();

		int ID;
		int unknown_01;
		int map_id;
		int position_x;
		int position_y;
		int unknown_15;
		int unknown_16;
		int unknown_17;
		int unknown_18;
		int unknown_1f;
		int unknown_20;
		int unknown_21;
		int unknown_22;
		int unknown_23;
		int unknown_24;
		int unknown_25;
		MoveRoute move_route;
		int unknown_2b;
		int unknown_33;
		int unknown_34;
		int unknown_35;
		int unknown_36;
		int unknown_47;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int unknown_66;
		int unknown_67;
		std::vector<uint8_t> unknown_6c;
	};

	class SaveMapInfo {
	public:
		SaveMapInfo();

		int pan_x;
		int pan_y;
		std::vector<SaveMapEvent> events;
		std::vector<uint8_t> lower_tiles;
		std::vector<uint8_t> upper_tiles;
	};

	class SaveScreen {
	public:
		SaveScreen();

		int unknown_01;
		int unknown_02;
		int unknown_03;
		int tint_04;
		double unknown_0b;
		double unknown_0c;
		double unknown_0d;
		double tint_0e;
		int tint_0f;
		int flash_14;
		int flash_15;
		int flash_16;
		int flash_17;
		double flash_18;
		int flash_19;
		int shake_1e;
		int shake_1f;
		int shake_20;
		int shake_21;
		int shake_23;
		int pan_x;
		int pan_y;
		int unknown_2b;
		int unknown_2c;
		int unknown_2d;
		int unknown_2f;
		int weather;
		int unknown_31;
	};

	class SaveCommonEventCommands {
	public:
		SaveCommonEventCommands();

		int ID;
		int commands_size;
		std::vector<EventCommand> commands;
		int unknown_0b;
	};

	class SaveCommonEventData {
	public:
		SaveCommonEventData();

		std::vector<SaveCommonEventCommands> commands;
		int time_left;
	};

	class SaveCommonEvent {
	public:
		SaveCommonEvent();

		int ID;
		SaveCommonEventData event_data;
	};

	class SaveEventCommands {
	public:
		SaveEventCommands();

		int ID;
		int commands_size;
		std::vector<EventCommand> commands;
		int unknown_0b;
		int unknown_0c;
		int unknown_0d;
		int unknown_15;
		int unknown_16;
	};

	class SaveEvents {
	public:
		SaveEvents();

		std::vector<SaveEventCommands> commands;
		int unknown_04;
	};

	class Save {
	public:
		Save();

		SaveTitle title;
		SaveData data;
		SaveScreen screen;
		std::vector<SavePicture> pictures;
		SavePartyLocation party_location;
		SaveVehicleLocation boat_location;
		SaveVehicleLocation ship_location;
		SaveVehicleLocation airship_location;
		std::vector<SaveActor> party;
		SaveInventory inventory;
		SaveMapInfo map_info;
		std::vector<SaveCommonEvent> common_events;
		SaveEvents events;
	};
}

#endif

