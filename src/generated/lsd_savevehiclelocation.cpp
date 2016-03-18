/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveVehicleLocation.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveVehicleLocation

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(bool, active),
	LCF_STRUCT_TYPED_FIELD(int, map_id),
	LCF_STRUCT_TYPED_FIELD(int, position_x),
	LCF_STRUCT_TYPED_FIELD(int, position_y),
	LCF_STRUCT_TYPED_FIELD(int, direction),
	LCF_STRUCT_TYPED_FIELD(int, sprite_direction),
	LCF_STRUCT_TYPED_FIELD(int, anim_frame),
	LCF_STRUCT_TYPED_FIELD(int, transparency),
	LCF_STRUCT_TYPED_FIELD(int, remaining_step),
	LCF_STRUCT_TYPED_FIELD(int, move_frequency),
	LCF_STRUCT_TYPED_FIELD(int, layer),
	LCF_STRUCT_TYPED_FIELD(bool, overlap_forbidden),
	LCF_STRUCT_TYPED_FIELD(int, animation_type),
	LCF_STRUCT_TYPED_FIELD(bool, lock_facing),
	LCF_STRUCT_TYPED_FIELD(int, move_speed),
	LCF_STRUCT_TYPED_FIELD(RPG::MoveRoute, move_route),
	LCF_STRUCT_TYPED_FIELD(bool, move_route_overwrite),
	LCF_STRUCT_TYPED_FIELD(int, move_route_index),
	LCF_STRUCT_TYPED_FIELD(bool, move_route_repeated),
	LCF_STRUCT_TYPED_FIELD(int, anim_paused),
	LCF_STRUCT_TYPED_FIELD(bool, through),
	LCF_STRUCT_TYPED_FIELD(int, stop_count),
	LCF_STRUCT_TYPED_FIELD(int, anim_count),
	LCF_STRUCT_TYPED_FIELD(int, max_stop_count),
	LCF_STRUCT_TYPED_FIELD(bool, jumping),
	LCF_STRUCT_TYPED_FIELD(int, begin_jump_x),
	LCF_STRUCT_TYPED_FIELD(int, begin_jump_y),
	LCF_STRUCT_TYPED_FIELD(int, unknown_47_pause),
	LCF_STRUCT_TYPED_FIELD(bool, flying),
	LCF_STRUCT_TYPED_FIELD(std::string, sprite_name),
	LCF_STRUCT_TYPED_FIELD(int, sprite_id),
	LCF_STRUCT_TYPED_FIELD(int, unknown_4b_sprite_move),
	LCF_STRUCT_TYPED_FIELD(int, flash_red),
	LCF_STRUCT_TYPED_FIELD(int, flash_green),
	LCF_STRUCT_TYPED_FIELD(int, flash_blue),
	LCF_STRUCT_TYPED_FIELD(double, flash_current_level),
	LCF_STRUCT_TYPED_FIELD(int, flash_time_left),
	LCF_STRUCT_TYPED_FIELD(int, vehicle),
	LCF_STRUCT_TYPED_FIELD(int, original_move_route_index),
	LCF_STRUCT_TYPED_FIELD(int, remaining_ascent),
	LCF_STRUCT_TYPED_FIELD(int, remaining_descent),
	LCF_STRUCT_TYPED_FIELD(std::string, sprite2_name),
	LCF_STRUCT_TYPED_FIELD(int, sprite2_id),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
