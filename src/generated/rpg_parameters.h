/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_PARAMETERS_H
#define LCF_RPG_PARAMETERS_H

// Headers
#include <vector>
#include "reader_types.h"

/**
 * RPG::Parameters class.
 */
namespace RPG {
	class Parameters {
	public:
		void Setup(int final_level);

		std::vector<int16_t> maxhp;
		std::vector<int16_t> maxsp;
		std::vector<int16_t> attack;
		std::vector<int16_t> defense;
		std::vector<int16_t> spirit;
		std::vector<int16_t> agility;
	};
}

#endif
