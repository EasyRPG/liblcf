/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_EVENT_H
#define LCF_RPG_EVENT_H

// Headers
#include <string>
#include <vector>
#include "rpg_eventpage.h"

/**
 * RPG::Event class.
 */
namespace RPG {
	class Event {
	public:
		int ID = 0;
		std::string name;
		int x = 0;
		int y = 0;
		std::vector<EventPage> pages;
	};
}

#endif
