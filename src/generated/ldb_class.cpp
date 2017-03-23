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

// Read Class.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Class

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(bool, two_weapon),
	LCF_STRUCT_TYPED_FIELD(bool, lock_equipment),
	LCF_STRUCT_TYPED_FIELD(bool, auto_battle),
	LCF_STRUCT_TYPED_FIELD(bool, super_guard),
	LCF_STRUCT_TYPED_FIELD(RPG::Parameters, parameters),
	LCF_STRUCT_TYPED_FIELD(int, exp_base),
	LCF_STRUCT_TYPED_FIELD(int, exp_inflation),
	LCF_STRUCT_TYPED_FIELD(int, exp_correction),
	LCF_STRUCT_TYPED_FIELD(int, battler_animation),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Learning>, skills),
	LCF_STRUCT_SIZE_FIELD(uint8_t, state_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, state_ranks),
	LCF_STRUCT_SIZE_FIELD(uint8_t, attribute_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, attribute_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, battle_commands),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
