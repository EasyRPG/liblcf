/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEPARTYLOCATION_H
#define LCF_RPG_SAVEPARTYLOCATION_H

// Headers
#include <string>
#include "rpg_moveroute.h"

/**
 * RPG::SavePartyLocation class.
 */
namespace RPG {
	class SavePartyLocation {
	public:
		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};

		bool active = true;
		int map_id = -1;
		int position_x = -1;
		int position_y = -1;
		int direction = 2;
		int sprite_direction = 2;
		int anim_frame = 1;
		int transparency = 0;
		int remaining_step = 0;
		int move_frequency = 2;
		int layer = 1;
		bool overlap_forbidden = false;
		int animation_type = 1;
		bool lock_facing = false;
		int move_speed = 4;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int move_route_index = 0;
		bool move_route_repeated = false;
		bool sprite_transparent = false;
		int unknown_2f_overlap = 0;
		int anim_paused = 0;
		bool through = false;
		int stop_count = 0;
		int anim_count = 0;
		int max_stop_count = 0;
		bool jumping = false;
		int begin_jump_x = 0;
		int begin_jump_y = 0;
		int unknown_47_pause = 0;
		bool flying = false;
		std::string sprite_name;
		int sprite_id = 0;
		int unknown_4b_sprite_move = 0;
		int flash_red = 100;
		int flash_green = 100;
		int flash_blue = 100;
		double flash_current_level = 0.0;
		int flash_time_left = 0;
		bool boarding = false;
		bool aboard = false;
		int vehicle = 0;
		bool unboarding = false;
		int preboard_move_speed = 4;
		int unknown_6c_menu_calling = 0;
		int pan_state = 1;
		int pan_current_x = 2304;
		int pan_current_y = 1792;
		int pan_finish_x = 2304;
		int pan_finish_y = 1792;
		int pan_speed = 16;
		int encounter_steps = 0;
		bool unknown_7d_encounter_calling = false;
		int map_save_count = 0;
		int database_save_count = 0;
	};
}

#endif
