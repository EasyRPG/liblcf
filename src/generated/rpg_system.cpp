/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_system.h"

/**
 * Constructor.
 */
RPG::System::System() {
	ldb_id = 0;
	boat_name = "";
	ship_name = "";
	airship_name = "";
	boat_index = 0;
	ship_index = 0;
	airship_index = 0;
	title_name = "";
	gameover_name = "";
	system_name = "";
	system2_name = "";
	transition_out = 0;
	transition_in = 0;
	battle_start_fadeout = 0;
	battle_start_fadein = 0;
	battle_end_fadeout = 0;
	battle_end_fadein = 0;
	message_stretch = 0;
	font_id = 0;
	selected_condition = 0;
	selected_hero = 0;
	battletest_background = "";
	save_count = 0;
	battletest_terrain = 0;
	battletest_formation = 0;
	battletest_condition = 0;
	show_frame = false;
	frame_name = "";
	invert_animations = false;
}
