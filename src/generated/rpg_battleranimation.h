/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_BATTLERANIMATION_H
#define LCF_RPG_BATTLERANIMATION_H

// Headers
#include <string>
#include <vector>
#include "rpg_battleranimationextension.h"

/**
 * RPG::BattlerAnimation class.
 */
namespace RPG {
	class BattlerAnimation {
	public:
		enum Speed {
			Speed_slow = 0,
			Speed_normal = 8,
			Speed_fast = 14
		};

		int ID = 0;
		std::string name;
		int speed = 0;
		std::vector<BattlerAnimationExtension> base_data;
		std::vector<BattlerAnimationExtension> weapon_data;
	};
}

#endif
