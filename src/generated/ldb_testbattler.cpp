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

// Read TestBattler.

template <>
char const* const Struct<RPG::TestBattler>::name = "TestBattler";

template <>
Field<RPG::TestBattler> const* Struct<RPG::TestBattler>::fields[] = {
	new TypedField<RPG::TestBattler, int32_t>(
		&RPG::TestBattler::actor_id,
		LDB_Reader::ChunkTestBattler::actor_id,
		"actor_id",
		0,
		0
	),
	new TypedField<RPG::TestBattler, int32_t>(
		&RPG::TestBattler::level,
		LDB_Reader::ChunkTestBattler::level,
		"level",
		0,
		0
	),
	new TypedField<RPG::TestBattler, int32_t>(
		&RPG::TestBattler::weapon_id,
		LDB_Reader::ChunkTestBattler::weapon_id,
		"weapon_id",
		0,
		0
	),
	new TypedField<RPG::TestBattler, int32_t>(
		&RPG::TestBattler::shield_id,
		LDB_Reader::ChunkTestBattler::shield_id,
		"shield_id",
		0,
		0
	),
	new TypedField<RPG::TestBattler, int32_t>(
		&RPG::TestBattler::armor_id,
		LDB_Reader::ChunkTestBattler::armor_id,
		"armor_id",
		0,
		0
	),
	new TypedField<RPG::TestBattler, int32_t>(
		&RPG::TestBattler::helmet_id,
		LDB_Reader::ChunkTestBattler::helmet_id,
		"helmet_id",
		0,
		0
	),
	new TypedField<RPG::TestBattler, int32_t>(
		&RPG::TestBattler::accessory_id,
		LDB_Reader::ChunkTestBattler::accessory_id,
		"accessory_id",
		0,
		0
	),
	NULL
};

template class Struct<RPG::TestBattler>;
