/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ATTRIBUTE_H
#define LCF_RPG_ATTRIBUTE_H

// Headers
#include <string>

/**
 * RPG::Attribute class.
 */
namespace RPG {
	class Attribute {
	public:
		enum Type {
			Type_physical = 0,
			Type_magical = 1
		};

		Attribute();

		int ID;
		std::string name;
		int type;
		int a_rate;
		int b_rate;
		int c_rate;
		int d_rate;
		int e_rate;
	};
}

#endif
