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

// Read State.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT State

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(int32_t, type),
	LCF_STRUCT_TYPED_FIELD(int32_t, color),
	LCF_STRUCT_TYPED_FIELD(int32_t, priority),
	LCF_STRUCT_TYPED_FIELD(int32_t, restriction),
	LCF_STRUCT_TYPED_FIELD(int32_t, a_rate),
	LCF_STRUCT_TYPED_FIELD(int32_t, b_rate),
	LCF_STRUCT_TYPED_FIELD(int32_t, c_rate),
	LCF_STRUCT_TYPED_FIELD(int32_t, d_rate),
	LCF_STRUCT_TYPED_FIELD(int32_t, e_rate),
	LCF_STRUCT_TYPED_FIELD(int32_t, hold_turn),
	LCF_STRUCT_TYPED_FIELD(int32_t, auto_release_prob),
	LCF_STRUCT_TYPED_FIELD(int32_t, release_by_damage),
	LCF_STRUCT_TYPED_FIELD(int32_t, affect_type),
	LCF_STRUCT_TYPED_FIELD(bool, affect_attack),
	LCF_STRUCT_TYPED_FIELD(bool, affect_defense),
	LCF_STRUCT_TYPED_FIELD(bool, affect_spirit),
	LCF_STRUCT_TYPED_FIELD(bool, affect_agility),
	LCF_STRUCT_TYPED_FIELD(int32_t, reduce_hit_ratio),
	LCF_STRUCT_TYPED_FIELD(bool, avoid_attacks),
	LCF_STRUCT_TYPED_FIELD(bool, reflect_magic),
	LCF_STRUCT_TYPED_FIELD(bool, cursed),
	LCF_STRUCT_TYPED_FIELD(int32_t, battler_animation_id),
	LCF_STRUCT_TYPED_FIELD(bool, restrict_skill),
	LCF_STRUCT_TYPED_FIELD(int32_t, restrict_skill_level),
	LCF_STRUCT_TYPED_FIELD(bool, restrict_magic),
	LCF_STRUCT_TYPED_FIELD(int32_t, restrict_magic_level),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_type),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_type),
	LCF_STRUCT_TYPED_FIELD(std::string, message_actor),
	LCF_STRUCT_TYPED_FIELD(std::string, message_enemy),
	LCF_STRUCT_TYPED_FIELD(std::string, message_already),
	LCF_STRUCT_TYPED_FIELD(std::string, message_affected),
	LCF_STRUCT_TYPED_FIELD(std::string, message_recovery),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_max),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_val),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_map_val),
	LCF_STRUCT_TYPED_FIELD(int32_t, hp_change_map_steps),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_max),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_val),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_map_val),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_change_map_steps),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
