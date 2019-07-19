/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEMAPEVENTBASE_H
#define LCF_RPG_SAVEMAPEVENTBASE_H

// Headers
#include <stdint.h>
#include <string>
#include "enum_tags.h"
#include "rpg_moveroute.h"

/**
 * RPG::SaveMapEventBase class.
 */
namespace RPG {
	class SaveMapEventBase {
	public:
		bool active = true;
		int32_t map_id = 0;
		int32_t position_x = 0;
		int32_t position_y = 0;
		int32_t direction = 2;
		int32_t sprite_direction = 2;
		int32_t anim_frame = 1;
		int32_t transparency = 0;
		int32_t remaining_step = 0;
		int32_t move_frequency = 2;
		int32_t layer = 1;
		bool overlap_forbidden = false;
		int32_t animation_type = 0;
		bool lock_facing = false;
		int32_t move_speed = 4;
		MoveRoute move_route;
		bool move_route_overwrite = false;
		int32_t move_route_index = 0;
		bool move_route_repeated = false;
		bool sprite_transparent = false;
		bool route_through = false;
		int32_t anim_paused = 0;
		bool through = false;
		int32_t stop_count = 0;
		int32_t anim_count = 0;
		int32_t max_stop_count = 0;
		bool jumping = false;
		int32_t begin_jump_x = 0;
		int32_t begin_jump_y = 0;
		bool pause = false;
		bool flying = false;
		std::string sprite_name;
		int32_t sprite_id = 0;
		bool processed = false;
		int32_t flash_red = -1;
		int32_t flash_green = -1;
		int32_t flash_blue = -1;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
	};

	inline bool operator==(const SaveMapEventBase& l, const SaveMapEventBase& r) {
		return l.active == r.active
		&& l.map_id == r.map_id
		&& l.position_x == r.position_x
		&& l.position_y == r.position_y
		&& l.direction == r.direction
		&& l.sprite_direction == r.sprite_direction
		&& l.anim_frame == r.anim_frame
		&& l.transparency == r.transparency
		&& l.remaining_step == r.remaining_step
		&& l.move_frequency == r.move_frequency
		&& l.layer == r.layer
		&& l.overlap_forbidden == r.overlap_forbidden
		&& l.animation_type == r.animation_type
		&& l.lock_facing == r.lock_facing
		&& l.move_speed == r.move_speed
		&& l.move_route == r.move_route
		&& l.move_route_overwrite == r.move_route_overwrite
		&& l.move_route_index == r.move_route_index
		&& l.move_route_repeated == r.move_route_repeated
		&& l.sprite_transparent == r.sprite_transparent
		&& l.route_through == r.route_through
		&& l.anim_paused == r.anim_paused
		&& l.through == r.through
		&& l.stop_count == r.stop_count
		&& l.anim_count == r.anim_count
		&& l.max_stop_count == r.max_stop_count
		&& l.jumping == r.jumping
		&& l.begin_jump_x == r.begin_jump_x
		&& l.begin_jump_y == r.begin_jump_y
		&& l.pause == r.pause
		&& l.flying == r.flying
		&& l.sprite_name == r.sprite_name
		&& l.sprite_id == r.sprite_id
		&& l.processed == r.processed
		&& l.flash_red == r.flash_red
		&& l.flash_green == r.flash_green
		&& l.flash_blue == r.flash_blue
		&& l.flash_current_level == r.flash_current_level
		&& l.flash_time_left == r.flash_time_left;
	}

	inline bool operator!=(const SaveMapEventBase& l, const SaveMapEventBase& r) {
		return !(l == r);
	}
}

#endif
