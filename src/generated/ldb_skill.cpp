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

// Read Skill.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Skill

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(std::string, description),
	LCF_STRUCT_TYPED_FIELD(std::string, using_message1),
	LCF_STRUCT_TYPED_FIELD(std::string, using_message2),
	LCF_STRUCT_TYPED_FIELD(int32_t, failure_message),
	LCF_STRUCT_TYPED_FIELD(int32_t, type),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_type),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_percent),
	LCF_STRUCT_TYPED_FIELD(int32_t, sp_cost),
	LCF_STRUCT_TYPED_FIELD(int32_t, scope),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_id),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, sound_effect),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_field),
	LCF_STRUCT_TYPED_FIELD(bool, occasion_battle),
	LCF_STRUCT_TYPED_FIELD(bool, state_effect),
	LCF_STRUCT_TYPED_FIELD(int32_t, physical_rate),
	LCF_STRUCT_TYPED_FIELD(int32_t, magical_rate),
	LCF_STRUCT_TYPED_FIELD(int32_t, variance),
	LCF_STRUCT_TYPED_FIELD(int32_t, power),
	LCF_STRUCT_TYPED_FIELD(int32_t, hit),
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
	LCF_STRUCT_TYPED_FIELD(int32_t, battler_animation),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::BattlerAnimationData>, battler_animation_data),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
