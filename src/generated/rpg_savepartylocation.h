/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEPARTYLOCATION_H
#define LCF_RPG_SAVEPARTYLOCATION_H

// Headers
#include <stdint.h>
#include <string>
#include "enum_tags.h"
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
		static constexpr auto kVehicleTypeTags = makeEnumTags<VehicleType>(
			"none",
			"skiff",
			"ship",
			"airship"
		);

		bool active = true;
		int32_t map_id = -1;
		int32_t position_x = -1;
		int32_t position_y = -1;
		int32_t direction = 2;
		int32_t sprite_direction = 2;
		int32_t anim_frame = 1;
		int32_t transparency = 0;
		int32_t remaining_step = 0;
		int32_t move_frequency = 2;
		int32_t layer = 1;
		bool overlap_forbidden = false;
		int32_t animation_type = 1;
		bool lock_facing = false;
		int32_t move_speed = 4;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int32_t move_route_index = 0;
		bool move_route_repeated = false;
		bool sprite_transparent = false;
		int32_t unknown_2f_overlap = 0;
		int32_t anim_paused = 0;
		bool through = false;
		int32_t stop_count = 0;
		int32_t anim_count = 0;
		int32_t max_stop_count = 0;
		bool jumping = false;
		int32_t begin_jump_x = 0;
		int32_t begin_jump_y = 0;
		int32_t unknown_47_pause = 0;
		bool flying = false;
		std::string sprite_name;
		int32_t sprite_id = 0;
		int32_t unknown_4b_sprite_move = 0;
		int32_t flash_red = 100;
		int32_t flash_green = 100;
		int32_t flash_blue = 100;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
		bool boarding = false;
		bool aboard = false;
		int32_t vehicle = 0;
		bool unboarding = false;
		int32_t preboard_move_speed = 4;
		int32_t unknown_6c_menu_calling = 0;
		int32_t pan_state = 1;
		int32_t pan_current_x = 2304;
		int32_t pan_current_y = 1792;
		int32_t pan_finish_x = 2304;
		int32_t pan_finish_y = 1792;
		int32_t pan_speed = 16;
		int32_t encounter_steps = 0;
		bool unknown_7d_encounter_calling = false;
		int32_t map_save_count = 0;
		int32_t database_save_count = 0;
	};
}

#endif
