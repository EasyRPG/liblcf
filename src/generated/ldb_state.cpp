/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
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
	LCF_STRUCT_TYPED_FIELD(int, type),
	LCF_STRUCT_TYPED_FIELD(int, color),
	LCF_STRUCT_TYPED_FIELD(int, priority),
	LCF_STRUCT_TYPED_FIELD(int, restriction),
	LCF_STRUCT_TYPED_FIELD(int, a_rate),
	LCF_STRUCT_TYPED_FIELD(int, b_rate),
	LCF_STRUCT_TYPED_FIELD(int, c_rate),
	LCF_STRUCT_TYPED_FIELD(int, d_rate),
	LCF_STRUCT_TYPED_FIELD(int, e_rate),
	LCF_STRUCT_TYPED_FIELD(int, hold_turn),
	LCF_STRUCT_TYPED_FIELD(int, auto_release_prob),
	LCF_STRUCT_TYPED_FIELD(int, release_by_damage),
	LCF_STRUCT_TYPED_FIELD(int, affect_type),
	LCF_STRUCT_TYPED_FIELD(bool, affect_attack),
	LCF_STRUCT_TYPED_FIELD(bool, affect_defense),
	LCF_STRUCT_TYPED_FIELD(bool, affect_spirit),
	LCF_STRUCT_TYPED_FIELD(bool, affect_agility),
	LCF_STRUCT_TYPED_FIELD(int, reduce_hit_ratio),
	LCF_STRUCT_TYPED_FIELD(bool, avoid_attacks),
	LCF_STRUCT_TYPED_FIELD(bool, reflect_magic),
	LCF_STRUCT_TYPED_FIELD(bool, cursed),
	LCF_STRUCT_TYPED_FIELD(int, battler_animation_id),
	LCF_STRUCT_TYPED_FIELD(bool, restrict_skill),
	LCF_STRUCT_TYPED_FIELD(int, restrict_skill_level),
	LCF_STRUCT_TYPED_FIELD(bool, restrict_magic),
	LCF_STRUCT_TYPED_FIELD(int, restrict_magic_level),
	LCF_STRUCT_TYPED_FIELD(int, hp_change_type),
	LCF_STRUCT_TYPED_FIELD(int, sp_change_type),
	LCF_STRUCT_TYPED_FIELD(std::string, message_actor),
	LCF_STRUCT_TYPED_FIELD(std::string, message_enemy),
	LCF_STRUCT_TYPED_FIELD(std::string, message_already),
	LCF_STRUCT_TYPED_FIELD(std::string, message_affected),
	LCF_STRUCT_TYPED_FIELD(std::string, message_recovery),
	LCF_STRUCT_TYPED_FIELD(int, hp_change_max),
	LCF_STRUCT_TYPED_FIELD(int, hp_change_val),
	LCF_STRUCT_TYPED_FIELD(int, hp_change_map_val),
	LCF_STRUCT_TYPED_FIELD(int, hp_change_map_steps),
	LCF_STRUCT_TYPED_FIELD(int, sp_change_max),
	LCF_STRUCT_TYPED_FIELD(int, sp_change_val),
	LCF_STRUCT_TYPED_FIELD(int, sp_change_map_val),
	LCF_STRUCT_TYPED_FIELD(int, sp_change_map_steps),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
