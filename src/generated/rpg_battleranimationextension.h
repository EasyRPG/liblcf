/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_BATTLERANIMATIONEXTENSION_H
#define LCF_RPG_BATTLERANIMATIONEXTENSION_H

// Headers
#include <string>

/**
 * RPG::BattlerAnimationExtension class.
 */
namespace RPG {
	class BattlerAnimationExtension {
	public:
		enum AnimType {
			AnimType_graphic = 0,
			AnimType_animation = 1
		};

		int ID = 0;
		std::string name;
		std::string battler_name;
		int battler_index = 0;
		int animation_type = 0;
		int animation_id = 0;
	};
}

#endif
