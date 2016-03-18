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

// Read SavePicture.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SavePicture

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(double, start_x),
	LCF_STRUCT_TYPED_FIELD(double, start_y),
	LCF_STRUCT_TYPED_FIELD(double, current_x),
	LCF_STRUCT_TYPED_FIELD(double, current_y),
	LCF_STRUCT_TYPED_FIELD(bool, fixed_to_map),
	LCF_STRUCT_TYPED_FIELD(double, current_magnify),
	LCF_STRUCT_TYPED_FIELD(double, current_top_trans),
	LCF_STRUCT_TYPED_FIELD(bool, transparency),
	LCF_STRUCT_TYPED_FIELD(double, current_red),
	LCF_STRUCT_TYPED_FIELD(double, current_green),
	LCF_STRUCT_TYPED_FIELD(double, current_blue),
	LCF_STRUCT_TYPED_FIELD(double, current_sat),
	LCF_STRUCT_TYPED_FIELD(int, effect_mode),
	LCF_STRUCT_TYPED_FIELD(double, current_effect),
	LCF_STRUCT_TYPED_FIELD(double, current_bot_trans),
	LCF_STRUCT_TYPED_FIELD(double, finish_x),
	LCF_STRUCT_TYPED_FIELD(double, finish_y),
	LCF_STRUCT_TYPED_FIELD(int, finish_magnify),
	LCF_STRUCT_TYPED_FIELD(int, finish_top_trans),
	LCF_STRUCT_TYPED_FIELD(int, finish_bot_trans),
	LCF_STRUCT_TYPED_FIELD(int, finish_red),
	LCF_STRUCT_TYPED_FIELD(int, finish_green),
	LCF_STRUCT_TYPED_FIELD(int, finish_blue),
	LCF_STRUCT_TYPED_FIELD(int, finish_sat),
	LCF_STRUCT_TYPED_FIELD(int, finish_effect),
	LCF_STRUCT_TYPED_FIELD(int, time_left),
	LCF_STRUCT_TYPED_FIELD(double, current_rotation),
	LCF_STRUCT_TYPED_FIELD(int, current_waver),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
