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

// Read AnimationCellData.

template <>
char const* const Struct<RPG::AnimationCellData>::name = "AnimationCellData";

template <>
Field<RPG::AnimationCellData> const* Struct<RPG::AnimationCellData>::fields[] = {
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::valid,
		LDB_Reader::ChunkAnimationCellData::valid,
		"valid",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::cell_id,
		LDB_Reader::ChunkAnimationCellData::cell_id,
		"cell_id",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::x,
		LDB_Reader::ChunkAnimationCellData::x,
		"x",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::y,
		LDB_Reader::ChunkAnimationCellData::y,
		"y",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::zoom,
		LDB_Reader::ChunkAnimationCellData::zoom,
		"zoom",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::tone_red,
		LDB_Reader::ChunkAnimationCellData::tone_red,
		"tone_red",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::tone_green,
		LDB_Reader::ChunkAnimationCellData::tone_green,
		"tone_green",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::tone_blue,
		LDB_Reader::ChunkAnimationCellData::tone_blue,
		"tone_blue",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::tone_gray,
		LDB_Reader::ChunkAnimationCellData::tone_gray,
		"tone_gray",
		0,
		0
	),
	new TypedField<RPG::AnimationCellData, int32_t>(
		&RPG::AnimationCellData::transparency,
		LDB_Reader::ChunkAnimationCellData::transparency,
		"transparency",
		0,
		0
	),
	NULL
};

template class Struct<RPG::AnimationCellData>;
