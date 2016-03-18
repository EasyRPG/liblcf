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

// Read AnimationCellData.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT AnimationCellData

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, valid),
	LCF_STRUCT_TYPED_FIELD(int, cell_id),
	LCF_STRUCT_TYPED_FIELD(int, x),
	LCF_STRUCT_TYPED_FIELD(int, y),
	LCF_STRUCT_TYPED_FIELD(int, zoom),
	LCF_STRUCT_TYPED_FIELD(int, tone_red),
	LCF_STRUCT_TYPED_FIELD(int, tone_green),
	LCF_STRUCT_TYPED_FIELD(int, tone_blue),
	LCF_STRUCT_TYPED_FIELD(int, tone_gray),
	LCF_STRUCT_TYPED_FIELD(int, transparency),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
