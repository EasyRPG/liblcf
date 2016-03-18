/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_TROOPPAGE_H
#define LCF_RPG_TROOPPAGE_H

// Headers
#include <vector>
#include "rpg_eventcommand.h"
#include "rpg_trooppagecondition.h"

/**
 * RPG::TroopPage class.
 */
namespace RPG {
	class TroopPage {
	public:
		int ID = 0;
		TroopPageCondition condition;
		std::vector<EventCommand> event_commands;
	};
}

#endif
