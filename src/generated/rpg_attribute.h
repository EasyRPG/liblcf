/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
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

		int ID = 0;
		std::string name;
		int type = 0;
		int a_rate = 300;
		int b_rate = 200;
		int c_rate = 100;
		int d_rate = 50;
		int e_rate = 0;
	};
}

#endif
