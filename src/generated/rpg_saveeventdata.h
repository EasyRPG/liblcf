/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEEVENTDATA_H
#define LCF_RPG_SAVEEVENTDATA_H

// Headers
#include <vector>
#include "reader_types.h"
#include "rpg_saveeventcommands.h"

/**
 * RPG::SaveEventData class.
 */
namespace RPG {
	class SaveEventData {
	public:
		std::vector<SaveEventCommands> commands;
		bool show_message = false;
		int unknown_0b_escape = 0;
		bool wait_movement = false;
		bool keyinput_wait = false;
		uint8_t keyinput_variable = 0;
		bool keyinput_all_directions = false;
		bool keyinput_decision = false;
		bool keyinput_cancel = false;
		bool keyinput_numbers = false;
		bool keyinput_operators = false;
		bool keyinput_shift = false;
		bool keyinput_value_right = false;
		bool keyinput_value_up = false;
		int wait_time = 0;
		int keyinput_time_variable = -1;
		bool keyinput_down = false;
		bool keyinput_left = false;
		bool keyinput_right = false;
		bool keyinput_up = false;
		bool keyinput_timed = false;
		int unknown_2a_time_left = 0;
	};
}

#endif
