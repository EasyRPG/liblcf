/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Terrain.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Terrain

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, damage, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, encounter_rate, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, background_name, 0),
	LCF_STRUCT_TYPED_FIELD(bool, boat_pass, 0),
	LCF_STRUCT_TYPED_FIELD(bool, ship_pass, 0),
	LCF_STRUCT_TYPED_FIELD(bool, airship_pass, 0),
	LCF_STRUCT_TYPED_FIELD(bool, airship_land, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, bush_depth, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, footstep, 1),
	LCF_STRUCT_TYPED_FIELD(bool, on_damage_se, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, background_type, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, background_a_name, 1),
	LCF_STRUCT_TYPED_FIELD(bool, background_a_scrollh, 1),
	LCF_STRUCT_TYPED_FIELD(bool, background_a_scrollv, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, background_a_scrollh_speed, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, background_a_scrollv_speed, 1),
	LCF_STRUCT_TYPED_FIELD(bool, background_b, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, background_b_name, 1),
	LCF_STRUCT_TYPED_FIELD(bool, background_b_scrollh, 1),
	LCF_STRUCT_TYPED_FIELD(bool, background_b_scrollv, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, background_b_scrollh_speed, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, background_b_scrollv_speed, 1),
	LCF_STRUCT_TYPED_FIELD(RPG::Terrain::Flags, special_flags, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, special_back_party, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, special_back_enemies, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, special_lateral_party, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, special_lateral_enemies, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, grid_location, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, grid_a, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, grid_b, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, grid_c, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
