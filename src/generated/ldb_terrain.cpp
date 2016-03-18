/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Terrain.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Terrain

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name),
	LCF_STRUCT_TYPED_FIELD(int, damage),
	LCF_STRUCT_TYPED_FIELD(int, encounter_rate),
	LCF_STRUCT_TYPED_FIELD(std::string, background_name),
	LCF_STRUCT_TYPED_FIELD(bool, boat_pass),
	LCF_STRUCT_TYPED_FIELD(bool, ship_pass),
	LCF_STRUCT_TYPED_FIELD(bool, airship_pass),
	LCF_STRUCT_TYPED_FIELD(bool, airship_land),
	LCF_STRUCT_TYPED_FIELD(int, bush_depth),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, footstep),
	LCF_STRUCT_TYPED_FIELD(bool, on_damage_se),
	LCF_STRUCT_TYPED_FIELD(int, background_type),
	LCF_STRUCT_TYPED_FIELD(std::string, background_a_name),
	LCF_STRUCT_TYPED_FIELD(bool, background_a_scrollh),
	LCF_STRUCT_TYPED_FIELD(bool, background_a_scrollv),
	LCF_STRUCT_TYPED_FIELD(int, background_a_scrollh_speed),
	LCF_STRUCT_TYPED_FIELD(int, background_a_scrollv_speed),
	LCF_STRUCT_TYPED_FIELD(bool, background_b),
	LCF_STRUCT_TYPED_FIELD(std::string, background_b_name),
	LCF_STRUCT_TYPED_FIELD(bool, background_b_scrollh),
	LCF_STRUCT_TYPED_FIELD(bool, background_b_scrollv),
	LCF_STRUCT_TYPED_FIELD(int, background_b_scrollh_speed),
	LCF_STRUCT_TYPED_FIELD(int, background_b_scrollv_speed),
	LCF_STRUCT_TYPED_FIELD(RPG::Terrain::Flags, special_flags),
	LCF_STRUCT_TYPED_FIELD(int, special_back_party),
	LCF_STRUCT_TYPED_FIELD(int, special_back_enemies),
	LCF_STRUCT_TYPED_FIELD(int, special_lateral_party),
	LCF_STRUCT_TYPED_FIELD(int, special_lateral_enemies),
	LCF_STRUCT_TYPED_FIELD(int, grid_location),
	LCF_STRUCT_TYPED_FIELD(int, grid_a),
	LCF_STRUCT_TYPED_FIELD(int, grid_b),
	LCF_STRUCT_TYPED_FIELD(int, grid_c),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
