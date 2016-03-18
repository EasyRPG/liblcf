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

// Read SaveScreen.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveScreen

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, tint_finish_red),
	LCF_STRUCT_TYPED_FIELD(int, tint_finish_green),
	LCF_STRUCT_TYPED_FIELD(int, tint_finish_blue),
	LCF_STRUCT_TYPED_FIELD(int, tint_finish_sat),
	LCF_STRUCT_TYPED_FIELD(double, tint_current_red),
	LCF_STRUCT_TYPED_FIELD(double, tint_current_green),
	LCF_STRUCT_TYPED_FIELD(double, tint_current_blue),
	LCF_STRUCT_TYPED_FIELD(double, tint_current_sat),
	LCF_STRUCT_TYPED_FIELD(int, tint_time_left),
	LCF_STRUCT_TYPED_FIELD(bool, flash_continuous),
	LCF_STRUCT_TYPED_FIELD(int, flash_red),
	LCF_STRUCT_TYPED_FIELD(int, flash_green),
	LCF_STRUCT_TYPED_FIELD(int, flash_blue),
	LCF_STRUCT_TYPED_FIELD(double, flash_current_level),
	LCF_STRUCT_TYPED_FIELD(int, flash_time_left),
	LCF_STRUCT_TYPED_FIELD(bool, shake_continuous),
	LCF_STRUCT_TYPED_FIELD(int, shake_strength),
	LCF_STRUCT_TYPED_FIELD(int, shake_speed),
	LCF_STRUCT_TYPED_FIELD(int, shake_position),
	LCF_STRUCT_TYPED_FIELD(int, shake_position_y),
	LCF_STRUCT_TYPED_FIELD(int, shake_time_left),
	LCF_STRUCT_TYPED_FIELD(int, pan_x),
	LCF_STRUCT_TYPED_FIELD(int, pan_y),
	LCF_STRUCT_TYPED_FIELD(int, battleanim_id),
	LCF_STRUCT_TYPED_FIELD(int, battleanim_target),
	LCF_STRUCT_TYPED_FIELD(int, battleanim_frame),
	LCF_STRUCT_TYPED_FIELD(int, unknown_2e_battleanim_active),
	LCF_STRUCT_TYPED_FIELD(bool, battleanim_global),
	LCF_STRUCT_TYPED_FIELD(int, weather),
	LCF_STRUCT_TYPED_FIELD(int, weather_strength),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
