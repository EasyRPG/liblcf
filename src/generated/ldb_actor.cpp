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

// Read Actor.

template <>
char const* const Struct<RPG::Actor>::name = "Actor";

template <>
Field<RPG::Actor> const* Struct<RPG::Actor>::fields[] = {
	new TypedField<RPG::Actor, std::string>(
		&RPG::Actor::name,
		LDB_Reader::ChunkActor::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::Actor, std::string>(
		&RPG::Actor::title,
		LDB_Reader::ChunkActor::title,
		"title",
		0,
		0
	),
	new TypedField<RPG::Actor, std::string>(
		&RPG::Actor::character_name,
		LDB_Reader::ChunkActor::character_name,
		"character_name",
		0,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::character_index,
		LDB_Reader::ChunkActor::character_index,
		"character_index",
		0,
		0
	),
	new TypedField<RPG::Actor, bool>(
		&RPG::Actor::transparent,
		LDB_Reader::ChunkActor::transparent,
		"transparent",
		0,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::initial_level,
		LDB_Reader::ChunkActor::initial_level,
		"initial_level",
		0,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::final_level,
		LDB_Reader::ChunkActor::final_level,
		"final_level",
		0,
		0
	),
	new TypedField<RPG::Actor, bool>(
		&RPG::Actor::critical_hit,
		LDB_Reader::ChunkActor::critical_hit,
		"critical_hit",
		0,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::critical_hit_chance,
		LDB_Reader::ChunkActor::critical_hit_chance,
		"critical_hit_chance",
		0,
		0
	),
	new TypedField<RPG::Actor, std::string>(
		&RPG::Actor::face_name,
		LDB_Reader::ChunkActor::face_name,
		"face_name",
		0,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::face_index,
		LDB_Reader::ChunkActor::face_index,
		"face_index",
		0,
		0
	),
	new TypedField<RPG::Actor, bool>(
		&RPG::Actor::two_weapon,
		LDB_Reader::ChunkActor::two_weapon,
		"two_weapon",
		0,
		0
	),
	new TypedField<RPG::Actor, bool>(
		&RPG::Actor::lock_equipment,
		LDB_Reader::ChunkActor::lock_equipment,
		"lock_equipment",
		0,
		0
	),
	new TypedField<RPG::Actor, bool>(
		&RPG::Actor::auto_battle,
		LDB_Reader::ChunkActor::auto_battle,
		"auto_battle",
		0,
		0
	),
	new TypedField<RPG::Actor, bool>(
		&RPG::Actor::super_guard,
		LDB_Reader::ChunkActor::super_guard,
		"super_guard",
		0,
		0
	),
	new TypedField<RPG::Actor, RPG::Parameters>(
		&RPG::Actor::parameters,
		LDB_Reader::ChunkActor::parameters,
		"parameters",
		1,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::exp_base,
		LDB_Reader::ChunkActor::exp_base,
		"exp_base",
		0,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::exp_inflation,
		LDB_Reader::ChunkActor::exp_inflation,
		"exp_inflation",
		0,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::exp_correction,
		LDB_Reader::ChunkActor::exp_correction,
		"exp_correction",
		0,
		0
	),
	new TypedField<RPG::Actor, RPG::Equipment>(
		&RPG::Actor::initial_equipment,
		LDB_Reader::ChunkActor::initial_equipment,
		"initial_equipment",
		1,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::unarmed_animation,
		LDB_Reader::ChunkActor::unarmed_animation,
		"unarmed_animation",
		0,
		0
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::class_id,
		LDB_Reader::ChunkActor::class_id,
		"class_id",
		0,
		1
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::battle_x,
		LDB_Reader::ChunkActor::battle_x,
		"battle_x",
		0,
		1
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::battle_y,
		LDB_Reader::ChunkActor::battle_y,
		"battle_y",
		0,
		1
	),
	new TypedField<RPG::Actor, int32_t>(
		&RPG::Actor::battler_animation,
		LDB_Reader::ChunkActor::battler_animation,
		"battler_animation",
		0,
		1
	),
	new TypedField<RPG::Actor, std::vector<RPG::Learning>>(
		&RPG::Actor::skills,
		LDB_Reader::ChunkActor::skills,
		"skills",
		1,
		0
	),
	new TypedField<RPG::Actor, bool>(
		&RPG::Actor::rename_skill,
		LDB_Reader::ChunkActor::rename_skill,
		"rename_skill",
		0,
		0
	),
	new TypedField<RPG::Actor, std::string>(
		&RPG::Actor::skill_name,
		LDB_Reader::ChunkActor::skill_name,
		"skill_name",
		0,
		0
	),
	new SizeField<RPG::Actor, uint8_t>(
		&RPG::Actor::state_ranks,
		LDB_Reader::ChunkActor::state_ranks_size,
		0,
		0
	),
	new TypedField<RPG::Actor, std::vector<uint8_t>>(
		&RPG::Actor::state_ranks,
		LDB_Reader::ChunkActor::state_ranks,
		"state_ranks",
		1,
		0
	),
	new SizeField<RPG::Actor, uint8_t>(
		&RPG::Actor::attribute_ranks,
		LDB_Reader::ChunkActor::attribute_ranks_size,
		0,
		0
	),
	new TypedField<RPG::Actor, std::vector<uint8_t>>(
		&RPG::Actor::attribute_ranks,
		LDB_Reader::ChunkActor::attribute_ranks,
		"attribute_ranks",
		1,
		0
	),
	new TypedField<RPG::Actor, std::vector<int32_t>>(
		&RPG::Actor::battle_commands,
		LDB_Reader::ChunkActor::battle_commands,
		"battle_commands",
		1,
		1
	),
	NULL
};

template class Struct<RPG::Actor>;
