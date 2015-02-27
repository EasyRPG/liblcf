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

// Read SaveEvents.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveEvents

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveEventCommands>, events),
	LCF_STRUCT_TYPED_FIELD(int, events_size),
	LCF_STRUCT_TYPED_FIELD(int, unknown_0b),
	LCF_STRUCT_TYPED_FIELD(int, unknown_0d),
	LCF_STRUCT_TYPED_FIELD(int, unknown_15),
	LCF_STRUCT_TYPED_FIELD(int, unknown_16),
	LCF_STRUCT_TYPED_FIELD(int, unknown_17),
	LCF_STRUCT_TYPED_FIELD(int, unknown_18),
	LCF_STRUCT_TYPED_FIELD(int, unknown_19),
	LCF_STRUCT_TYPED_FIELD(int, unknown_1a),
	LCF_STRUCT_TYPED_FIELD(int, unknown_1b),
	LCF_STRUCT_TYPED_FIELD(int, unknown_1c),
	LCF_STRUCT_TYPED_FIELD(int, wait_count),
	LCF_STRUCT_TYPED_FIELD(int, unknown_20),
	LCF_STRUCT_TYPED_FIELD(int, unknown_23),
	LCF_STRUCT_TYPED_FIELD(int, unknown_24),
	LCF_STRUCT_TYPED_FIELD(int, unknown_25),
	LCF_STRUCT_TYPED_FIELD(int, unknown_26),
	LCF_STRUCT_TYPED_FIELD(int, unknown_29),
	LCF_STRUCT_TYPED_FIELD(int, unknown_2a),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
