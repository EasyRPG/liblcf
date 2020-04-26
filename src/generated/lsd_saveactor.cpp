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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read SaveActor.

template <>
char const* const Struct<RPG::SaveActor>::name = "SaveActor";
static TypedField<RPG::SaveActor, std::string> static_name(
	&RPG::SaveActor::name,
	LSD_Reader::ChunkSaveActor::name,
	"name",
	1,
	0
);
static TypedField<RPG::SaveActor, std::string> static_title(
	&RPG::SaveActor::title,
	LSD_Reader::ChunkSaveActor::title,
	"title",
	1,
	0
);
static TypedField<RPG::SaveActor, std::string> static_sprite_name(
	&RPG::SaveActor::sprite_name,
	LSD_Reader::ChunkSaveActor::sprite_name,
	"sprite_name",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_sprite_id(
	&RPG::SaveActor::sprite_id,
	LSD_Reader::ChunkSaveActor::sprite_id,
	"sprite_id",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_transparency(
	&RPG::SaveActor::transparency,
	LSD_Reader::ChunkSaveActor::transparency,
	"transparency",
	0,
	0
);
static TypedField<RPG::SaveActor, std::string> static_face_name(
	&RPG::SaveActor::face_name,
	LSD_Reader::ChunkSaveActor::face_name,
	"face_name",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_face_id(
	&RPG::SaveActor::face_id,
	LSD_Reader::ChunkSaveActor::face_id,
	"face_id",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_level(
	&RPG::SaveActor::level,
	LSD_Reader::ChunkSaveActor::level,
	"level",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_exp(
	&RPG::SaveActor::exp,
	LSD_Reader::ChunkSaveActor::exp,
	"exp",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_hp_mod(
	&RPG::SaveActor::hp_mod,
	LSD_Reader::ChunkSaveActor::hp_mod,
	"hp_mod",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_sp_mod(
	&RPG::SaveActor::sp_mod,
	LSD_Reader::ChunkSaveActor::sp_mod,
	"sp_mod",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_attack_mod(
	&RPG::SaveActor::attack_mod,
	LSD_Reader::ChunkSaveActor::attack_mod,
	"attack_mod",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_defense_mod(
	&RPG::SaveActor::defense_mod,
	LSD_Reader::ChunkSaveActor::defense_mod,
	"defense_mod",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_spirit_mod(
	&RPG::SaveActor::spirit_mod,
	LSD_Reader::ChunkSaveActor::spirit_mod,
	"spirit_mod",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_agility_mod(
	&RPG::SaveActor::agility_mod,
	LSD_Reader::ChunkSaveActor::agility_mod,
	"agility_mod",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_skills_size(
	&RPG::SaveActor::skills_size,
	LSD_Reader::ChunkSaveActor::skills_size,
	"skills_size",
	0,
	0
);
static TypedField<RPG::SaveActor, std::vector<int16_t>> static_skills(
	&RPG::SaveActor::skills,
	LSD_Reader::ChunkSaveActor::skills,
	"skills",
	1,
	0
);
static TypedField<RPG::SaveActor, std::vector<int16_t>> static_equipped(
	&RPG::SaveActor::equipped,
	LSD_Reader::ChunkSaveActor::equipped,
	"equipped",
	1,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_current_hp(
	&RPG::SaveActor::current_hp,
	LSD_Reader::ChunkSaveActor::current_hp,
	"current_hp",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_current_sp(
	&RPG::SaveActor::current_sp,
	LSD_Reader::ChunkSaveActor::current_sp,
	"current_sp",
	0,
	0
);
static TypedField<RPG::SaveActor, std::vector<int32_t>> static_battle_commands(
	&RPG::SaveActor::battle_commands,
	LSD_Reader::ChunkSaveActor::battle_commands,
	"battle_commands",
	0,
	1
);
static CountField<RPG::SaveActor, int16_t> static_size_status(
	&RPG::SaveActor::status,
	LSD_Reader::ChunkSaveActor::status_size,
	0,
	0
);
static TypedField<RPG::SaveActor, std::vector<int16_t>> static_status(
	&RPG::SaveActor::status,
	LSD_Reader::ChunkSaveActor::status,
	"status",
	1,
	0
);
static TypedField<RPG::SaveActor, bool> static_changed_battle_commands(
	&RPG::SaveActor::changed_battle_commands,
	LSD_Reader::ChunkSaveActor::changed_battle_commands,
	"changed_battle_commands",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_class_id(
	&RPG::SaveActor::class_id,
	LSD_Reader::ChunkSaveActor::class_id,
	"class_id",
	0,
	0
);
static TypedField<RPG::SaveActor, int32_t> static_row(
	&RPG::SaveActor::row,
	LSD_Reader::ChunkSaveActor::row,
	"row",
	0,
	1
);
static TypedField<RPG::SaveActor, bool> static_two_weapon(
	&RPG::SaveActor::two_weapon,
	LSD_Reader::ChunkSaveActor::two_weapon,
	"two_weapon",
	0,
	1
);
static TypedField<RPG::SaveActor, bool> static_lock_equipment(
	&RPG::SaveActor::lock_equipment,
	LSD_Reader::ChunkSaveActor::lock_equipment,
	"lock_equipment",
	0,
	1
);
static TypedField<RPG::SaveActor, bool> static_auto_battle(
	&RPG::SaveActor::auto_battle,
	LSD_Reader::ChunkSaveActor::auto_battle,
	"auto_battle",
	0,
	1
);
static TypedField<RPG::SaveActor, bool> static_super_guard(
	&RPG::SaveActor::super_guard,
	LSD_Reader::ChunkSaveActor::super_guard,
	"super_guard",
	0,
	1
);
static TypedField<RPG::SaveActor, int32_t> static_battler_animation(
	&RPG::SaveActor::battler_animation,
	LSD_Reader::ChunkSaveActor::battler_animation,
	"battler_animation",
	0,
	1
);


template <>
Field<RPG::SaveActor> const* Struct<RPG::SaveActor>::fields[] = {
	&static_name,
	&static_title,
	&static_sprite_name,
	&static_sprite_id,
	&static_transparency,
	&static_face_name,
	&static_face_id,
	&static_level,
	&static_exp,
	&static_hp_mod,
	&static_sp_mod,
	&static_attack_mod,
	&static_defense_mod,
	&static_spirit_mod,
	&static_agility_mod,
	&static_skills_size,
	&static_skills,
	&static_equipped,
	&static_current_hp,
	&static_current_sp,
	&static_battle_commands,
	&static_size_status,
	&static_status,
	&static_changed_battle_commands,
	&static_class_id,
	&static_row,
	&static_two_weapon,
	&static_lock_equipment,
	&static_auto_battle,
	&static_super_guard,
	&static_battler_animation,
	NULL
};

template class Struct<RPG::SaveActor>;
