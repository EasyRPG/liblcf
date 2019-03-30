/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct_impl.h"

// Read Skill.

template <>
char const* const Struct<RPG::Skill>::name = "Skill";

template <>
Field<RPG::Skill> const* Struct<RPG::Skill>::fields[] = {
	new TypedField<RPG::Skill, std::string>(
		&RPG::Skill::name,
		LDB_Reader::ChunkSkill::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::Skill, std::string>(
		&RPG::Skill::description,
		LDB_Reader::ChunkSkill::description,
		"description",
		0,
		0
	),
	new TypedField<RPG::Skill, std::string>(
		&RPG::Skill::using_message1,
		LDB_Reader::ChunkSkill::using_message1,
		"using_message1",
		0,
		0
	),
	new TypedField<RPG::Skill, std::string>(
		&RPG::Skill::using_message2,
		LDB_Reader::ChunkSkill::using_message2,
		"using_message2",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::failure_message,
		LDB_Reader::ChunkSkill::failure_message,
		"failure_message",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::type,
		LDB_Reader::ChunkSkill::type,
		"type",
		1,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::sp_type,
		LDB_Reader::ChunkSkill::sp_type,
		"sp_type",
		0,
		1
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::sp_percent,
		LDB_Reader::ChunkSkill::sp_percent,
		"sp_percent",
		0,
		1
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::sp_cost,
		LDB_Reader::ChunkSkill::sp_cost,
		"sp_cost",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::scope,
		LDB_Reader::ChunkSkill::scope,
		"scope",
		1,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::switch_id,
		LDB_Reader::ChunkSkill::switch_id,
		"switch_id",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::animation_id,
		LDB_Reader::ChunkSkill::animation_id,
		"animation_id",
		0,
		0
	),
	new TypedField<RPG::Skill, RPG::Sound>(
		&RPG::Skill::sound_effect,
		LDB_Reader::ChunkSkill::sound_effect,
		"sound_effect",
		1,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::occasion_field,
		LDB_Reader::ChunkSkill::occasion_field,
		"occasion_field",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::occasion_battle,
		LDB_Reader::ChunkSkill::occasion_battle,
		"occasion_battle",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::reverse_state_effect,
		LDB_Reader::ChunkSkill::reverse_state_effect,
		"reverse_state_effect",
		0,
		1
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::physical_rate,
		LDB_Reader::ChunkSkill::physical_rate,
		"physical_rate",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::magical_rate,
		LDB_Reader::ChunkSkill::magical_rate,
		"magical_rate",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::variance,
		LDB_Reader::ChunkSkill::variance,
		"variance",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::power,
		LDB_Reader::ChunkSkill::power,
		"power",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::hit,
		LDB_Reader::ChunkSkill::hit,
		"hit",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::affect_hp,
		LDB_Reader::ChunkSkill::affect_hp,
		"affect_hp",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::affect_sp,
		LDB_Reader::ChunkSkill::affect_sp,
		"affect_sp",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::affect_attack,
		LDB_Reader::ChunkSkill::affect_attack,
		"affect_attack",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::affect_defense,
		LDB_Reader::ChunkSkill::affect_defense,
		"affect_defense",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::affect_spirit,
		LDB_Reader::ChunkSkill::affect_spirit,
		"affect_spirit",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::affect_agility,
		LDB_Reader::ChunkSkill::affect_agility,
		"affect_agility",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::absorb_damage,
		LDB_Reader::ChunkSkill::absorb_damage,
		"absorb_damage",
		0,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::ignore_defense,
		LDB_Reader::ChunkSkill::ignore_defense,
		"ignore_defense",
		0,
		0
	),
	new SizeField<RPG::Skill, bool>(
		&RPG::Skill::state_effects,
		LDB_Reader::ChunkSkill::state_effects_size,
		0,
		0
	),
	new TypedField<RPG::Skill, std::vector<bool>>(
		&RPG::Skill::state_effects,
		LDB_Reader::ChunkSkill::state_effects,
		"state_effects",
		1,
		0
	),
	new SizeField<RPG::Skill, bool>(
		&RPG::Skill::attribute_effects,
		LDB_Reader::ChunkSkill::attribute_effects_size,
		0,
		0
	),
	new TypedField<RPG::Skill, std::vector<bool>>(
		&RPG::Skill::attribute_effects,
		LDB_Reader::ChunkSkill::attribute_effects,
		"attribute_effects",
		1,
		0
	),
	new TypedField<RPG::Skill, bool>(
		&RPG::Skill::affect_attr_defence,
		LDB_Reader::ChunkSkill::affect_attr_defence,
		"affect_attr_defence",
		0,
		0
	),
	new TypedField<RPG::Skill, int32_t>(
		&RPG::Skill::battler_animation,
		LDB_Reader::ChunkSkill::battler_animation,
		"battler_animation",
		0,
		1
	),
	new TypedField<RPG::Skill, std::vector<RPG::BattlerAnimationData>>(
		&RPG::Skill::battler_animation_data,
		LDB_Reader::ChunkSkill::battler_animation_data,
		"battler_animation_data",
		1,
		1
	),
	NULL
};

template class Struct<RPG::Skill>;
