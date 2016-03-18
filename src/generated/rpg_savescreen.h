/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVESCREEN_H
#define LCF_RPG_SAVESCREEN_H

/**
 * RPG::SaveScreen class.
 */
namespace RPG {
	class SaveScreen {
	public:
		int tint_finish_red = 100;
		int tint_finish_green = 100;
		int tint_finish_blue = 100;
		int tint_finish_sat = 100;
		double tint_current_red = 100.0;
		double tint_current_green = 100.0;
		double tint_current_blue = 100.0;
		double tint_current_sat = 100.0;
		int tint_time_left = 0;
		bool flash_continuous = false;
		int flash_red = 0;
		int flash_green = 0;
		int flash_blue = 0;
		double flash_current_level = 0.0;
		int flash_time_left = 0;
		bool shake_continuous = false;
		int shake_strength = 0;
		int shake_speed = 0;
		int shake_position = 0;
		int shake_position_y = 0;
		int shake_time_left = 0;
		int pan_x = 0;
		int pan_y = 0;
		int battleanim_id = 0;
		int battleanim_target = 0;
		int battleanim_frame = 0;
		int unknown_2e_battleanim_active = 0;
		bool battleanim_global = false;
		int weather = 0;
		int weather_strength = 0;
	};
}

#endif
