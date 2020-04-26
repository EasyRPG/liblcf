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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_struct_impl.h"

// Read Start.

template <>
char const* const Struct<RPG::Start>::name = "Start";
static TypedField<RPG::Start, int32_t> static_party_map_id(
	&RPG::Start::party_map_id,
	LMT_Reader::ChunkStart::party_map_id,
	"party_map_id",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_party_x(
	&RPG::Start::party_x,
	LMT_Reader::ChunkStart::party_x,
	"party_x",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_party_y(
	&RPG::Start::party_y,
	LMT_Reader::ChunkStart::party_y,
	"party_y",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_boat_map_id(
	&RPG::Start::boat_map_id,
	LMT_Reader::ChunkStart::boat_map_id,
	"boat_map_id",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_boat_x(
	&RPG::Start::boat_x,
	LMT_Reader::ChunkStart::boat_x,
	"boat_x",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_boat_y(
	&RPG::Start::boat_y,
	LMT_Reader::ChunkStart::boat_y,
	"boat_y",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_ship_map_id(
	&RPG::Start::ship_map_id,
	LMT_Reader::ChunkStart::ship_map_id,
	"ship_map_id",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_ship_x(
	&RPG::Start::ship_x,
	LMT_Reader::ChunkStart::ship_x,
	"ship_x",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_ship_y(
	&RPG::Start::ship_y,
	LMT_Reader::ChunkStart::ship_y,
	"ship_y",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_airship_map_id(
	&RPG::Start::airship_map_id,
	LMT_Reader::ChunkStart::airship_map_id,
	"airship_map_id",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_airship_x(
	&RPG::Start::airship_x,
	LMT_Reader::ChunkStart::airship_x,
	"airship_x",
	0,
	0
);
static TypedField<RPG::Start, int32_t> static_airship_y(
	&RPG::Start::airship_y,
	LMT_Reader::ChunkStart::airship_y,
	"airship_y",
	0,
	0
);


template <>
Field<RPG::Start> const* Struct<RPG::Start>::fields[] = {
	&static_party_map_id,
	&static_party_x,
	&static_party_y,
	&static_boat_map_id,
	&static_boat_x,
	&static_boat_y,
	&static_ship_map_id,
	&static_ship_x,
	&static_ship_y,
	&static_airship_map_id,
	&static_airship_x,
	&static_airship_y,
	NULL
};

template class Struct<RPG::Start>;
