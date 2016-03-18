/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Chipset.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Chipset

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::string, chipset_name),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, terrain_data),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, passable_data_lower),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, passable_data_upper),
	LCF_STRUCT_TYPED_FIELD(int, animation_type),
	LCF_STRUCT_TYPED_FIELD(int, animation_speed),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
