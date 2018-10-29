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

// Read TroopPageCondition.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT TroopPageCondition

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(RPG::TroopPageCondition::Flags, flags, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_a_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_b_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, variable_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, variable_value, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, turn_a, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, turn_b, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, fatigue_min, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, fatigue_max, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, enemy_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, enemy_hp_min, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, enemy_hp_max, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, actor_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, actor_hp_min, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, actor_hp_max, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, turn_enemy_id, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, turn_enemy_a, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, turn_enemy_b, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, turn_actor_id, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, turn_actor_a, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, turn_actor_b, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, command_actor_id, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, command_id, 0, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
