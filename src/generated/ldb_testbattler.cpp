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

// Read TestBattler.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT TestBattler

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, actor_id),
	LCF_STRUCT_TYPED_FIELD(int, level),
	LCF_STRUCT_TYPED_FIELD(int, weapon_id),
	LCF_STRUCT_TYPED_FIELD(int, shield_id),
	LCF_STRUCT_TYPED_FIELD(int, armor_id),
	LCF_STRUCT_TYPED_FIELD(int, helmet_id),
	LCF_STRUCT_TYPED_FIELD(int, accessory_id),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
