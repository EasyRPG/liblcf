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

// Read Attribute.

template <>
char const* const Struct<RPG::Attribute>::name = "Attribute";

template <>
Field<RPG::Attribute> const* Struct<RPG::Attribute>::fields[] = {
	new TypedField<RPG::Attribute, std::string>(
		&RPG::Attribute::name,
		LDB_Reader::ChunkAttribute::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::Attribute, int32_t>(
		&RPG::Attribute::type,
		LDB_Reader::ChunkAttribute::type,
		"type",
		1,
		0
	),
	new TypedField<RPG::Attribute, int32_t>(
		&RPG::Attribute::a_rate,
		LDB_Reader::ChunkAttribute::a_rate,
		"a_rate",
		0,
		0
	),
	new TypedField<RPG::Attribute, int32_t>(
		&RPG::Attribute::b_rate,
		LDB_Reader::ChunkAttribute::b_rate,
		"b_rate",
		0,
		0
	),
	new TypedField<RPG::Attribute, int32_t>(
		&RPG::Attribute::c_rate,
		LDB_Reader::ChunkAttribute::c_rate,
		"c_rate",
		0,
		0
	),
	new TypedField<RPG::Attribute, int32_t>(
		&RPG::Attribute::d_rate,
		LDB_Reader::ChunkAttribute::d_rate,
		"d_rate",
		0,
		0
	),
	new TypedField<RPG::Attribute, int32_t>(
		&RPG::Attribute::e_rate,
		LDB_Reader::ChunkAttribute::e_rate,
		"e_rate",
		0,
		0
	),
	NULL
};

template class Struct<RPG::Attribute>;
