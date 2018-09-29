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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Chipset.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Chipset

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, chipset_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, terrain_data, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, passable_data_lower, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, passable_data_upper, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_type, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_speed, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
