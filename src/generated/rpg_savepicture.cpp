/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_savepicture.h"

/**
 * Constructor.
 */
RPG::SavePicture::SavePicture() {
	ID = 0;
	name = "";
	start_x = 0.0;
	start_y = 0.0;
	current_x = 0.0;
	current_y = 0.0;
	picture_scrolls = false;
	current_magnify = -1.0;
	current_top_trans = 0.0;
	transparency = false;
	current_red = -1.0;
	current_green = -1.0;
	current_blue = -1.0;
	current_sat = -1.0;
	effect_mode = 0;
	effect_speed = 0.0;
	current_bot_trans = 0.0;
	finish_x = 0.0;
	finish_y = 0.0;
	finish_magnify = 100;
	finish_top_trans = 0;
	finish_bot_trans = 0;
	finish_red = 100;
	finish_green = 100;
	finish_blue = 100;
	finish_sat = 100;
	effect2_speed = 0;
	time_left = 0;
	current_rotation = 0.0;
	current_waver = 0;
}
