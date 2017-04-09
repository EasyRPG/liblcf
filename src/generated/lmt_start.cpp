/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
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
	LCF_STRUCT_TYPED_FIELD(int, party_map_id),
	LCF_STRUCT_TYPED_FIELD(int, party_x),
	LCF_STRUCT_TYPED_FIELD(int, party_y),
	LCF_STRUCT_TYPED_FIELD(int, boat_map_id),
	LCF_STRUCT_TYPED_FIELD(int, boat_x),
	LCF_STRUCT_TYPED_FIELD(int, boat_y),
	LCF_STRUCT_TYPED_FIELD(int, ship_map_id),
	LCF_STRUCT_TYPED_FIELD(int, ship_x),
	LCF_STRUCT_TYPED_FIELD(int, ship_y),
	LCF_STRUCT_TYPED_FIELD(int, airship_map_id),
	LCF_STRUCT_TYPED_FIELD(int, airship_x),
	LCF_STRUCT_TYPED_FIELD(int, airship_y),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
