/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct.h"

// Read EventPage.

#define LCF_CHUNK_SUFFIX LMU_Reader
#define LCF_CURRENT_STRUCT EventPage

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(RPG::EventPageCondition, condition),
	LCF_STRUCT_TYPED_FIELD(std::string, character_name),
	LCF_STRUCT_TYPED_FIELD(int, character_index),
	LCF_STRUCT_TYPED_FIELD(int, character_direction),
	LCF_STRUCT_TYPED_FIELD(int, character_pattern),
	LCF_STRUCT_TYPED_FIELD(bool, translucent),
	LCF_STRUCT_TYPED_FIELD(int, move_type),
	LCF_STRUCT_TYPED_FIELD(int, move_frequency),
	LCF_STRUCT_TYPED_FIELD(int, trigger),
	LCF_STRUCT_TYPED_FIELD(int, layer),
	LCF_STRUCT_TYPED_FIELD(bool, overlap_forbidden),
	LCF_STRUCT_TYPED_FIELD(int, animation_type),
	LCF_STRUCT_TYPED_FIELD(int, move_speed),
	LCF_STRUCT_TYPED_FIELD(RPG::MoveRoute, move_route),
	LCF_STRUCT_SIZE_FIELD(RPG::EventCommand, event_commands),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::EventCommand>, event_commands),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
