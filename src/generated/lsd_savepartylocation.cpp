/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
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

// Read SavePartyLocation.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SavePartyLocation

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(bool, active),
	LCF_STRUCT_TYPED_FIELD(int32_t, map_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, position_x),
	LCF_STRUCT_TYPED_FIELD(int32_t, position_y),
	LCF_STRUCT_TYPED_FIELD(int32_t, direction),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_direction),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_frame),
	LCF_STRUCT_TYPED_FIELD(int32_t, transparency),
	LCF_STRUCT_TYPED_FIELD(int32_t, remaining_step),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_frequency),
	LCF_STRUCT_TYPED_FIELD(int32_t, layer),
	LCF_STRUCT_TYPED_FIELD(bool, overlap_forbidden),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_type),
	LCF_STRUCT_TYPED_FIELD(bool, lock_facing),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_speed),
	LCF_STRUCT_TYPED_FIELD(RPG::MoveRoute, move_route),
	LCF_STRUCT_TYPED_FIELD(bool, move_route_overwrite),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_route_index),
	LCF_STRUCT_TYPED_FIELD(bool, move_route_repeated),
	LCF_STRUCT_TYPED_FIELD(bool, sprite_transparent),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_2f_overlap),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_paused),
	LCF_STRUCT_TYPED_FIELD(bool, through),
	LCF_STRUCT_TYPED_FIELD(int32_t, stop_count),
	LCF_STRUCT_TYPED_FIELD(int32_t, anim_count),
	LCF_STRUCT_TYPED_FIELD(int32_t, max_stop_count),
	LCF_STRUCT_TYPED_FIELD(bool, jumping),
	LCF_STRUCT_TYPED_FIELD(int32_t, begin_jump_x),
	LCF_STRUCT_TYPED_FIELD(int32_t, begin_jump_y),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_47_pause),
	LCF_STRUCT_TYPED_FIELD(bool, flying),
	LCF_STRUCT_TYPED_FIELD(std::string, sprite_name),
	LCF_STRUCT_TYPED_FIELD(int32_t, sprite_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_4b_sprite_move),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_red),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_green),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_blue),
	LCF_STRUCT_TYPED_FIELD(double, flash_current_level),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_time_left),
	LCF_STRUCT_TYPED_FIELD(bool, boarding),
	LCF_STRUCT_TYPED_FIELD(bool, aboard),
	LCF_STRUCT_TYPED_FIELD(int32_t, vehicle),
	LCF_STRUCT_TYPED_FIELD(bool, unboarding),
	LCF_STRUCT_TYPED_FIELD(int32_t, preboard_move_speed),
	LCF_STRUCT_TYPED_FIELD(int32_t, unknown_6c_menu_calling),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_state),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_current_x),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_current_y),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_finish_x),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_finish_y),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_speed),
	LCF_STRUCT_TYPED_FIELD(int32_t, encounter_steps),
	LCF_STRUCT_TYPED_FIELD(bool, unknown_7d_encounter_calling),
	LCF_STRUCT_TYPED_FIELD(int32_t, map_save_count),
	LCF_STRUCT_TYPED_FIELD(int32_t, database_save_count),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
