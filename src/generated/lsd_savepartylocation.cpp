/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
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
	LCF_STRUCT_TYPED_FIELD(int, map_id),
	LCF_STRUCT_TYPED_FIELD(int, position_x),
	LCF_STRUCT_TYPED_FIELD(int, position_y),
	LCF_STRUCT_TYPED_FIELD(int, prelock_direction),
	LCF_STRUCT_TYPED_FIELD(int, direction),
	LCF_STRUCT_TYPED_FIELD(int, anim_frame),
	LCF_STRUCT_TYPED_FIELD(int, unknown_18),
	LCF_STRUCT_TYPED_FIELD(int, unknown_1f),
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
	LCF_STRUCT_TYPED_FIELD(bool, sprite_transparent),
	LCF_STRUCT_TYPED_FIELD(int, unknown_2f_overlap),
	LCF_STRUCT_TYPED_FIELD(int, anim_paused),
	LCF_STRUCT_TYPED_FIELD(int, unknown_33),
	LCF_STRUCT_TYPED_FIELD(int, unknown_34),
	LCF_STRUCT_TYPED_FIELD(int, unknown_35),
	LCF_STRUCT_TYPED_FIELD(int, unknown_36),
	LCF_STRUCT_TYPED_FIELD(int, unknown_3d),
	LCF_STRUCT_TYPED_FIELD(int, unknown_3e),
	LCF_STRUCT_TYPED_FIELD(int, unknown_3f),
	LCF_STRUCT_TYPED_FIELD(int, unknown_47),
	LCF_STRUCT_TYPED_FIELD(bool, flying),
	LCF_STRUCT_TYPED_FIELD(std::string, sprite_name),
	LCF_STRUCT_TYPED_FIELD(int, sprite_id),
	LCF_STRUCT_TYPED_FIELD(int, unknown_4b),
	LCF_STRUCT_TYPED_FIELD(int, flash_red),
	LCF_STRUCT_TYPED_FIELD(int, flash_green),
	LCF_STRUCT_TYPED_FIELD(int, flash_blue),
	LCF_STRUCT_TYPED_FIELD(double, flash_current_level),
	LCF_STRUCT_TYPED_FIELD(int, flash_time_left),
	LCF_STRUCT_TYPED_FIELD(int, unknown_65),
	LCF_STRUCT_TYPED_FIELD(int, original_move_route_index),
	LCF_STRUCT_TYPED_FIELD(int, vehicle),
	LCF_STRUCT_TYPED_FIELD(int, unknown_68),
	LCF_STRUCT_TYPED_FIELD(int, unknown_69),
	LCF_STRUCT_TYPED_FIELD(int, unknown_6c),
	LCF_STRUCT_TYPED_FIELD(int, pan_state),
	LCF_STRUCT_TYPED_FIELD(int, pan_current_x),
	LCF_STRUCT_TYPED_FIELD(int, pan_current_y),
	LCF_STRUCT_TYPED_FIELD(int, pan_finish_x),
	LCF_STRUCT_TYPED_FIELD(int, pan_finish_y),
	LCF_STRUCT_TYPED_FIELD(int, unknown_79),
	LCF_STRUCT_TYPED_FIELD(int, encounter_steps),
	LCF_STRUCT_TYPED_FIELD(int, unknown_7d),
	LCF_STRUCT_TYPED_FIELD(int, map_save_count),
	LCF_STRUCT_TYPED_FIELD(int, unknown_84),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
