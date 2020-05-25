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
#include "lcf/ldb/reader.h"
#include "lcf/ldb/chunks.h"
#include "reader_struct_impl.h"

namespace lcf {

// Read BattlerAnimationData.

template <>
char const* const Struct<rpg::BattlerAnimationData>::name = "BattlerAnimationData";
static TypedField<rpg::BattlerAnimationData, int32_t> static_move(
	&rpg::BattlerAnimationData::move,
	LDB_Reader::ChunkBattlerAnimationData::move,
	"move",
	0,
	0
);
static TypedField<rpg::BattlerAnimationData, int32_t> static_after_image(
	&rpg::BattlerAnimationData::after_image,
	LDB_Reader::ChunkBattlerAnimationData::after_image,
	"after_image",
	0,
	0
);
static TypedField<rpg::BattlerAnimationData, int32_t> static_pose(
	&rpg::BattlerAnimationData::pose,
	LDB_Reader::ChunkBattlerAnimationData::pose,
	"pose",
	0,
	0
);


template <>
Field<rpg::BattlerAnimationData> const* Struct<rpg::BattlerAnimationData>::fields[] = {
	&static_move,
	&static_after_image,
	&static_pose,
	NULL
};

template class Struct<rpg::BattlerAnimationData>;

} //namespace lcf
