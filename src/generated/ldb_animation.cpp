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

// Read Animation.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Animation

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::string, animation_name),
	LCF_STRUCT_TYPED_FIELD(int, unknown_03),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::AnimationTiming>, timings),
	LCF_STRUCT_TYPED_FIELD(int, scope),
	LCF_STRUCT_TYPED_FIELD(int, position),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::AnimationFrame>, frames),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
