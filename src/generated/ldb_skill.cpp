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

// Read Skill.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Skill

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, description, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, using_message1, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, using_message2, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, failure_message, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_type, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_percent, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_cost, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, scope, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, sound_effect, 1, 0),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_field, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_battle, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, state_effect, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, physical_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, magical_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, variance, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, power, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, hit, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_hp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_sp, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_attack, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_defense, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_spirit, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_agility, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, absorb_damage, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, ignore_defense, 0, 0),
	LCF_STRUCT_SIZE_FIELD(bool, state_effects, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, state_effects, 1, 0),
	LCF_STRUCT_SIZE_FIELD(bool, attribute_effects, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, attribute_effects, 1, 0),
	LCF_STRUCT_TYPED_FIELD(bool, affect_attr_defence, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battler_animation, 0, 1),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::BattlerAnimationData>, battler_animation_data, 1, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
