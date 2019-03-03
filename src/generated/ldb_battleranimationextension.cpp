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

// Read BattlerAnimationExtension.

template <>
char const* const Struct<RPG::BattlerAnimationExtension>::name = "BattlerAnimationExtension";

template <>
Field<RPG::BattlerAnimationExtension> const* Struct<RPG::BattlerAnimationExtension>::fields[] = {
	new TypedField<RPG::BattlerAnimationExtension, std::string>(
		&RPG::BattlerAnimationExtension::name,
		LDB_Reader::ChunkBattlerAnimationExtension::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::BattlerAnimationExtension, std::string>(
		&RPG::BattlerAnimationExtension::battler_name,
		LDB_Reader::ChunkBattlerAnimationExtension::battler_name,
		"battler_name",
		0,
		0
	),
	new TypedField<RPG::BattlerAnimationExtension, int32_t>(
		&RPG::BattlerAnimationExtension::battler_index,
		LDB_Reader::ChunkBattlerAnimationExtension::battler_index,
		"battler_index",
		0,
		0
	),
	new TypedField<RPG::BattlerAnimationExtension, int32_t>(
		&RPG::BattlerAnimationExtension::animation_type,
		LDB_Reader::ChunkBattlerAnimationExtension::animation_type,
		"animation_type",
		0,
		0
	),
	new TypedField<RPG::BattlerAnimationExtension, int32_t>(
		&RPG::BattlerAnimationExtension::animation_id,
		LDB_Reader::ChunkBattlerAnimationExtension::animation_id,
		"animation_id",
		0,
		0
	),
	NULL
};

template class Struct<RPG::BattlerAnimationExtension>;
