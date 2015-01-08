/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEINVENTORY_H
#define LCF_RPG_SAVEINVENTORY_H

// Headers
#include <vector>
#include "reader_types.h"

/**
 * RPG::SaveInventory class.
 */
namespace RPG {
	class SaveInventory {
	public:
		SaveInventory();
		void Setup();

		int party_size;
		std::vector<int16_t> party;
		int items_size;
		std::vector<int16_t> item_ids;
		std::vector<uint8_t> item_counts;
		std::vector<uint8_t> item_usage;
		int gold;
		int timer1_secs;
		bool timer1_active;
		bool timer1_visible;
		bool timer1_battle;
		int timer2_secs;
		bool timer2_active;
		bool timer2_visible;
		bool timer2_battle;
		int battles;
		int defeats;
		int escapes;
		int victories;
		int unknown_29_turns;
		int steps;
	};
}

#endif
