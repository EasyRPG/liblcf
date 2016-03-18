/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveEventCommands.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveEventCommands

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, commands_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::EventCommand>, commands),
	LCF_STRUCT_TYPED_FIELD(int, current_command),
	LCF_STRUCT_TYPED_FIELD(int, event_id),
	LCF_STRUCT_TYPED_FIELD(bool, actioned),
	LCF_STRUCT_TYPED_FIELD(int, unknown_15_subcommand_path_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, unknown_16_subcommand_path),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
