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

// Read Enemy.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Enemy

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, battler_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battler_hue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, max_hp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, max_sp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, attack, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, defense, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, spirit, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, agility, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, transparent, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, exp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, gold, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, drop_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, drop_prob, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, critical_hit, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, critical_hit_chance, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, miss, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, levitate, 0, 0),
	LCF_STRUCT_SIZE_FIELD(uint8_t, state_ranks, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, state_ranks, 1, 0),
	LCF_STRUCT_SIZE_FIELD(uint8_t, attribute_ranks, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, attribute_ranks, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::EnemyAction>, actions, 1, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
