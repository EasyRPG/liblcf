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
static TypedField<RPG::Actor, std::string> static_name(
	&RPG::Actor::name,
	LDB_Reader::ChunkActor::name,
	"name",
	0,
	0
);
static TypedField<RPG::Actor, std::string> static_title(
	&RPG::Actor::title,
	LDB_Reader::ChunkActor::title,
	"title",
	0,
	0
);
static TypedField<RPG::Actor, std::string> static_character_name(
	&RPG::Actor::character_name,
	LDB_Reader::ChunkActor::character_name,
	"character_name",
	0,
	0
);
static TypedField<RPG::Actor, int32_t> static_character_index(
	&RPG::Actor::character_index,
	LDB_Reader::ChunkActor::character_index,
	"character_index",
	0,
	0
);
static TypedField<RPG::Actor, bool> static_transparent(
	&RPG::Actor::transparent,
	LDB_Reader::ChunkActor::transparent,
	"transparent",
	0,
	0
);
static TypedField<RPG::Actor, int32_t> static_initial_level(
	&RPG::Actor::initial_level,
	LDB_Reader::ChunkActor::initial_level,
	"initial_level",
	0,
	0
);
static TypedField<RPG::Actor, int32_t> static_final_level(
	&RPG::Actor::final_level,
	LDB_Reader::ChunkActor::final_level,
	"final_level",
	0,
	0
);
static TypedField<RPG::Actor, bool> static_critical_hit(
	&RPG::Actor::critical_hit,
	LDB_Reader::ChunkActor::critical_hit,
	"critical_hit",
	0,
	0
);
static TypedField<RPG::Actor, int32_t> static_critical_hit_chance(
	&RPG::Actor::critical_hit_chance,
	LDB_Reader::ChunkActor::critical_hit_chance,
	"critical_hit_chance",
	0,
	0
);
static TypedField<RPG::Actor, std::string> static_face_name(
	&RPG::Actor::face_name,
	LDB_Reader::ChunkActor::face_name,
	"face_name",
	0,
	0
);
static TypedField<RPG::Actor, int32_t> static_face_index(
	&RPG::Actor::face_index,
	LDB_Reader::ChunkActor::face_index,
	"face_index",
	0,
	0
);
static TypedField<RPG::Actor, bool> static_two_weapon(
	&RPG::Actor::two_weapon,
	LDB_Reader::ChunkActor::two_weapon,
	"two_weapon",
	0,
	0
);
static TypedField<RPG::Actor, bool> static_lock_equipment(
	&RPG::Actor::lock_equipment,
	LDB_Reader::ChunkActor::lock_equipment,
	"lock_equipment",
	0,
	0
);
static TypedField<RPG::Actor, bool> static_auto_battle(
	&RPG::Actor::auto_battle,
	LDB_Reader::ChunkActor::auto_battle,
	"auto_battle",
	0,
	0
);
static TypedField<RPG::Actor, bool> static_super_guard(
	&RPG::Actor::super_guard,
	LDB_Reader::ChunkActor::super_guard,
	"super_guard",
	0,
	0
);
static TypedField<RPG::Actor, RPG::Parameters> static_parameters(
	&RPG::Actor::parameters,
	LDB_Reader::ChunkActor::parameters,
	"parameters",
	1,
	0
);
static TypedField<RPG::Actor, int32_t> static_exp_base(
	&RPG::Actor::exp_base,
	LDB_Reader::ChunkActor::exp_base,
	"exp_base",
	0,
	0
);
static TypedField<RPG::Actor, int32_t> static_exp_inflation(
	&RPG::Actor::exp_inflation,
	LDB_Reader::ChunkActor::exp_inflation,
	"exp_inflation",
	0,
	0
);
static TypedField<RPG::Actor, int32_t> static_exp_correction(
	&RPG::Actor::exp_correction,
	LDB_Reader::ChunkActor::exp_correction,
	"exp_correction",
	0,
	0
);
static TypedField<RPG::Actor, RPG::Equipment> static_initial_equipment(
	&RPG::Actor::initial_equipment,
	LDB_Reader::ChunkActor::initial_equipment,
	"initial_equipment",
	1,
	0
);
static TypedField<RPG::Actor, int32_t> static_unarmed_animation(
	&RPG::Actor::unarmed_animation,
	LDB_Reader::ChunkActor::unarmed_animation,
	"unarmed_animation",
	0,
	0
);
static TypedField<RPG::Actor, int32_t> static_class_id(
	&RPG::Actor::class_id,
	LDB_Reader::ChunkActor::class_id,
	"class_id",
	0,
	1
);
static TypedField<RPG::Actor, int32_t> static_battle_x(
	&RPG::Actor::battle_x,
	LDB_Reader::ChunkActor::battle_x,
	"battle_x",
	0,
	1
);
static TypedField<RPG::Actor, int32_t> static_battle_y(
	&RPG::Actor::battle_y,
	LDB_Reader::ChunkActor::battle_y,
	"battle_y",
	0,
	1
);
static TypedField<RPG::Actor, int32_t> static_battler_animation(
	&RPG::Actor::battler_animation,
	LDB_Reader::ChunkActor::battler_animation,
	"battler_animation",
	0,
	1
);
static TypedField<RPG::Actor, std::vector<RPG::Learning>> static_skills(
	&RPG::Actor::skills,
	LDB_Reader::ChunkActor::skills,
	"skills",
	1,
	0
);
static TypedField<RPG::Actor, bool> static_rename_skill(
	&RPG::Actor::rename_skill,
	LDB_Reader::ChunkActor::rename_skill,
	"rename_skill",
	0,
	0
);
static TypedField<RPG::Actor, std::string> static_skill_name(
	&RPG::Actor::skill_name,
	LDB_Reader::ChunkActor::skill_name,
	"skill_name",
	0,
	0
);
static SizeField<RPG::Actor, uint8_t> static_size_state_ranks(
	&RPG::Actor::state_ranks,
	LDB_Reader::ChunkActor::state_ranks_size,
	0,
	0
);
static TypedField<RPG::Actor, std::vector<uint8_t>> static_state_ranks(
	&RPG::Actor::state_ranks,
	LDB_Reader::ChunkActor::state_ranks,
	"state_ranks",
	1,
	0
);
static SizeField<RPG::Actor, uint8_t> static_size_attribute_ranks(
	&RPG::Actor::attribute_ranks,
	LDB_Reader::ChunkActor::attribute_ranks_size,
	0,
	0
);
static TypedField<RPG::Actor, std::vector<uint8_t>> static_attribute_ranks(
	&RPG::Actor::attribute_ranks,
	LDB_Reader::ChunkActor::attribute_ranks,
	"attribute_ranks",
	1,
	0
);
static TypedField<RPG::Actor, std::vector<int32_t>> static_battle_commands(
	&RPG::Actor::battle_commands,
	LDB_Reader::ChunkActor::battle_commands,
	"battle_commands",
	1,
	1
);


template <>
Field<RPG::Actor> const* Struct<RPG::Actor>::fields[] = {
	&static_name,
	&static_title,
	&static_character_name,
	&static_character_index,
	&static_transparent,
	&static_initial_level,
	&static_final_level,
	&static_critical_hit,
	&static_critical_hit_chance,
	&static_face_name,
	&static_face_index,
	&static_two_weapon,
	&static_lock_equipment,
	&static_auto_battle,
	&static_super_guard,
	&static_parameters,
	&static_exp_base,
	&static_exp_inflation,
	&static_exp_correction,
	&static_initial_equipment,
	&static_unarmed_animation,
	&static_class_id,
	&static_battle_x,
	&static_battle_y,
	&static_battler_animation,
	&static_skills,
	&static_rename_skill,
	&static_skill_name,
	&static_size_state_ranks,
	&static_state_ranks,
	&static_size_attribute_ranks,
	&static_attribute_ranks,
	&static_battle_commands,
	NULL
};

template class Struct<RPG::Actor>;
