/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_eventpagecondition.h"

/**
 * Constructor.
 */
RPG::EventPageCondition::EventPageCondition() {
	flags.switch_a = false;
	flags.switch_b = false;
	flags.variable = false;
	flags.item = false;
	flags.actor = false;
	flags.timer = false;
	flags.timer2 = false;
	switch_a_id = 1;
	switch_b_id = 1;
	variable_id = 1;
	variable_value = 0;
	item_id = 1;
	actor_id = 1;
	timer_sec = 0;
	timer2_sec = 0;
	compare_operator = 1;
}
