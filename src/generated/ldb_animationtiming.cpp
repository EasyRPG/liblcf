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

// Read AnimationTiming.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT AnimationTiming

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, frame),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, se),
	LCF_STRUCT_TYPED_FIELD(int, flash_scope),
	LCF_STRUCT_TYPED_FIELD(int, flash_red),
	LCF_STRUCT_TYPED_FIELD(int, flash_green),
	LCF_STRUCT_TYPED_FIELD(int, flash_blue),
	LCF_STRUCT_TYPED_FIELD(int, flash_power),
	LCF_STRUCT_TYPED_FIELD(int, screen_shake),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
