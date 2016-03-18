/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
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

		int ID = 0;
		int frame = 0;
		Sound se;
		int flash_scope = 0;
		int flash_red = 31;
		int flash_green = 31;
		int flash_blue = 31;
		int flash_power = 31;
		int screen_shake = 0;
	};
}

#endif
