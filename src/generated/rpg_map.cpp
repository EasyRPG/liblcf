/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_map.h"

/**
 * Constructor.
 */
RPG::Map::Map() {
	ID = 0;
	chipset_id = 1;
	width = 20;
	height = 15;
	scroll_type = 0;
	parallax_flag = false;
	parallax_name = "";
	parallax_loop_x = false;
	parallax_loop_y = false;
	parallax_auto_loop_x = false;
	parallax_sx = 0;
	parallax_auto_loop_y = false;
	parallax_sy = 0;
	generator_flag = false;
	generator_mode = 0;
	top_level = false;
	generator_tiles = 0;
	generator_width = 4;
	generator_height = 1;
	generator_surround = true;
	generator_upper_wall = true;
	generator_floor_b = true;
	generator_floor_c = true;
	generator_extra_b = true;
	generator_extra_c = true;
	save_count = 0;
}
