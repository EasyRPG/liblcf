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

// Read Chipset.

template <>
char const* const Struct<RPG::Chipset>::name = "Chipset";
static TypedField<RPG::Chipset, std::string> static_name(
	&RPG::Chipset::name,
	LDB_Reader::ChunkChipset::name,
	"name",
	0,
	0
);
static TypedField<RPG::Chipset, std::string> static_chipset_name(
	&RPG::Chipset::chipset_name,
	LDB_Reader::ChunkChipset::chipset_name,
	"chipset_name",
	0,
	0
);
static TypedField<RPG::Chipset, std::vector<int16_t>> static_terrain_data(
	&RPG::Chipset::terrain_data,
	LDB_Reader::ChunkChipset::terrain_data,
	"terrain_data",
	0,
	0
);
static TypedField<RPG::Chipset, std::vector<uint8_t>> static_passable_data_lower(
	&RPG::Chipset::passable_data_lower,
	LDB_Reader::ChunkChipset::passable_data_lower,
	"passable_data_lower",
	0,
	0
);
static TypedField<RPG::Chipset, std::vector<uint8_t>> static_passable_data_upper(
	&RPG::Chipset::passable_data_upper,
	LDB_Reader::ChunkChipset::passable_data_upper,
	"passable_data_upper",
	0,
	0
);
static TypedField<RPG::Chipset, int32_t> static_animation_type(
	&RPG::Chipset::animation_type,
	LDB_Reader::ChunkChipset::animation_type,
	"animation_type",
	0,
	0
);
static TypedField<RPG::Chipset, int32_t> static_animation_speed(
	&RPG::Chipset::animation_speed,
	LDB_Reader::ChunkChipset::animation_speed,
	"animation_speed",
	0,
	0
);


template <>
Field<RPG::Chipset> const* Struct<RPG::Chipset>::fields[] = {
	&static_name,
	&static_chipset_name,
	&static_terrain_data,
	&static_passable_data_lower,
	&static_passable_data_upper,
	&static_animation_type,
	&static_animation_speed,
	NULL
};

template class Struct<RPG::Chipset>;
