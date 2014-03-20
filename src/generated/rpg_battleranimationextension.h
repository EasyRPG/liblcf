/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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

		BattlerAnimationExtension();

		int ID;
		std::string name;
		std::string battler_name;
		int battler_index;
		int animation_type;
		int animation_id;
	};
}

#endif
