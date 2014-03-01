/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVETITLE_H
#define LCF_RPG_SAVETITLE_H

// Headers
#include <string>

/**
 * RPG::SaveTitle class.
 */
namespace RPG {
	class SaveTitle {
	public:
		SaveTitle();

		double timestamp;
		std::string hero_name;
		int hero_level;
		int hero_hp;
		std::string face1_name;
		int face1_id;
		std::string face2_name;
		int face2_id;
		std::string face3_name;
		int face3_id;
		std::string face4_name;
		int face4_id;
	};
}

#endif
