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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_struct.h"

// Read Start.

#define LCF_CHUNK_SUFFIX LMT_Reader
#define LCF_CURRENT_STRUCT Start

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, party_map_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, party_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, party_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, boat_map_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, boat_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, boat_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, ship_map_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, ship_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, ship_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, airship_map_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, airship_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, airship_y, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
