/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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
		SavePicture();

		int ID;
		std::string name;
		double start_x;
		double start_y;
		double current_x;
		double current_y;
		bool fixed_to_map;
		double current_magnify;
		double current_top_trans;
		bool transparency;
		double current_red;
		double current_green;
		double current_blue;
		double current_sat;
		int effect_mode;
		double current_effect;
		double current_bot_trans;
		double finish_x;
		double finish_y;
		int finish_magnify;
		int finish_top_trans;
		int finish_bot_trans;
		int finish_red;
		int finish_green;
		int finish_blue;
		int finish_sat;
		int finish_effect;
		int time_left;
		double current_rotation;
		int current_waver;
	};
}

#endif
