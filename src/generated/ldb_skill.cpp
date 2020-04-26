/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
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
static TypedField<RPG::Skill, std::string> static_name(
	&RPG::Skill::name,
	LDB_Reader::ChunkSkill::name,
	"name",
	0,
	0
);
static TypedField<RPG::Skill, std::string> static_description(
	&RPG::Skill::description,
	LDB_Reader::ChunkSkill::description,
	"description",
	0,
	0
);
static TypedField<RPG::Skill, std::string> static_using_message1(
	&RPG::Skill::using_message1,
	LDB_Reader::ChunkSkill::using_message1,
	"using_message1",
	0,
	0
);
static TypedField<RPG::Skill, std::string> static_using_message2(
	&RPG::Skill::using_message2,
	LDB_Reader::ChunkSkill::using_message2,
	"using_message2",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_failure_message(
	&RPG::Skill::failure_message,
	LDB_Reader::ChunkSkill::failure_message,
	"failure_message",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_type(
	&RPG::Skill::type,
	LDB_Reader::ChunkSkill::type,
	"type",
	1,
	0
);
static TypedField<RPG::Skill, int32_t> static_sp_type(
	&RPG::Skill::sp_type,
	LDB_Reader::ChunkSkill::sp_type,
	"sp_type",
	0,
	1
);
static TypedField<RPG::Skill, int32_t> static_sp_percent(
	&RPG::Skill::sp_percent,
	LDB_Reader::ChunkSkill::sp_percent,
	"sp_percent",
	0,
	1
);
static TypedField<RPG::Skill, int32_t> static_sp_cost(
	&RPG::Skill::sp_cost,
	LDB_Reader::ChunkSkill::sp_cost,
	"sp_cost",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_scope(
	&RPG::Skill::scope,
	LDB_Reader::ChunkSkill::scope,
	"scope",
	1,
	0
);
static TypedField<RPG::Skill, int32_t> static_switch_id(
	&RPG::Skill::switch_id,
	LDB_Reader::ChunkSkill::switch_id,
	"switch_id",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_animation_id(
	&RPG::Skill::animation_id,
	LDB_Reader::ChunkSkill::animation_id,
	"animation_id",
	0,
	0
);
static TypedField<RPG::Skill, RPG::Sound> static_sound_effect(
	&RPG::Skill::sound_effect,
	LDB_Reader::ChunkSkill::sound_effect,
	"sound_effect",
	1,
	0
);
static TypedField<RPG::Skill, bool> static_occasion_field(
	&RPG::Skill::occasion_field,
	LDB_Reader::ChunkSkill::occasion_field,
	"occasion_field",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_occasion_battle(
	&RPG::Skill::occasion_battle,
	LDB_Reader::ChunkSkill::occasion_battle,
	"occasion_battle",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_reverse_state_effect(
	&RPG::Skill::reverse_state_effect,
	LDB_Reader::ChunkSkill::reverse_state_effect,
	"reverse_state_effect",
	0,
	1
);
static TypedField<RPG::Skill, int32_t> static_physical_rate(
	&RPG::Skill::physical_rate,
	LDB_Reader::ChunkSkill::physical_rate,
	"physical_rate",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_magical_rate(
	&RPG::Skill::magical_rate,
	LDB_Reader::ChunkSkill::magical_rate,
	"magical_rate",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_variance(
	&RPG::Skill::variance,
	LDB_Reader::ChunkSkill::variance,
	"variance",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_power(
	&RPG::Skill::power,
	LDB_Reader::ChunkSkill::power,
	"power",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_hit(
	&RPG::Skill::hit,
	LDB_Reader::ChunkSkill::hit,
	"hit",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_affect_hp(
	&RPG::Skill::affect_hp,
	LDB_Reader::ChunkSkill::affect_hp,
	"affect_hp",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_affect_sp(
	&RPG::Skill::affect_sp,
	LDB_Reader::ChunkSkill::affect_sp,
	"affect_sp",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_affect_attack(
	&RPG::Skill::affect_attack,
	LDB_Reader::ChunkSkill::affect_attack,
	"affect_attack",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_affect_defense(
	&RPG::Skill::affect_defense,
	LDB_Reader::ChunkSkill::affect_defense,
	"affect_defense",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_affect_spirit(
	&RPG::Skill::affect_spirit,
	LDB_Reader::ChunkSkill::affect_spirit,
	"affect_spirit",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_affect_agility(
	&RPG::Skill::affect_agility,
	LDB_Reader::ChunkSkill::affect_agility,
	"affect_agility",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_absorb_damage(
	&RPG::Skill::absorb_damage,
	LDB_Reader::ChunkSkill::absorb_damage,
	"absorb_damage",
	0,
	0
);
static TypedField<RPG::Skill, bool> static_ignore_defense(
	&RPG::Skill::ignore_defense,
	LDB_Reader::ChunkSkill::ignore_defense,
	"ignore_defense",
	0,
	0
);
static SizeField<RPG::Skill, bool> static_size_state_effects(
	&RPG::Skill::state_effects,
	LDB_Reader::ChunkSkill::state_effects_size,
	0,
	0
);
static TypedField<RPG::Skill, std::vector<bool>> static_state_effects(
	&RPG::Skill::state_effects,
	LDB_Reader::ChunkSkill::state_effects,
	"state_effects",
	1,
	0
);
static SizeField<RPG::Skill, bool> static_size_attribute_effects(
	&RPG::Skill::attribute_effects,
	LDB_Reader::ChunkSkill::attribute_effects_size,
	0,
	0
);
static TypedField<RPG::Skill, std::vector<bool>> static_attribute_effects(
	&RPG::Skill::attribute_effects,
	LDB_Reader::ChunkSkill::attribute_effects,
	"attribute_effects",
	1,
	0
);
static TypedField<RPG::Skill, bool> static_affect_attr_defence(
	&RPG::Skill::affect_attr_defence,
	LDB_Reader::ChunkSkill::affect_attr_defence,
	"affect_attr_defence",
	0,
	0
);
static TypedField<RPG::Skill, int32_t> static_battler_animation(
	&RPG::Skill::battler_animation,
	LDB_Reader::ChunkSkill::battler_animation,
	"battler_animation",
	0,
	1
);
static TypedField<RPG::Skill, std::vector<RPG::BattlerAnimationData>> static_battler_animation_data(
	&RPG::Skill::battler_animation_data,
	LDB_Reader::ChunkSkill::battler_animation_data,
	"battler_animation_data",
	1,
	1
);


template <>
Field<RPG::Skill> const* Struct<RPG::Skill>::fields[] = {
	&static_name,
	&static_description,
	&static_using_message1,
	&static_using_message2,
	&static_failure_message,
	&static_type,
	&static_sp_type,
	&static_sp_percent,
	&static_sp_cost,
	&static_scope,
	&static_switch_id,
	&static_animation_id,
	&static_sound_effect,
	&static_occasion_field,
	&static_occasion_battle,
	&static_reverse_state_effect,
	&static_physical_rate,
	&static_magical_rate,
	&static_variance,
	&static_power,
	&static_hit,
	&static_affect_hp,
	&static_affect_sp,
	&static_affect_attack,
	&static_affect_defense,
	&static_affect_spirit,
	&static_affect_agility,
	&static_absorb_damage,
	&static_ignore_defense,
	&static_size_state_effects,
	&static_state_effects,
	&static_size_attribute_effects,
	&static_attribute_effects,
	&static_affect_attr_defence,
	&static_battler_animation,
	&static_battler_animation_data,
	NULL
};

template class Struct<RPG::Skill>;
