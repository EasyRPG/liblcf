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

// Read BattleCommands.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT BattleCommands

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, placement),
	LCF_STRUCT_TYPED_FIELD(int, death_handler1),
	LCF_STRUCT_TYPED_FIELD(int, row),
	LCF_STRUCT_TYPED_FIELD(int, battle_type),
	LCF_STRUCT_TYPED_FIELD(int, unknown_09),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::BattleCommand>, commands),
	LCF_STRUCT_TYPED_FIELD(int, death_handler2),
	LCF_STRUCT_TYPED_FIELD(int, death_event),
	LCF_STRUCT_TYPED_FIELD(int, window_size),
	LCF_STRUCT_TYPED_FIELD(int, transparency),
	LCF_STRUCT_TYPED_FIELD(bool, teleport),
	LCF_STRUCT_TYPED_FIELD(int, teleport_id),
	LCF_STRUCT_TYPED_FIELD(int, teleport_x),
	LCF_STRUCT_TYPED_FIELD(int, teleport_y),
	LCF_STRUCT_TYPED_FIELD(int, teleport_face),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
