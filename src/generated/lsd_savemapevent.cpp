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

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveMapEvent.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveMapEvent

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(bool, active, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, map_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, position_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, position_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, direction, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_direction, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_frame, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, transparency, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, remaining_step, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_frequency, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, layer, 1, 0),
	LCF_STRUCT_TYPED_FIELD(bool, overlap_forbidden, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(bool, lock_facing, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_speed, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::MoveRoute, move_route, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, move_route_overwrite, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_route_index, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, move_route_repeated, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, route_through, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_paused, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, through, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, stop_count, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_count, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, max_stop_count, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, jumping, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, begin_jump_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, begin_jump_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, pause, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, flying, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, sprite_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, processed, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_red, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_green, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_blue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, flash_current_level, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_time_left, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, running, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, original_move_route_index, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, pending, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveEventData, event_data, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
