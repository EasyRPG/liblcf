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

// Read BattlerAnimationExtension.

template <>
char const* const Struct<RPG::BattlerAnimationExtension>::name = "BattlerAnimationExtension";
static TypedField<RPG::BattlerAnimationExtension, std::string> static_name(
	&RPG::BattlerAnimationExtension::name,
	LDB_Reader::ChunkBattlerAnimationExtension::name,
	"name",
	0,
	0
);
static TypedField<RPG::BattlerAnimationExtension, std::string> static_battler_name(
	&RPG::BattlerAnimationExtension::battler_name,
	LDB_Reader::ChunkBattlerAnimationExtension::battler_name,
	"battler_name",
	0,
	0
);
static TypedField<RPG::BattlerAnimationExtension, int32_t> static_battler_index(
	&RPG::BattlerAnimationExtension::battler_index,
	LDB_Reader::ChunkBattlerAnimationExtension::battler_index,
	"battler_index",
	0,
	0
);
static TypedField<RPG::BattlerAnimationExtension, int32_t> static_animation_type(
	&RPG::BattlerAnimationExtension::animation_type,
	LDB_Reader::ChunkBattlerAnimationExtension::animation_type,
	"animation_type",
	0,
	0
);
static TypedField<RPG::BattlerAnimationExtension, int32_t> static_animation_id(
	&RPG::BattlerAnimationExtension::animation_id,
	LDB_Reader::ChunkBattlerAnimationExtension::animation_id,
	"animation_id",
	0,
	0
);


template <>
Field<RPG::BattlerAnimationExtension> const* Struct<RPG::BattlerAnimationExtension>::fields[] = {
	&static_name,
	&static_battler_name,
	&static_battler_index,
	&static_animation_type,
	&static_animation_id,
	NULL
};

template class Struct<RPG::BattlerAnimationExtension>;
