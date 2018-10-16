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

#ifndef LCF_RPG_SAVEEVENTDATA_H
#define LCF_RPG_SAVEEVENTDATA_H

// Headers
#include <stdint.h>
#include <vector>
#include "rpg_saveeventcommands.h"

/**
 * RPG::SaveEventData class.
 */
namespace RPG {
	class SaveEventData {
	public:
		std::vector<SaveEventCommands> commands;
		bool show_message = false;
		bool abort_on_escape = false;
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
		int32_t wait_time = 0;
		int32_t keyinput_time_variable = -1;
		bool keyinput_down = false;
		bool keyinput_left = false;
		bool keyinput_right = false;
		bool keyinput_up = false;
		bool keyinput_timed = false;
		bool unused_wait_for_key_or_enter = false;
	};
}

#endif
