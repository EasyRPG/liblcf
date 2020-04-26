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

// Read BattlerAnimationData.

template <>
char const* const Struct<RPG::BattlerAnimationData>::name = "BattlerAnimationData";
static TypedField<RPG::BattlerAnimationData, int32_t> static_move(
	&RPG::BattlerAnimationData::move,
	LDB_Reader::ChunkBattlerAnimationData::move,
	"move",
	0,
	0
);
static TypedField<RPG::BattlerAnimationData, int32_t> static_after_image(
	&RPG::BattlerAnimationData::after_image,
	LDB_Reader::ChunkBattlerAnimationData::after_image,
	"after_image",
	0,
	0
);
static TypedField<RPG::BattlerAnimationData, int32_t> static_pose(
	&RPG::BattlerAnimationData::pose,
	LDB_Reader::ChunkBattlerAnimationData::pose,
	"pose",
	0,
	0
);


template <>
Field<RPG::BattlerAnimationData> const* Struct<RPG::BattlerAnimationData>::fields[] = {
	&static_move,
	&static_after_image,
	&static_pose,
	NULL
};

template class Struct<RPG::BattlerAnimationData>;
