/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEEVENTEXECSTATE_H
#define LCF_RPG_SAVEEVENTEXECSTATE_H

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/rpg/saveeventexecframe.h"
#include <ostream>

/**
 * rpg::SaveEventExecState class.
 */
namespace lcf {
namespace rpg {
	class SaveEventExecState {
	public:
		std::vector<SaveEventExecFrame> stack;
		bool show_message = false;
		bool abort_on_escape = false;
		bool wait_movement = false;
		bool keyinput_wait = false;
		uint8_t keyinput_variable = 0;
		bool keyinput_all_directions = false;
		bool keyinput_decision = false;
		bool keyinput_cancel = false;
		bool keyinput_2kshift_2k3numbers = false;
		bool keyinput_2kdown_2k3operators = false;
		bool keyinput_2kleft_2k3shift = false;
		bool keyinput_2kright = false;
		bool keyinput_2kup = false;
		int32_t wait_time = 0;
		int32_t keyinput_time_variable = 0;
		bool keyinput_2k3down = false;
		bool keyinput_2k3left = false;
		bool keyinput_2k3right = false;
		bool keyinput_2k3up = false;
		bool keyinput_timed = false;
		bool wait_key_enter = false;
	};

	inline bool operator==(const SaveEventExecState& l, const SaveEventExecState& r) {
		return l.stack == r.stack
		&& l.show_message == r.show_message
		&& l.abort_on_escape == r.abort_on_escape
		&& l.wait_movement == r.wait_movement
		&& l.keyinput_wait == r.keyinput_wait
		&& l.keyinput_variable == r.keyinput_variable
		&& l.keyinput_all_directions == r.keyinput_all_directions
		&& l.keyinput_decision == r.keyinput_decision
		&& l.keyinput_cancel == r.keyinput_cancel
		&& l.keyinput_2kshift_2k3numbers == r.keyinput_2kshift_2k3numbers
		&& l.keyinput_2kdown_2k3operators == r.keyinput_2kdown_2k3operators
		&& l.keyinput_2kleft_2k3shift == r.keyinput_2kleft_2k3shift
		&& l.keyinput_2kright == r.keyinput_2kright
		&& l.keyinput_2kup == r.keyinput_2kup
		&& l.wait_time == r.wait_time
		&& l.keyinput_time_variable == r.keyinput_time_variable
		&& l.keyinput_2k3down == r.keyinput_2k3down
		&& l.keyinput_2k3left == r.keyinput_2k3left
		&& l.keyinput_2k3right == r.keyinput_2k3right
		&& l.keyinput_2k3up == r.keyinput_2k3up
		&& l.keyinput_timed == r.keyinput_timed
		&& l.wait_key_enter == r.wait_key_enter;
	}

	inline bool operator!=(const SaveEventExecState& l, const SaveEventExecState& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const SaveEventExecState& obj) {
		os << "SaveEventExecState{";
		os << "stack=";
		for (size_t i = 0; i < obj.stack.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.stack[i];
		}
		os << "]";
		os << " show_message="<< obj.show_message;
		os << " abort_on_escape="<< obj.abort_on_escape;
		os << " wait_movement="<< obj.wait_movement;
		os << " keyinput_wait="<< obj.keyinput_wait;
		os << " keyinput_variable="<< obj.keyinput_variable;
		os << " keyinput_all_directions="<< obj.keyinput_all_directions;
		os << " keyinput_decision="<< obj.keyinput_decision;
		os << " keyinput_cancel="<< obj.keyinput_cancel;
		os << " keyinput_2kshift_2k3numbers="<< obj.keyinput_2kshift_2k3numbers;
		os << " keyinput_2kdown_2k3operators="<< obj.keyinput_2kdown_2k3operators;
		os << " keyinput_2kleft_2k3shift="<< obj.keyinput_2kleft_2k3shift;
		os << " keyinput_2kright="<< obj.keyinput_2kright;
		os << " keyinput_2kup="<< obj.keyinput_2kup;
		os << " wait_time="<< obj.wait_time;
		os << " keyinput_time_variable="<< obj.keyinput_time_variable;
		os << " keyinput_2k3down="<< obj.keyinput_2k3down;
		os << " keyinput_2k3left="<< obj.keyinput_2k3left;
		os << " keyinput_2k3right="<< obj.keyinput_2k3right;
		os << " keyinput_2k3up="<< obj.keyinput_2k3up;
		os << " keyinput_timed="<< obj.keyinput_timed;
		os << " wait_key_enter="<< obj.wait_key_enter;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
