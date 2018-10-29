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

// Read State.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT State

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, color, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, priority, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, restriction, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, a_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, b_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, c_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, d_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, e_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hold_turn, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, auto_release_prob, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, release_by_damage, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, affect_type, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, affect_attack, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_defense, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_spirit, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_agility, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, reduce_hit_ratio, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, avoid_attacks, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, reflect_magic, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, cursed, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, battler_animation_id, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, restrict_skill, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, restrict_skill_level, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, restrict_magic, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, restrict_magic_level, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_type, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_type, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, message_actor, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, message_enemy, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, message_already, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, message_affected, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, message_recovery, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_max, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_val, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_map_steps, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_map_val, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_max, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_val, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_map_steps, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_map_val, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
