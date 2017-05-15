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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Troop.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Troop

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::TroopMember>, members),
	LCF_STRUCT_TYPED_FIELD(bool, auto_alignment),
	LCF_STRUCT_SIZE_FIELD(bool, terrain_set),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, terrain_set),
	LCF_STRUCT_TYPED_FIELD(bool, appear_randomly),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::TroopPage>, pages),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
