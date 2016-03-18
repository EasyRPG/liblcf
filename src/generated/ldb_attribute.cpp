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

// Read Attribute.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Attribute

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(int, type),
	LCF_STRUCT_TYPED_FIELD(int, a_rate),
	LCF_STRUCT_TYPED_FIELD(int, b_rate),
	LCF_STRUCT_TYPED_FIELD(int, c_rate),
	LCF_STRUCT_TYPED_FIELD(int, d_rate),
	LCF_STRUCT_TYPED_FIELD(int, e_rate),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
