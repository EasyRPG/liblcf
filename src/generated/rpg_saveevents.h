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
		int unknown_15;
		int unknown_16;
		int unknown_17;
		int unknown_18;
		int unknown_19;
		int unknown_1a;
		int unknown_1b;
		int unknown_1c;
		int wait_count;
		int unknown_20;
		int unknown_23;
		int unknown_24;
		int unknown_25;
		int unknown_26;
		int unknown_29;
		int unknown_2a;
	};
}

#endif
