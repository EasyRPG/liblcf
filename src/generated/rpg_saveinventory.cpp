/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_saveinventory.h"

/**
 * Constructor.
 */
RPG::SaveInventory::SaveInventory() {
	party_size = -1;
	items_size = -1;
	gold = 0;
	timer1_secs = 0;
	timer1_active = false;
	timer1_visible = false;
	timer1_battle = false;
	timer2_secs = 0;
	timer2_active = false;
	timer2_visible = false;
	timer2_battle = false;
	battles = 0;
	defeats = 0;
	escapes = 0;
	victories = 0;
	unknown_29_turns = 0;
	steps = 0;
}
