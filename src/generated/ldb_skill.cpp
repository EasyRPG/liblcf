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

// Read Skill.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Skill

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::string, description),
	LCF_STRUCT_TYPED_FIELD(std::string, using_message1),
	LCF_STRUCT_TYPED_FIELD(std::string, using_message2),
	LCF_STRUCT_TYPED_FIELD(int, failure_message),
	LCF_STRUCT_TYPED_FIELD(int, type),
	LCF_STRUCT_TYPED_FIELD(int, sp_type),
	LCF_STRUCT_TYPED_FIELD(int, sp_percent),
	LCF_STRUCT_TYPED_FIELD(int, sp_cost),
	LCF_STRUCT_TYPED_FIELD(int, scope),
	LCF_STRUCT_TYPED_FIELD(int, switch_id),
	LCF_STRUCT_TYPED_FIELD(int, animation_id),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, sound_effect),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_field),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_battle),
	LCF_STRUCT_TYPED_FIELD(bool, state_effect),
	LCF_STRUCT_TYPED_FIELD(int, physical_rate),
	LCF_STRUCT_TYPED_FIELD(int, magical_rate),
	LCF_STRUCT_TYPED_FIELD(int, variance),
	LCF_STRUCT_TYPED_FIELD(int, power),
	LCF_STRUCT_TYPED_FIELD(int, hit),
	LCF_STRUCT_TYPED_FIELD(bool, affect_hp),
	LCF_STRUCT_TYPED_FIELD(bool, affect_sp),
	LCF_STRUCT_TYPED_FIELD(bool, affect_attack),
	LCF_STRUCT_TYPED_FIELD(bool, affect_defense),
	LCF_STRUCT_TYPED_FIELD(bool, affect_spirit),
	LCF_STRUCT_TYPED_FIELD(bool, affect_agility),
	LCF_STRUCT_TYPED_FIELD(bool, absorb_damage),
	LCF_STRUCT_TYPED_FIELD(bool, ignore_defense),
	LCF_STRUCT_SIZE_FIELD(bool, state_effects),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, state_effects),
	LCF_STRUCT_SIZE_FIELD(bool, attribute_effects),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, attribute_effects),
	LCF_STRUCT_TYPED_FIELD(bool, affect_attr_defence),
	LCF_STRUCT_TYPED_FIELD(int, battler_animation),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::BattlerAnimationData>, battler_animation_data),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
