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

// Read Chipset.

template <>
char const* const Struct<RPG::Chipset>::name = "Chipset";

template <>
Field<RPG::Chipset> const* Struct<RPG::Chipset>::fields[] = {
	new TypedField<RPG::Chipset, std::string>(
		&RPG::Chipset::name,
		LDB_Reader::ChunkChipset::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::Chipset, std::string>(
		&RPG::Chipset::chipset_name,
		LDB_Reader::ChunkChipset::chipset_name,
		"chipset_name",
		0,
		0
	),
	new TypedField<RPG::Chipset, std::vector<int16_t>>(
		&RPG::Chipset::terrain_data,
		LDB_Reader::ChunkChipset::terrain_data,
		"terrain_data",
		0,
		0
	),
	new TypedField<RPG::Chipset, std::vector<uint8_t>>(
		&RPG::Chipset::passable_data_lower,
		LDB_Reader::ChunkChipset::passable_data_lower,
		"passable_data_lower",
		0,
		0
	),
	new TypedField<RPG::Chipset, std::vector<uint8_t>>(
		&RPG::Chipset::passable_data_upper,
		LDB_Reader::ChunkChipset::passable_data_upper,
		"passable_data_upper",
		0,
		0
	),
	new TypedField<RPG::Chipset, int32_t>(
		&RPG::Chipset::animation_type,
		LDB_Reader::ChunkChipset::animation_type,
		"animation_type",
		0,
		0
	),
	new TypedField<RPG::Chipset, int32_t>(
		&RPG::Chipset::animation_speed,
		LDB_Reader::ChunkChipset::animation_speed,
		"animation_speed",
		0,
		0
	),
	NULL
};

template class Struct<RPG::Chipset>;
