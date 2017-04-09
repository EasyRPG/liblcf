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

// Read Enemy.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Enemy

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::string, battler_name),
	LCF_STRUCT_TYPED_FIELD(int, battler_hue),
	LCF_STRUCT_TYPED_FIELD(int, max_hp),
	LCF_STRUCT_TYPED_FIELD(int, max_sp),
	LCF_STRUCT_TYPED_FIELD(int, attack),
	LCF_STRUCT_TYPED_FIELD(int, defense),
	LCF_STRUCT_TYPED_FIELD(int, spirit),
	LCF_STRUCT_TYPED_FIELD(int, agility),
	LCF_STRUCT_TYPED_FIELD(bool, transparent),
	LCF_STRUCT_TYPED_FIELD(int, exp),
	LCF_STRUCT_TYPED_FIELD(int, gold),
	LCF_STRUCT_TYPED_FIELD(int, drop_id),
	LCF_STRUCT_TYPED_FIELD(int, drop_prob),
	LCF_STRUCT_TYPED_FIELD(bool, critical_hit),
	LCF_STRUCT_TYPED_FIELD(int, critical_hit_chance),
	LCF_STRUCT_TYPED_FIELD(bool, miss),
	LCF_STRUCT_TYPED_FIELD(bool, levitate),
	LCF_STRUCT_SIZE_FIELD(uint8_t, state_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, state_ranks),
	LCF_STRUCT_SIZE_FIELD(uint8_t, attribute_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, attribute_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::EnemyAction>, actions),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
