/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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
		SavePartyLocation();
		void Fixup();

		int unknown_01;
		int map_id;
		int position_x;
		int position_y;
		int prelock_direction;
		int direction;
		int anim_frame;
		int unknown_18;
		int unknown_1f;
		int move_frequency;
		int layer;
		int unknown_22;
		int unknown_23;
		bool lock_facing;
		int move_speed;
		MoveRoute move_route;
		bool move_route_overwrite;
		int move_route_index;
		int unknown_2c;
		bool sprite_transparent;
		int unknown_2f;
		int anim_paused;
		int unknown_33;
		int unknown_34;
		int unknown_35;
		int unknown_36;
		int unknown_3d;
		int unknown_3e;
		int unknown_3f;
		int unknown_47;
		int unknown_48;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int flash_red;
		int flash_green;
		int flash_blue;
		double flash_current_level;
		int flash_time_left;
		int unknown_65;
		int original_move_route_index;
		int unknown_67;
		int unknown_68;
		int unknown_69;
		int unknown_6c;
		int pan_state;
		int pan_current_x;
		int pan_current_y;
		int pan_finish_x;
		int pan_finish_y;
		int unknown_79;
		int encounter_steps;
		int unknown_7d;
		int map_save_count;
		int unknown_84;
	};
}

#endif
