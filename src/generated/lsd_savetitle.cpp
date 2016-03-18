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

// Read SaveTitle.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveTitle

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(double, timestamp),
	LCF_STRUCT_TYPED_FIELD(std::string, hero_name),
	LCF_STRUCT_TYPED_FIELD(int, hero_level),
	LCF_STRUCT_TYPED_FIELD(int, hero_hp),
	LCF_STRUCT_TYPED_FIELD(std::string, face1_name),
	LCF_STRUCT_TYPED_FIELD(int, face1_id),
	LCF_STRUCT_TYPED_FIELD(std::string, face2_name),
	LCF_STRUCT_TYPED_FIELD(int, face2_id),
	LCF_STRUCT_TYPED_FIELD(std::string, face3_name),
	LCF_STRUCT_TYPED_FIELD(int, face3_id),
	LCF_STRUCT_TYPED_FIELD(std::string, face4_name),
	LCF_STRUCT_TYPED_FIELD(int, face4_id),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
