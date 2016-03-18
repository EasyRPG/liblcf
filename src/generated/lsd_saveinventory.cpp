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

// Read SaveInventory.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveInventory

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, party_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, party),
	LCF_STRUCT_TYPED_FIELD(int, items_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, item_ids),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, item_counts),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, item_usage),
	LCF_STRUCT_TYPED_FIELD(int, gold),
	LCF_STRUCT_TYPED_FIELD(int, timer1_secs),
	LCF_STRUCT_TYPED_FIELD(bool, timer1_active),
	LCF_STRUCT_TYPED_FIELD(bool, timer1_visible),
	LCF_STRUCT_TYPED_FIELD(bool, timer1_battle),
	LCF_STRUCT_TYPED_FIELD(int, timer2_secs),
	LCF_STRUCT_TYPED_FIELD(bool, timer2_active),
	LCF_STRUCT_TYPED_FIELD(bool, timer2_visible),
	LCF_STRUCT_TYPED_FIELD(bool, timer2_battle),
	LCF_STRUCT_TYPED_FIELD(int, battles),
	LCF_STRUCT_TYPED_FIELD(int, defeats),
	LCF_STRUCT_TYPED_FIELD(int, escapes),
	LCF_STRUCT_TYPED_FIELD(int, victories),
	LCF_STRUCT_TYPED_FIELD(int, turns),
	LCF_STRUCT_TYPED_FIELD(int, steps),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
