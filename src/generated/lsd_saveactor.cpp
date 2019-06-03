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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read SaveActor.

template <>
char const* const Struct<RPG::SaveActor>::name = "SaveActor";

template <>
Field<RPG::SaveActor> const* Struct<RPG::SaveActor>::fields[] = {
	new TypedField<RPG::SaveActor, std::string>(
		&RPG::SaveActor::name,
		LSD_Reader::ChunkSaveActor::name,
		"name",
		1,
		0
	),
	new TypedField<RPG::SaveActor, std::string>(
		&RPG::SaveActor::title,
		LSD_Reader::ChunkSaveActor::title,
		"title",
		1,
		0
	),
	new TypedField<RPG::SaveActor, std::string>(
		&RPG::SaveActor::sprite_name,
		LSD_Reader::ChunkSaveActor::sprite_name,
		"sprite_name",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::sprite_id,
		LSD_Reader::ChunkSaveActor::sprite_id,
		"sprite_id",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::sprite_flags,
		LSD_Reader::ChunkSaveActor::sprite_flags,
		"sprite_flags",
		0,
		0
	),
	new TypedField<RPG::SaveActor, std::string>(
		&RPG::SaveActor::face_name,
		LSD_Reader::ChunkSaveActor::face_name,
		"face_name",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::face_id,
		LSD_Reader::ChunkSaveActor::face_id,
		"face_id",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::level,
		LSD_Reader::ChunkSaveActor::level,
		"level",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::exp,
		LSD_Reader::ChunkSaveActor::exp,
		"exp",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::hp_mod,
		LSD_Reader::ChunkSaveActor::hp_mod,
		"hp_mod",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::sp_mod,
		LSD_Reader::ChunkSaveActor::sp_mod,
		"sp_mod",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::attack_mod,
		LSD_Reader::ChunkSaveActor::attack_mod,
		"attack_mod",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::defense_mod,
		LSD_Reader::ChunkSaveActor::defense_mod,
		"defense_mod",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::spirit_mod,
		LSD_Reader::ChunkSaveActor::spirit_mod,
		"spirit_mod",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::agility_mod,
		LSD_Reader::ChunkSaveActor::agility_mod,
		"agility_mod",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::skills_size,
		LSD_Reader::ChunkSaveActor::skills_size,
		"skills_size",
		0,
		0
	),
	new TypedField<RPG::SaveActor, std::vector<int16_t>>(
		&RPG::SaveActor::skills,
		LSD_Reader::ChunkSaveActor::skills,
		"skills",
		1,
		0
	),
	new TypedField<RPG::SaveActor, std::vector<int16_t>>(
		&RPG::SaveActor::equipped,
		LSD_Reader::ChunkSaveActor::equipped,
		"equipped",
		1,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::current_hp,
		LSD_Reader::ChunkSaveActor::current_hp,
		"current_hp",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::current_sp,
		LSD_Reader::ChunkSaveActor::current_sp,
		"current_sp",
		0,
		0
	),
	new TypedField<RPG::SaveActor, std::vector<int32_t>>(
		&RPG::SaveActor::battle_commands,
		LSD_Reader::ChunkSaveActor::battle_commands,
		"battle_commands",
		0,
		1
	),
	new CountField<RPG::SaveActor, int16_t>(
		&RPG::SaveActor::status,
		LSD_Reader::ChunkSaveActor::status_size,
		0,
		0
	),
	new TypedField<RPG::SaveActor, std::vector<int16_t>>(
		&RPG::SaveActor::status,
		LSD_Reader::ChunkSaveActor::status,
		"status",
		1,
		0
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::changed_battle_commands,
		LSD_Reader::ChunkSaveActor::changed_battle_commands,
		"changed_battle_commands",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::class_id,
		LSD_Reader::ChunkSaveActor::class_id,
		"class_id",
		0,
		0
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::row,
		LSD_Reader::ChunkSaveActor::row,
		"row",
		0,
		1
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::two_weapon,
		LSD_Reader::ChunkSaveActor::two_weapon,
		"two_weapon",
		0,
		1
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::lock_equipment,
		LSD_Reader::ChunkSaveActor::lock_equipment,
		"lock_equipment",
		0,
		1
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::auto_battle,
		LSD_Reader::ChunkSaveActor::auto_battle,
		"auto_battle",
		0,
		1
	),
	new TypedField<RPG::SaveActor, bool>(
		&RPG::SaveActor::super_guard,
		LSD_Reader::ChunkSaveActor::super_guard,
		"super_guard",
		0,
		1
	),
	new TypedField<RPG::SaveActor, int32_t>(
		&RPG::SaveActor::battler_animation,
		LSD_Reader::ChunkSaveActor::battler_animation,
		"battler_animation",
		0,
		1
	),
	NULL
};

template class Struct<RPG::SaveActor>;
