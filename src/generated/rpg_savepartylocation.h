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
		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};

		SavePartyLocation();
		void Fixup();

		bool active;
		int map_id;
		int position_x;
		int position_y;
		int prelock_direction;
		int direction;
		int anim_frame;
		int transparency;
		int remaining_step;
		int move_frequency;
		int layer;
		bool overlap_forbidden;
		int animation_type;
		bool lock_facing;
		int move_speed;
		MoveRoute move_route;
		bool move_route_overwrite;
		int move_route_index;
		bool move_route_repeated;
		bool sprite_transparent;
		int unknown_2f_overlap;
		int anim_paused;
		int unknown_33;
		int stop_count;
		int anim_count;
		int unknown_36;
		bool jumping;
		int begin_jump_x;
		int begin_jump_y;
		int unknown_47;
		bool flying;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int flash_red;
		int flash_green;
		int flash_blue;
		double flash_current_level;
		int flash_time_left;
		bool boarding;
		bool aboard;
		int vehicle;
		bool unboarding;
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
		int database_save_count;
	};
}

#endif
