/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ANIMATIONFRAME_H
#define LCF_RPG_ANIMATIONFRAME_H

// Headers
#include <vector>
#include "rpg_animationcelldata.h"

/**
 * RPG::AnimationFrame class.
 */
namespace RPG {
	class AnimationFrame {
	public:
		AnimationFrame();

		int ID;
		std::vector<AnimationCellData> cells;
	};
}

#endif
