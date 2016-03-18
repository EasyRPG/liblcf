/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEVEHICLELOCATION_H
#define LCF_RPG_SAVEVEHICLELOCATION_H

// Headers
#include <string>
#include "rpg_moveroute.h"

/**
 * RPG::SaveVehicleLocation class.
 */
namespace RPG {
	class SaveVehicleLocation {
	public:
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
		int move_speed = -1;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int move_route_index = 0;
		bool move_route_repeated = false;
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
		int vehicle = 0;
		int original_move_route_index = 0;
		int remaining_ascent = 0;
		int remaining_descent = 0;
		std::string sprite2_name;
		int sprite2_id = 0;
	};
}

#endif
