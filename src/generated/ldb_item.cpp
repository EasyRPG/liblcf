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

template <>
Field<RPG::Item> const* Struct<RPG::Item>::fields[] = {
	new TypedField<RPG::Item, std::string>(
		&RPG::Item::name,
		LDB_Reader::ChunkItem::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::Item, std::string>(
		&RPG::Item::description,
		LDB_Reader::ChunkItem::description,
		"description",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::type,
		LDB_Reader::ChunkItem::type,
		"type",
		1,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::price,
		LDB_Reader::ChunkItem::price,
		"price",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::uses,
		LDB_Reader::ChunkItem::uses,
		"uses",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::atk_points1,
		LDB_Reader::ChunkItem::atk_points1,
		"atk_points1",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::def_points1,
		LDB_Reader::ChunkItem::def_points1,
		"def_points1",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::spi_points1,
		LDB_Reader::ChunkItem::spi_points1,
		"spi_points1",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::agi_points1,
		LDB_Reader::ChunkItem::agi_points1,
		"agi_points1",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::two_handed,
		LDB_Reader::ChunkItem::two_handed,
		"two_handed",
		1,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::sp_cost,
		LDB_Reader::ChunkItem::sp_cost,
		"sp_cost",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::hit,
		LDB_Reader::ChunkItem::hit,
		"hit",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::critical_hit,
		LDB_Reader::ChunkItem::critical_hit,
		"critical_hit",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::animation_id,
		LDB_Reader::ChunkItem::animation_id,
		"animation_id",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::preemptive,
		LDB_Reader::ChunkItem::preemptive,
		"preemptive",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::dual_attack,
		LDB_Reader::ChunkItem::dual_attack,
		"dual_attack",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::attack_all,
		LDB_Reader::ChunkItem::attack_all,
		"attack_all",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::ignore_evasion,
		LDB_Reader::ChunkItem::ignore_evasion,
		"ignore_evasion",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::prevent_critical,
		LDB_Reader::ChunkItem::prevent_critical,
		"prevent_critical",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::raise_evasion,
		LDB_Reader::ChunkItem::raise_evasion,
		"raise_evasion",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::half_sp_cost,
		LDB_Reader::ChunkItem::half_sp_cost,
		"half_sp_cost",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::no_terrain_damage,
		LDB_Reader::ChunkItem::no_terrain_damage,
		"no_terrain_damage",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::cursed,
		LDB_Reader::ChunkItem::cursed,
		"cursed",
		0,
		1
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::entire_party,
		LDB_Reader::ChunkItem::entire_party,
		"entire_party",
		1,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::recover_hp_rate,
		LDB_Reader::ChunkItem::recover_hp_rate,
		"recover_hp_rate",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::recover_hp,
		LDB_Reader::ChunkItem::recover_hp,
		"recover_hp",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::recover_sp_rate,
		LDB_Reader::ChunkItem::recover_sp_rate,
		"recover_sp_rate",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::recover_sp,
		LDB_Reader::ChunkItem::recover_sp,
		"recover_sp",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::occasion_field1,
		LDB_Reader::ChunkItem::occasion_field1,
		"occasion_field1",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::ko_only,
		LDB_Reader::ChunkItem::ko_only,
		"ko_only",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::max_hp_points,
		LDB_Reader::ChunkItem::max_hp_points,
		"max_hp_points",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::max_sp_points,
		LDB_Reader::ChunkItem::max_sp_points,
		"max_sp_points",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::atk_points2,
		LDB_Reader::ChunkItem::atk_points2,
		"atk_points2",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::def_points2,
		LDB_Reader::ChunkItem::def_points2,
		"def_points2",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::spi_points2,
		LDB_Reader::ChunkItem::spi_points2,
		"spi_points2",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::agi_points2,
		LDB_Reader::ChunkItem::agi_points2,
		"agi_points2",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::using_message,
		LDB_Reader::ChunkItem::using_message,
		"using_message",
		1,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::skill_id,
		LDB_Reader::ChunkItem::skill_id,
		"skill_id",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::switch_id,
		LDB_Reader::ChunkItem::switch_id,
		"switch_id",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::occasion_field2,
		LDB_Reader::ChunkItem::occasion_field2,
		"occasion_field2",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::occasion_battle,
		LDB_Reader::ChunkItem::occasion_battle,
		"occasion_battle",
		0,
		0
	),
	new SizeField<RPG::Item, bool>(
		&RPG::Item::actor_set,
		LDB_Reader::ChunkItem::actor_set_size,
		0,
		0
	),
	new TypedField<RPG::Item, std::vector<bool>>(
		&RPG::Item::actor_set,
		LDB_Reader::ChunkItem::actor_set,
		"actor_set",
		1,
		0
	),
	new SizeField<RPG::Item, bool>(
		&RPG::Item::state_set,
		LDB_Reader::ChunkItem::state_set_size,
		0,
		0
	),
	new TypedField<RPG::Item, std::vector<bool>>(
		&RPG::Item::state_set,
		LDB_Reader::ChunkItem::state_set,
		"state_set",
		1,
		0
	),
	new SizeField<RPG::Item, bool>(
		&RPG::Item::attribute_set,
		LDB_Reader::ChunkItem::attribute_set_size,
		0,
		0
	),
	new TypedField<RPG::Item, std::vector<bool>>(
		&RPG::Item::attribute_set,
		LDB_Reader::ChunkItem::attribute_set,
		"attribute_set",
		1,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::state_chance,
		LDB_Reader::ChunkItem::state_chance,
		"state_chance",
		0,
		0
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::reverse_state_effect,
		LDB_Reader::ChunkItem::reverse_state_effect,
		"reverse_state_effect",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::weapon_animation,
		LDB_Reader::ChunkItem::weapon_animation,
		"weapon_animation",
		0,
		1
	),
	new TypedField<RPG::Item, std::vector<RPG::ItemAnimation>>(
		&RPG::Item::animation_data,
		LDB_Reader::ChunkItem::animation_data,
		"animation_data",
		1,
		1
	),
	new TypedField<RPG::Item, bool>(
		&RPG::Item::use_skill,
		LDB_Reader::ChunkItem::use_skill,
		"use_skill",
		0,
		1
	),
	new SizeField<RPG::Item, bool>(
		&RPG::Item::class_set,
		LDB_Reader::ChunkItem::class_set_size,
		0,
		1
	),
	new TypedField<RPG::Item, std::vector<bool>>(
		&RPG::Item::class_set,
		LDB_Reader::ChunkItem::class_set,
		"class_set",
		1,
		1
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::ranged_trajectory,
		LDB_Reader::ChunkItem::ranged_trajectory,
		"ranged_trajectory",
		0,
		0
	),
	new TypedField<RPG::Item, int32_t>(
		&RPG::Item::ranged_target,
		LDB_Reader::ChunkItem::ranged_target,
		"ranged_target",
		0,
		0
	),
	NULL
};

template class Struct<RPG::Item>;
