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

// Read CommonEvent.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT CommonEvent

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(int, trigger),
	LCF_STRUCT_TYPED_FIELD(bool, switch_flag),
	LCF_STRUCT_TYPED_FIELD(int, switch_id),
	LCF_STRUCT_SIZE_FIELD(RPG::EventCommand, event_commands),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::EventCommand>, event_commands),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
