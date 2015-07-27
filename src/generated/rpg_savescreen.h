/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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
		SaveScreen();

		int tint_finish_red;
		int tint_finish_green;
		int tint_finish_blue;
		int tint_finish_sat;
		double tint_current_red;
		double tint_current_green;
		double tint_current_blue;
		double tint_current_sat;
		int tint_time_left;
		bool flash_continuous;
		int flash_red;
		int flash_green;
		int flash_blue;
		double flash_current_level;
		int flash_time_left;
		bool shake_continuous;
		int shake_strength;
		int shake_speed;
		int shake_position;
		int unknown_22;
		int shake_time_left;
		int pan_x;
		int pan_y;
		int battleanim_id;
		int battleanim_target;
		int unknown_2d_battle_anim;
		int unknown_2e;
		bool battleanim_global;
		int weather;
		int weather_strength;
	};
}

#endif
