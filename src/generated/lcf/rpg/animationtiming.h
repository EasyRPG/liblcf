/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
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
#include "lcf/enum_tags.h"
#include "lcf/rpg/sound.h"
#include <ostream>

/**
 * rpg::AnimationTiming class.
 */
namespace lcf {
namespace rpg {
	class AnimationTiming {
	public:
		enum FlashScope {
			FlashScope_nothing = 0,
			FlashScope_target = 1,
			FlashScope_screen = 2
		};
		static constexpr auto kFlashScopeTags = lcf::makeEnumTags<FlashScope>(
			"nothing",
			"target",
			"screen"
		);
		enum ScreenShake {
			ScreenShake_nothing = 0,
			ScreenShake_target = 1,
			ScreenShake_screen = 2
		};
		static constexpr auto kScreenShakeTags = lcf::makeEnumTags<ScreenShake>(
			"nothing",
			"target",
			"screen"
		);

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

	inline std::ostream& operator<<(std::ostream& os, const AnimationTiming& obj) {
		os << "AnimationTiming{";
		os << "frame="<< obj.frame;
		os << " se="<< obj.se;
		os << " flash_scope="<< obj.flash_scope;
		os << " flash_red="<< obj.flash_red;
		os << " flash_green="<< obj.flash_green;
		os << " flash_blue="<< obj.flash_blue;
		os << " flash_power="<< obj.flash_power;
		os << " screen_shake="<< obj.screen_shake;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
