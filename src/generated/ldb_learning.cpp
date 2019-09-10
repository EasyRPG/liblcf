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

// Read Learning.

template <>
char const* const Struct<RPG::Learning>::name = "Learning";
static TypedField<RPG::Learning, int32_t> static_level(
	&RPG::Learning::level,
	LDB_Reader::ChunkLearning::level,
	"level",
	0,
	0
);
static TypedField<RPG::Learning, int32_t> static_skill_id(
	&RPG::Learning::skill_id,
	LDB_Reader::ChunkLearning::skill_id,
	"skill_id",
	0,
	0
);


template <>
Field<RPG::Learning> const* Struct<RPG::Learning>::fields[] = {
	&static_level,
	&static_skill_id,
	NULL
};

template class Struct<RPG::Learning>;
