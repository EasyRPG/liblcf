/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_CHIPSET_H
#define LCF_RPG_CHIPSET_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"

/**
 * RPG::Chipset class.
 */
namespace RPG {
	class Chipset {
	public:
		enum AnimType {
			AnimType_reciprocating = 0,
			AnimType_cyclic = 1
		};

		Chipset();
		void Init();

		int ID = 0;
		std::string name;
		std::string chipset_name;
		std::vector<int16_t> terrain_data;
		std::vector<uint8_t> passable_data_lower;
		std::vector<uint8_t> passable_data_upper;
		int animation_type = 0;
		int animation_speed = 0;
	};
}

#endif
