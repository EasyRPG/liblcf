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

// Read Item.

template <>
char const* const Struct<RPG::Item>::name = "Item";
static TypedField<RPG::Item, std::string> static_name(
	&RPG::Item::name,
	LDB_Reader::ChunkItem::name,
	"name",
	0,
	0
);
static TypedField<RPG::Item, std::string> static_description(
	&RPG::Item::description,
	LDB_Reader::ChunkItem::description,
	"description",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_type(
	&RPG::Item::type,
	LDB_Reader::ChunkItem::type,
	"type",
	1,
	0
);
static TypedField<RPG::Item, int32_t> static_price(
	&RPG::Item::price,
	LDB_Reader::ChunkItem::price,
	"price",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_uses(
	&RPG::Item::uses,
	LDB_Reader::ChunkItem::uses,
	"uses",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_atk_points1(
	&RPG::Item::atk_points1,
	LDB_Reader::ChunkItem::atk_points1,
	"atk_points1",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_def_points1(
	&RPG::Item::def_points1,
	LDB_Reader::ChunkItem::def_points1,
	"def_points1",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_spi_points1(
	&RPG::Item::spi_points1,
	LDB_Reader::ChunkItem::spi_points1,
	"spi_points1",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_agi_points1(
	&RPG::Item::agi_points1,
	LDB_Reader::ChunkItem::agi_points1,
	"agi_points1",
	0,
	0
);
static TypedField<RPG::Item, bool> static_two_handed(
	&RPG::Item::two_handed,
	LDB_Reader::ChunkItem::two_handed,
	"two_handed",
	1,
	0
);
static TypedField<RPG::Item, int32_t> static_sp_cost(
	&RPG::Item::sp_cost,
	LDB_Reader::ChunkItem::sp_cost,
	"sp_cost",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_hit(
	&RPG::Item::hit,
	LDB_Reader::ChunkItem::hit,
	"hit",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_critical_hit(
	&RPG::Item::critical_hit,
	LDB_Reader::ChunkItem::critical_hit,
	"critical_hit",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_animation_id(
	&RPG::Item::animation_id,
	LDB_Reader::ChunkItem::animation_id,
	"animation_id",
	0,
	0
);
static TypedField<RPG::Item, bool> static_preemptive(
	&RPG::Item::preemptive,
	LDB_Reader::ChunkItem::preemptive,
	"preemptive",
	0,
	0
);
static TypedField<RPG::Item, bool> static_dual_attack(
	&RPG::Item::dual_attack,
	LDB_Reader::ChunkItem::dual_attack,
	"dual_attack",
	0,
	0
);
static TypedField<RPG::Item, bool> static_attack_all(
	&RPG::Item::attack_all,
	LDB_Reader::ChunkItem::attack_all,
	"attack_all",
	0,
	0
);
static TypedField<RPG::Item, bool> static_ignore_evasion(
	&RPG::Item::ignore_evasion,
	LDB_Reader::ChunkItem::ignore_evasion,
	"ignore_evasion",
	0,
	0
);
static TypedField<RPG::Item, bool> static_prevent_critical(
	&RPG::Item::prevent_critical,
	LDB_Reader::ChunkItem::prevent_critical,
	"prevent_critical",
	0,
	0
);
static TypedField<RPG::Item, bool> static_raise_evasion(
	&RPG::Item::raise_evasion,
	LDB_Reader::ChunkItem::raise_evasion,
	"raise_evasion",
	0,
	0
);
static TypedField<RPG::Item, bool> static_half_sp_cost(
	&RPG::Item::half_sp_cost,
	LDB_Reader::ChunkItem::half_sp_cost,
	"half_sp_cost",
	0,
	0
);
static TypedField<RPG::Item, bool> static_no_terrain_damage(
	&RPG::Item::no_terrain_damage,
	LDB_Reader::ChunkItem::no_terrain_damage,
	"no_terrain_damage",
	0,
	0
);
static TypedField<RPG::Item, bool> static_cursed(
	&RPG::Item::cursed,
	LDB_Reader::ChunkItem::cursed,
	"cursed",
	0,
	1
);
static TypedField<RPG::Item, bool> static_entire_party(
	&RPG::Item::entire_party,
	LDB_Reader::ChunkItem::entire_party,
	"entire_party",
	1,
	0
);
static TypedField<RPG::Item, int32_t> static_recover_hp_rate(
	&RPG::Item::recover_hp_rate,
	LDB_Reader::ChunkItem::recover_hp_rate,
	"recover_hp_rate",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_recover_hp(
	&RPG::Item::recover_hp,
	LDB_Reader::ChunkItem::recover_hp,
	"recover_hp",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_recover_sp_rate(
	&RPG::Item::recover_sp_rate,
	LDB_Reader::ChunkItem::recover_sp_rate,
	"recover_sp_rate",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_recover_sp(
	&RPG::Item::recover_sp,
	LDB_Reader::ChunkItem::recover_sp,
	"recover_sp",
	0,
	0
);
static TypedField<RPG::Item, bool> static_occasion_field1(
	&RPG::Item::occasion_field1,
	LDB_Reader::ChunkItem::occasion_field1,
	"occasion_field1",
	0,
	0
);
static TypedField<RPG::Item, bool> static_ko_only(
	&RPG::Item::ko_only,
	LDB_Reader::ChunkItem::ko_only,
	"ko_only",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_max_hp_points(
	&RPG::Item::max_hp_points,
	LDB_Reader::ChunkItem::max_hp_points,
	"max_hp_points",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_max_sp_points(
	&RPG::Item::max_sp_points,
	LDB_Reader::ChunkItem::max_sp_points,
	"max_sp_points",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_atk_points2(
	&RPG::Item::atk_points2,
	LDB_Reader::ChunkItem::atk_points2,
	"atk_points2",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_def_points2(
	&RPG::Item::def_points2,
	LDB_Reader::ChunkItem::def_points2,
	"def_points2",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_spi_points2(
	&RPG::Item::spi_points2,
	LDB_Reader::ChunkItem::spi_points2,
	"spi_points2",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_agi_points2(
	&RPG::Item::agi_points2,
	LDB_Reader::ChunkItem::agi_points2,
	"agi_points2",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_using_message(
	&RPG::Item::using_message,
	LDB_Reader::ChunkItem::using_message,
	"using_message",
	1,
	0
);
static TypedField<RPG::Item, int32_t> static_skill_id(
	&RPG::Item::skill_id,
	LDB_Reader::ChunkItem::skill_id,
	"skill_id",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_switch_id(
	&RPG::Item::switch_id,
	LDB_Reader::ChunkItem::switch_id,
	"switch_id",
	0,
	0
);
static TypedField<RPG::Item, bool> static_occasion_field2(
	&RPG::Item::occasion_field2,
	LDB_Reader::ChunkItem::occasion_field2,
	"occasion_field2",
	0,
	0
);
static TypedField<RPG::Item, bool> static_occasion_battle(
	&RPG::Item::occasion_battle,
	LDB_Reader::ChunkItem::occasion_battle,
	"occasion_battle",
	0,
	0
);
static SizeField<RPG::Item, bool> static_size_actor_set(
	&RPG::Item::actor_set,
	LDB_Reader::ChunkItem::actor_set_size,
	0,
	0
);
static TypedField<RPG::Item, std::vector<bool>> static_actor_set(
	&RPG::Item::actor_set,
	LDB_Reader::ChunkItem::actor_set,
	"actor_set",
	1,
	0
);
static SizeField<RPG::Item, bool> static_size_state_set(
	&RPG::Item::state_set,
	LDB_Reader::ChunkItem::state_set_size,
	0,
	0
);
static TypedField<RPG::Item, std::vector<bool>> static_state_set(
	&RPG::Item::state_set,
	LDB_Reader::ChunkItem::state_set,
	"state_set",
	1,
	0
);
static SizeField<RPG::Item, bool> static_size_attribute_set(
	&RPG::Item::attribute_set,
	LDB_Reader::ChunkItem::attribute_set_size,
	0,
	0
);
static TypedField<RPG::Item, std::vector<bool>> static_attribute_set(
	&RPG::Item::attribute_set,
	LDB_Reader::ChunkItem::attribute_set,
	"attribute_set",
	1,
	0
);
static TypedField<RPG::Item, int32_t> static_state_chance(
	&RPG::Item::state_chance,
	LDB_Reader::ChunkItem::state_chance,
	"state_chance",
	0,
	0
);
static TypedField<RPG::Item, bool> static_reverse_state_effect(
	&RPG::Item::reverse_state_effect,
	LDB_Reader::ChunkItem::reverse_state_effect,
	"reverse_state_effect",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_weapon_animation(
	&RPG::Item::weapon_animation,
	LDB_Reader::ChunkItem::weapon_animation,
	"weapon_animation",
	0,
	1
);
static TypedField<RPG::Item, std::vector<RPG::ItemAnimation>> static_animation_data(
	&RPG::Item::animation_data,
	LDB_Reader::ChunkItem::animation_data,
	"animation_data",
	1,
	1
);
static TypedField<RPG::Item, bool> static_use_skill(
	&RPG::Item::use_skill,
	LDB_Reader::ChunkItem::use_skill,
	"use_skill",
	0,
	1
);
static SizeField<RPG::Item, bool> static_size_class_set(
	&RPG::Item::class_set,
	LDB_Reader::ChunkItem::class_set_size,
	0,
	1
);
static TypedField<RPG::Item, std::vector<bool>> static_class_set(
	&RPG::Item::class_set,
	LDB_Reader::ChunkItem::class_set,
	"class_set",
	1,
	1
);
static TypedField<RPG::Item, int32_t> static_ranged_trajectory(
	&RPG::Item::ranged_trajectory,
	LDB_Reader::ChunkItem::ranged_trajectory,
	"ranged_trajectory",
	0,
	0
);
static TypedField<RPG::Item, int32_t> static_ranged_target(
	&RPG::Item::ranged_target,
	LDB_Reader::ChunkItem::ranged_target,
	"ranged_target",
	0,
	0
);


template <>
Field<RPG::Item> const* Struct<RPG::Item>::fields[] = {
	&static_name,
	&static_description,
	&static_type,
	&static_price,
	&static_uses,
	&static_atk_points1,
	&static_def_points1,
	&static_spi_points1,
	&static_agi_points1,
	&static_two_handed,
	&static_sp_cost,
	&static_hit,
	&static_critical_hit,
	&static_animation_id,
	&static_preemptive,
	&static_dual_attack,
	&static_attack_all,
	&static_ignore_evasion,
	&static_prevent_critical,
	&static_raise_evasion,
	&static_half_sp_cost,
	&static_no_terrain_damage,
	&static_cursed,
	&static_entire_party,
	&static_recover_hp_rate,
	&static_recover_hp,
	&static_recover_sp_rate,
	&static_recover_sp,
	&static_occasion_field1,
	&static_ko_only,
	&static_max_hp_points,
	&static_max_sp_points,
	&static_atk_points2,
	&static_def_points2,
	&static_spi_points2,
	&static_agi_points2,
	&static_using_message,
	&static_skill_id,
	&static_switch_id,
	&static_occasion_field2,
	&static_occasion_battle,
	&static_size_actor_set,
	&static_actor_set,
	&static_size_state_set,
	&static_state_set,
	&static_size_attribute_set,
	&static_attribute_set,
	&static_state_chance,
	&static_reverse_state_effect,
	&static_weapon_animation,
	&static_animation_data,
	&static_use_skill,
	&static_size_class_set,
	&static_class_set,
	&static_ranged_trajectory,
	&static_ranged_target,
	NULL
};

template class Struct<RPG::Item>;
