/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

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
 * along with EasyRPG Player. If not, see <http: *www.gnu.org/licenses/>.
 */

#ifndef _RPG_SAVEPARTYLOCATION_H_
#define _RPG_SAVEPARTYLOCATION_H_

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

		int unknown_01;
		int map_id;
		int position_x;
		int position_y;
		int prelock_facing;
		int facing;
		int anim_frame;
		int unknown_18;
		int unknown_1f;
		int move_speed;
		int layer;
		int unknown_22;
		int unknown_23;
		bool lock_facing;
		int move_frequency;
		MoveRoute move_route;
		int unknown_2a;
		int unknown_2b;
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
		int unknown_66;
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
