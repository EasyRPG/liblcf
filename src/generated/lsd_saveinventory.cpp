/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveInventory.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveInventory

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, party_size, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, party, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, items_size, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, item_ids, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, item_counts, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, item_usage, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, gold, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, timer1_secs, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, timer1_active, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, timer1_visible, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, timer1_battle, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, timer2_secs, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, timer2_active, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, timer2_visible, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, timer2_battle, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battles, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, defeats, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, escapes, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, victories, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, turns, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, steps, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
