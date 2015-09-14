/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ANIMATIONTIMING_H
#define LCF_RPG_ANIMATIONTIMING_H

// Headers
#include "rpg_sound.h"

/**
 * RPG::AnimationTiming class.
 */
namespace RPG {
	class AnimationTiming {
	public:
		enum FlashScope {
			FlashScope_nothing = 0,
			FlashScope_target = 1,
			FlashScope_screen = 2
		};
		enum ScreenShake {
			ScreenShake_nothing = 0,
			ScreenShake_target = 1,
			ScreenShake_screen = 2
		};

		AnimationTiming();

		int ID;
		int frame;
		Sound se;
		int flash_scope;
		int flash_red;
		int flash_green;
		int flash_blue;
		int flash_power;
		int screen_shake;
	};
}

#endif
