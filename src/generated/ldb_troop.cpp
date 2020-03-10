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

// Read Troop.

template <>
char const* const Struct<RPG::Troop>::name = "Troop";
static TypedField<RPG::Troop, std::string> static_name(
	&RPG::Troop::name,
	LDB_Reader::ChunkTroop::name,
	"name",
	0,
	0
);
static TypedField<RPG::Troop, std::vector<RPG::TroopMember>> static_members(
	&RPG::Troop::members,
	LDB_Reader::ChunkTroop::members,
	"members",
	1,
	0
);
static TypedField<RPG::Troop, bool> static_auto_alignment(
	&RPG::Troop::auto_alignment,
	LDB_Reader::ChunkTroop::auto_alignment,
	"auto_alignment",
	0,
	0
);
static SizeField<RPG::Troop, bool> static_size_terrain_set(
	&RPG::Troop::terrain_set,
	LDB_Reader::ChunkTroop::terrain_set_size,
	0,
	0
);
static TypedField<RPG::Troop, std::vector<bool>> static_terrain_set(
	&RPG::Troop::terrain_set,
	LDB_Reader::ChunkTroop::terrain_set,
	"terrain_set",
	1,
	0
);
static TypedField<RPG::Troop, bool> static_appear_randomly(
	&RPG::Troop::appear_randomly,
	LDB_Reader::ChunkTroop::appear_randomly,
	"appear_randomly",
	0,
	0
);
static TypedField<RPG::Troop, std::vector<RPG::TroopPage>> static_pages(
	&RPG::Troop::pages,
	LDB_Reader::ChunkTroop::pages,
	"pages",
	1,
	0
);


template <>
Field<RPG::Troop> const* Struct<RPG::Troop>::fields[] = {
	&static_name,
	&static_members,
	&static_auto_alignment,
	&static_size_terrain_set,
	&static_terrain_set,
	&static_appear_randomly,
	&static_pages,
	NULL
};

template class Struct<RPG::Troop>;
