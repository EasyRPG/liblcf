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

#ifndef LCF_RPG_SAVESCREEN_H
#define LCF_RPG_SAVESCREEN_H

// Headers
#include <stdint.h>

/**
 * RPG::SaveScreen class.
 */
namespace RPG {
	class SaveScreen {
	public:
		int32_t tint_finish_red = 100;
		int32_t tint_finish_green = 100;
		int32_t tint_finish_blue = 100;
		int32_t tint_finish_sat = 100;
		double tint_current_red = 100.0;
		double tint_current_green = 100.0;
		double tint_current_blue = 100.0;
		double tint_current_sat = 100.0;
		int32_t tint_time_left = 0;
		bool flash_continuous = false;
		int32_t flash_red = 0;
		int32_t flash_green = 0;
		int32_t flash_blue = 0;
		double flash_current_level = 0.0;
		int32_t flash_time_left = 0;
		bool shake_continuous = false;
		int32_t shake_strength = 0;
		int32_t shake_speed = 0;
		int32_t shake_position = 0;
		int32_t shake_position_y = 0;
		int32_t shake_time_left = 0;
		int32_t pan_x = 0;
		int32_t pan_y = 0;
		int32_t battleanim_id = 0;
		int32_t battleanim_target = 0;
		int32_t battleanim_frame = 0;
		bool battleanim_active = false;
		bool battleanim_global = false;
		int32_t weather = 0;
		int32_t weather_strength = 0;
	};
}

#endif
