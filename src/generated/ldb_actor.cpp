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

// Read Actor.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Actor

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::string, title),
	LCF_STRUCT_TYPED_FIELD(std::string, character_name),
	LCF_STRUCT_TYPED_FIELD(int, character_index),
	LCF_STRUCT_TYPED_FIELD(bool, transparent),
	LCF_STRUCT_TYPED_FIELD(int, initial_level),
	LCF_STRUCT_TYPED_FIELD(int, final_level),
	LCF_STRUCT_TYPED_FIELD(bool, critical_hit),
	LCF_STRUCT_TYPED_FIELD(int, critical_hit_chance),
	LCF_STRUCT_TYPED_FIELD(std::string, face_name),
	LCF_STRUCT_TYPED_FIELD(int, face_index),
	LCF_STRUCT_TYPED_FIELD(bool, two_weapon),
	LCF_STRUCT_TYPED_FIELD(bool, lock_equipment),
	LCF_STRUCT_TYPED_FIELD(bool, auto_battle),
	LCF_STRUCT_TYPED_FIELD(bool, super_guard),
	LCF_STRUCT_TYPED_FIELD(RPG::Parameters, parameters),
	LCF_STRUCT_TYPED_FIELD(int, exp_base),
	LCF_STRUCT_TYPED_FIELD(int, exp_inflation),
	LCF_STRUCT_TYPED_FIELD(int, exp_correction),
	LCF_STRUCT_TYPED_FIELD(RPG::Equipment, initial_equipment),
	LCF_STRUCT_TYPED_FIELD(int, unarmed_animation),
	LCF_STRUCT_TYPED_FIELD(int, class_id),
	LCF_STRUCT_TYPED_FIELD(int, battle_x),
	LCF_STRUCT_TYPED_FIELD(int, battle_y),
	LCF_STRUCT_TYPED_FIELD(int, battler_animation),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Learning>, skills),
	LCF_STRUCT_TYPED_FIELD(bool, rename_skill),
	LCF_STRUCT_TYPED_FIELD(std::string, skill_name),
	LCF_STRUCT_SIZE_FIELD(uint8_t, state_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, state_ranks),
	LCF_STRUCT_SIZE_FIELD(uint8_t, attribute_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, attribute_ranks),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, battle_commands),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
