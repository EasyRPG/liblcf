/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_saveevents.h"

/**
 * Constructor.
 */
RPG::SaveEvents::SaveEvents() {
	events_size = 0;
	unknown_0b_escape = 0;
	unknown_0d_move_waiting = 0;
	keyinput_wait = false;
	keyinput_variable = 0;
	keyinput_all_directions = false;
	keyinput_decision = false;
	keyinput_cancel = false;
	keyinput_numbers = false;
	keyinput_operators = false;
	keyinput_shift = false;
	keyinput_value_right = false;
	keyinput_value_up = false;
	time_left = 0;
	keyinput_time_variable = -1;
	keyinput_down = false;
	keyinput_left = false;
	keyinput_right = false;
	keyinput_up = false;
	keyinput_timed = false;
	unknown_2a_time_left = 0;
}
