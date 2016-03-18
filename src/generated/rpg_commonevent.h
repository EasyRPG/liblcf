/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_COMMONEVENT_H
#define LCF_RPG_COMMONEVENT_H

// Headers
#include <string>
#include <vector>
#include "rpg_eventcommand.h"

/**
 * RPG::CommonEvent class.
 */
namespace RPG {
	class CommonEvent {
	public:
		enum Trigger {
			Trigger_automatic = 3,
			Trigger_parallel = 4,
			Trigger_call = 5
		};

		int ID = 0;
		std::string name;
		int trigger = 0;
		bool switch_flag = false;
		int switch_id = 1;
		std::vector<EventCommand> event_commands;
	};
}

#endif
