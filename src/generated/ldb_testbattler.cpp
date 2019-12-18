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
static TypedField<RPG::TestBattler, int32_t> static_actor_id(
	&RPG::TestBattler::actor_id,
	LDB_Reader::ChunkTestBattler::actor_id,
	"actor_id",
	0,
	0
);
static TypedField<RPG::TestBattler, int32_t> static_level(
	&RPG::TestBattler::level,
	LDB_Reader::ChunkTestBattler::level,
	"level",
	0,
	0
);
static TypedField<RPG::TestBattler, int32_t> static_weapon_id(
	&RPG::TestBattler::weapon_id,
	LDB_Reader::ChunkTestBattler::weapon_id,
	"weapon_id",
	0,
	0
);
static TypedField<RPG::TestBattler, int32_t> static_shield_id(
	&RPG::TestBattler::shield_id,
	LDB_Reader::ChunkTestBattler::shield_id,
	"shield_id",
	0,
	0
);
static TypedField<RPG::TestBattler, int32_t> static_armor_id(
	&RPG::TestBattler::armor_id,
	LDB_Reader::ChunkTestBattler::armor_id,
	"armor_id",
	0,
	0
);
static TypedField<RPG::TestBattler, int32_t> static_helmet_id(
	&RPG::TestBattler::helmet_id,
	LDB_Reader::ChunkTestBattler::helmet_id,
	"helmet_id",
	0,
	0
);
static TypedField<RPG::TestBattler, int32_t> static_accessory_id(
	&RPG::TestBattler::accessory_id,
	LDB_Reader::ChunkTestBattler::accessory_id,
	"accessory_id",
	0,
	0
);


template <>
Field<RPG::TestBattler> const* Struct<RPG::TestBattler>::fields[] = {
	&static_actor_id,
	&static_level,
	&static_weapon_id,
	&static_shield_id,
	&static_armor_id,
	&static_helmet_id,
	&static_accessory_id,
	NULL
};

template class Struct<RPG::TestBattler>;
