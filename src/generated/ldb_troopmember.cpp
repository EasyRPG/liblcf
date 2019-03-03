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

// Read TroopMember.

template <>
char const* const Struct<RPG::TroopMember>::name = "TroopMember";

template <>
Field<RPG::TroopMember> const* Struct<RPG::TroopMember>::fields[] = {
	new TypedField<RPG::TroopMember, int32_t>(
		&RPG::TroopMember::enemy_id,
		LDB_Reader::ChunkTroopMember::enemy_id,
		"enemy_id",
		0,
		0
	),
	new TypedField<RPG::TroopMember, int32_t>(
		&RPG::TroopMember::x,
		LDB_Reader::ChunkTroopMember::x,
		"x",
		0,
		0
	),
	new TypedField<RPG::TroopMember, int32_t>(
		&RPG::TroopMember::y,
		LDB_Reader::ChunkTroopMember::y,
		"y",
		0,
		0
	),
	new TypedField<RPG::TroopMember, bool>(
		&RPG::TroopMember::invisible,
		LDB_Reader::ChunkTroopMember::invisible,
		"invisible",
		0,
		0
	),
	NULL
};

template class Struct<RPG::TroopMember>;
