/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_terrain.h"

/**
 * Constructor.
 */
RPG::Terrain::Terrain() {
	ID = 0;
	name = "";
	damage = 0;
	encounter_rate = 100;
	background_name = "";
	boat_pass = false;
	ship_pass = false;
	airship_pass = true;
	airship_land = true;
	bush_depth = 0;
	on_damage_se = false;
	background_type = 0;
	background_a_name = "";
	background_a_scrollh = false;
	background_a_scrollv = false;
	background_a_scrollh_speed = 0;
	background_a_scrollv_speed = 0;
	background_b = false;
	background_b_name = "";
	background_b_scrollh = false;
	background_b_scrollv = false;
	background_b_scrollh_speed = 0;
	background_b_scrollv_speed = 0;
	special_flags.back_party = false;
	special_flags.back_enemies = false;
	special_flags.lateral_party = false;
	special_flags.lateral_enemies = false;
	special_back_party = 15;
	special_back_enemies = 10;
	special_lateral_party = 10;
	special_lateral_enemies = 5;
	grid_location = 0;
	grid_a = 0;
	grid_b = 0;
	grid_c = 0;
}
