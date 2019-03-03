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

// Read Terrain.

template <>
char const* const Struct<RPG::Terrain>::name = "Terrain";

template <>
Field<RPG::Terrain> const* Struct<RPG::Terrain>::fields[] = {
	new TypedField<RPG::Terrain, std::string>(
		&RPG::Terrain::name,
		LDB_Reader::ChunkTerrain::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::damage,
		LDB_Reader::ChunkTerrain::damage,
		"damage",
		0,
		0
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::encounter_rate,
		LDB_Reader::ChunkTerrain::encounter_rate,
		"encounter_rate",
		0,
		0
	),
	new TypedField<RPG::Terrain, std::string>(
		&RPG::Terrain::background_name,
		LDB_Reader::ChunkTerrain::background_name,
		"background_name",
		0,
		0
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::boat_pass,
		LDB_Reader::ChunkTerrain::boat_pass,
		"boat_pass",
		0,
		0
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::ship_pass,
		LDB_Reader::ChunkTerrain::ship_pass,
		"ship_pass",
		0,
		0
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::airship_pass,
		LDB_Reader::ChunkTerrain::airship_pass,
		"airship_pass",
		0,
		0
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::airship_land,
		LDB_Reader::ChunkTerrain::airship_land,
		"airship_land",
		0,
		0
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::bush_depth,
		LDB_Reader::ChunkTerrain::bush_depth,
		"bush_depth",
		1,
		0
	),
	new TypedField<RPG::Terrain, RPG::Sound>(
		&RPG::Terrain::footstep,
		LDB_Reader::ChunkTerrain::footstep,
		"footstep",
		1,
		1
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::on_damage_se,
		LDB_Reader::ChunkTerrain::on_damage_se,
		"on_damage_se",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::background_type,
		LDB_Reader::ChunkTerrain::background_type,
		"background_type",
		0,
		1
	),
	new TypedField<RPG::Terrain, std::string>(
		&RPG::Terrain::background_a_name,
		LDB_Reader::ChunkTerrain::background_a_name,
		"background_a_name",
		0,
		1
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::background_a_scrollh,
		LDB_Reader::ChunkTerrain::background_a_scrollh,
		"background_a_scrollh",
		0,
		1
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::background_a_scrollv,
		LDB_Reader::ChunkTerrain::background_a_scrollv,
		"background_a_scrollv",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::background_a_scrollh_speed,
		LDB_Reader::ChunkTerrain::background_a_scrollh_speed,
		"background_a_scrollh_speed",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::background_a_scrollv_speed,
		LDB_Reader::ChunkTerrain::background_a_scrollv_speed,
		"background_a_scrollv_speed",
		0,
		1
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::background_b,
		LDB_Reader::ChunkTerrain::background_b,
		"background_b",
		0,
		1
	),
	new TypedField<RPG::Terrain, std::string>(
		&RPG::Terrain::background_b_name,
		LDB_Reader::ChunkTerrain::background_b_name,
		"background_b_name",
		0,
		1
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::background_b_scrollh,
		LDB_Reader::ChunkTerrain::background_b_scrollh,
		"background_b_scrollh",
		0,
		1
	),
	new TypedField<RPG::Terrain, bool>(
		&RPG::Terrain::background_b_scrollv,
		LDB_Reader::ChunkTerrain::background_b_scrollv,
		"background_b_scrollv",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::background_b_scrollh_speed,
		LDB_Reader::ChunkTerrain::background_b_scrollh_speed,
		"background_b_scrollh_speed",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::background_b_scrollv_speed,
		LDB_Reader::ChunkTerrain::background_b_scrollv_speed,
		"background_b_scrollv_speed",
		0,
		1
	),
	new TypedField<RPG::Terrain, RPG::Terrain::Flags>(
		&RPG::Terrain::special_flags,
		LDB_Reader::ChunkTerrain::special_flags,
		"special_flags",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::special_back_party,
		LDB_Reader::ChunkTerrain::special_back_party,
		"special_back_party",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::special_back_enemies,
		LDB_Reader::ChunkTerrain::special_back_enemies,
		"special_back_enemies",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::special_lateral_party,
		LDB_Reader::ChunkTerrain::special_lateral_party,
		"special_lateral_party",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::special_lateral_enemies,
		LDB_Reader::ChunkTerrain::special_lateral_enemies,
		"special_lateral_enemies",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::grid_location,
		LDB_Reader::ChunkTerrain::grid_location,
		"grid_location",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::grid_a,
		LDB_Reader::ChunkTerrain::grid_a,
		"grid_a",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::grid_b,
		LDB_Reader::ChunkTerrain::grid_b,
		"grid_b",
		0,
		1
	),
	new TypedField<RPG::Terrain, int32_t>(
		&RPG::Terrain::grid_c,
		LDB_Reader::ChunkTerrain::grid_c,
		"grid_c",
		0,
		1
	),
	NULL
};

template class Struct<RPG::Terrain>;
