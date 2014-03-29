/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_savescreen.h"

/**
 * Constructor.
 */
RPG::SaveScreen::SaveScreen() {
	tint_finish_red = 100;
	tint_finish_green = 100;
	tint_finish_blue = 100;
	tint_finish_sat = 100;
	tint_current_red = -1.0;
	tint_current_green = -1.0;
	tint_current_blue = -1.0;
	tint_current_sat = -1.0;
	tint_time_left = 0;
	flash_continuous = false;
	flash_red = 0;
	flash_green = 0;
	flash_blue = 0;
	flash_current_level = 0.0;
	flash_time_left = 0;
	shake_continuous = false;
	shake_strength = 0;
	shake_speed = 0;
	shake_position = 0;
	unknown_22 = 0;
	shake_time_left = 0;
	pan_x = 0;
	pan_y = 0;
	battleanim_id = 0;
	battleanim_target = 0;
	unknown_2d_battle_anim = 0;
	unknown_2e = 0;
	battleanim_global = false;
	weather = 0;
	weather_strength = 0;
}
