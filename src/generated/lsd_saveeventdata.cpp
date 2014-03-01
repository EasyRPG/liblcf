/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveEventData.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveEventData

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveEventCommands>, commands),
	LCF_STRUCT_TYPED_FIELD(int, unknown_16),
	LCF_STRUCT_TYPED_FIELD(int, unknown_17),
	LCF_STRUCT_TYPED_FIELD(int, time_left),
	LCF_STRUCT_TYPED_FIELD(int, unknown_20),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
