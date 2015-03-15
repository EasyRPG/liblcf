/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEEVENTS_H
#define LCF_RPG_SAVEEVENTS_H

// Headers
#include <vector>
#include "rpg_saveeventcommands.h"

/**
 * RPG::SaveEvents class.
 */
namespace RPG {
	class SaveEvents {
	public:
		SaveEvents();

		std::vector<SaveEventCommands> events;
		int events_size;
		int unknown_0b;
		int unknown_0d;
		bool keyinput_wait;
		int keyinput_variable;
		bool keyinput_all_directions;
		bool keyinput_decision;
		bool keyinput_cancel;
		bool keyinput_numbers;
		bool keyinput_operators;
		bool keyinput_shift;
		bool keyinput_value_right;
		bool keyinput_value_up;
		int time_left;
		int keyinput_time_variable;
		bool keyinput_down;
		bool keyinput_left;
		bool keyinput_right;
		bool keyinput_up;
		bool keyinput_timed;
		int unknown_2a;
	};
}

#endif
