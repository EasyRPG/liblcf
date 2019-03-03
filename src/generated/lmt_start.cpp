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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_struct_impl.h"

// Read Start.

template <>
char const* const Struct<RPG::Start>::name = "Start";

template <>
Field<RPG::Start> const* Struct<RPG::Start>::fields[] = {
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::party_map_id,
		LMT_Reader::ChunkStart::party_map_id,
		"party_map_id",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::party_x,
		LMT_Reader::ChunkStart::party_x,
		"party_x",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::party_y,
		LMT_Reader::ChunkStart::party_y,
		"party_y",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::boat_map_id,
		LMT_Reader::ChunkStart::boat_map_id,
		"boat_map_id",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::boat_x,
		LMT_Reader::ChunkStart::boat_x,
		"boat_x",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::boat_y,
		LMT_Reader::ChunkStart::boat_y,
		"boat_y",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::ship_map_id,
		LMT_Reader::ChunkStart::ship_map_id,
		"ship_map_id",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::ship_x,
		LMT_Reader::ChunkStart::ship_x,
		"ship_x",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::ship_y,
		LMT_Reader::ChunkStart::ship_y,
		"ship_y",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::airship_map_id,
		LMT_Reader::ChunkStart::airship_map_id,
		"airship_map_id",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::airship_x,
		LMT_Reader::ChunkStart::airship_x,
		"airship_x",
		0,
		0
	),
	new TypedField<RPG::Start, int32_t>(
		&RPG::Start::airship_y,
		LMT_Reader::ChunkStart::airship_y,
		"airship_y",
		0,
		0
	),
	NULL
};

template class Struct<RPG::Start>;
