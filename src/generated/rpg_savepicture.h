/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEPICTURE_H
#define LCF_RPG_SAVEPICTURE_H

// Headers
#include <string>

/**
 * RPG::SavePicture class.
 */
namespace RPG {
	class SavePicture {
	public:
		int ID = 0;
		std::string name;
		double start_x = 0.0;
		double start_y = 0.0;
		double current_x = 0.0;
		double current_y = 0.0;
		bool fixed_to_map = false;
		double current_magnify = -1.0;
		double current_top_trans = 0.0;
		bool transparency = false;
		double current_red = -1.0;
		double current_green = -1.0;
		double current_blue = -1.0;
		double current_sat = -1.0;
		int effect_mode = 0;
		double current_effect = 0.0;
		double current_bot_trans = 0.0;
		double finish_x = 0.0;
		double finish_y = 0.0;
		int finish_magnify = 100;
		int finish_top_trans = 0;
		int finish_bot_trans = 0;
		int finish_red = 100;
		int finish_green = 100;
		int finish_blue = 100;
		int finish_sat = 100;
		int finish_effect = 0;
		int time_left = 0;
		double current_rotation = 0.0;
		int current_waver = 0;
	};
}

#endif
