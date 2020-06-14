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

#ifndef LCF_RPG_BATTLERANIMATIONEXTENSION_H
#define LCF_RPG_BATTLERANIMATIONEXTENSION_H

// Headers
#include <stdint.h>
#include <string>
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::BattlerAnimationExtension class.
 */
namespace lcf {
namespace rpg {
	class BattlerAnimationExtension {
	public:
		enum AnimType {
			AnimType_graphic = 0,
			AnimType_animation = 1
		};
		static constexpr auto kAnimTypeTags = lcf::makeEnumTags<AnimType>(
			"graphic",
			"animation"
		);

		int ID = 0;
		std::string name;
		std::string battler_name;
		int32_t battler_index = 0;
		int32_t animation_type = 0;
		int32_t animation_id = 1;
	};
	inline std::ostream& operator<<(std::ostream& os, BattlerAnimationExtension::AnimType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const BattlerAnimationExtension& l, const BattlerAnimationExtension& r) {
		return l.name == r.name
		&& l.battler_name == r.battler_name
		&& l.battler_index == r.battler_index
		&& l.animation_type == r.animation_type
		&& l.animation_id == r.animation_id;
	}

	inline bool operator!=(const BattlerAnimationExtension& l, const BattlerAnimationExtension& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const BattlerAnimationExtension& obj);
} // namespace rpg
} // namespace lcf

#endif
