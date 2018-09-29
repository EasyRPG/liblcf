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

// Read SaveTitle.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveTitle

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(double, timestamp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, hero_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hero_level, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hero_hp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, face1_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, face1_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, face2_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, face2_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, face3_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, face3_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, face4_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, face4_id, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
