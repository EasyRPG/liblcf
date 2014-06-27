/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_TROOP_H
#define LCF_RPG_TROOP_H

// Headers
#include <string>
#include <vector>
#include "rpg_troopmember.h"
#include "rpg_trooppage.h"

/**
 * RPG::Troop class.
 */
namespace RPG {
	class Troop {
	public:
		Troop();

		int ID;
		std::string name;
		std::vector<TroopMember> members;
		bool auto_alignment;
		std::vector<bool> terrain_set;
		std::vector<TroopPage> pages;
	};
}

#endif
