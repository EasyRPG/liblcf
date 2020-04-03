/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_ANIMATIONTIMING_H
#define LCF_RPG_ANIMATIONTIMING_H

// Headers
#include <stdint.h>
#include "enum_tags.h"
#include "rpg_sound.h"

/**
 * RPG::AnimationTiming class.
 */
namespace RPG {
	class AnimationTiming {
	public:
		enum class FlashScope {
			Nothing = 0,
			Target = 1,
			Screen = 2
		};
		enum class ScreenShake {
			Nothing = 0,
			Target = 1,
			Screen = 2
		};

		int ID = 0;
		int32_t frame = 0;
		Sound se;
		int32_t flash_scope = 0;
		int32_t flash_red = 31;
		int32_t flash_green = 31;
		int32_t flash_blue = 31;
		int32_t flash_power = 31;
		int32_t screen_shake = 0;
	};

	inline bool operator==(const AnimationTiming& l, const AnimationTiming& r) {
		return l.frame == r.frame
		&& l.se == r.se
		&& l.flash_scope == r.flash_scope
		&& l.flash_red == r.flash_red
		&& l.flash_green == r.flash_green
		&& l.flash_blue == r.flash_blue
		&& l.flash_power == r.flash_power
		&& l.screen_shake == r.screen_shake;
	}

	inline bool operator!=(const AnimationTiming& l, const AnimationTiming& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::AnimationTiming::FlashScope, true, Nothing, Screen);
LCF_DEFINE_ENUM_TRAITS(RPG::AnimationTiming::ScreenShake, true, Nothing, Screen);

LCF_DEFINE_ENUM_TAGS(RPG::AnimationTiming::FlashScope, (makeEnumTags<RPG::AnimationTiming::FlashScope>({{
	"Nothing",
	"Target",
	"Screen"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::AnimationTiming::ScreenShake, (makeEnumTags<RPG::AnimationTiming::ScreenShake>({{
	"Nothing",
	"Target",
	"Screen"
	}})));


#endif
