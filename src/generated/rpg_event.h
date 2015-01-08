/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
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
		Event();

		int ID;
		std::string name;
		int x;
		int y;
		std::vector<EventPage> pages;
	};
}

#endif
