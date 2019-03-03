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

// Read AnimationFrame.

template <>
char const* const Struct<RPG::AnimationFrame>::name = "AnimationFrame";

template <>
Field<RPG::AnimationFrame> const* Struct<RPG::AnimationFrame>::fields[] = {
	new TypedField<RPG::AnimationFrame, std::vector<RPG::AnimationCellData>>(
		&RPG::AnimationFrame::cells,
		LDB_Reader::ChunkAnimationFrame::cells,
		"cells",
		1,
		0
	),
	NULL
};

template class Struct<RPG::AnimationFrame>;
