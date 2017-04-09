/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
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
