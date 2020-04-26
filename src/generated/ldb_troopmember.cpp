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

// Read TroopMember.

template <>
char const* const Struct<RPG::TroopMember>::name = "TroopMember";
static TypedField<RPG::TroopMember, int32_t> static_enemy_id(
	&RPG::TroopMember::enemy_id,
	LDB_Reader::ChunkTroopMember::enemy_id,
	"enemy_id",
	0,
	0
);
static TypedField<RPG::TroopMember, int32_t> static_x(
	&RPG::TroopMember::x,
	LDB_Reader::ChunkTroopMember::x,
	"x",
	0,
	0
);
static TypedField<RPG::TroopMember, int32_t> static_y(
	&RPG::TroopMember::y,
	LDB_Reader::ChunkTroopMember::y,
	"y",
	0,
	0
);
static TypedField<RPG::TroopMember, bool> static_invisible(
	&RPG::TroopMember::invisible,
	LDB_Reader::ChunkTroopMember::invisible,
	"invisible",
	0,
	0
);


template <>
Field<RPG::TroopMember> const* Struct<RPG::TroopMember>::fields[] = {
	&static_enemy_id,
	&static_x,
	&static_y,
	&static_invisible,
	NULL
};

template class Struct<RPG::TroopMember>;
