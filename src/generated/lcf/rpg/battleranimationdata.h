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

#ifndef LCF_RPG_BATTLERANIMATIONDATA_H
#define LCF_RPG_BATTLERANIMATIONDATA_H

// Headers
#include <stdint.h>
#include "lcf/enum_tags.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::BattlerAnimationData class.
 */
namespace lcf {
namespace rpg {
	class BattlerAnimationData {
	public:
		enum Movement {
			Movement_none = 0,
			Movement_step = 1,
			Movement_jump = 2,
			Movement_move = 3
		};
		static constexpr auto kMovementTags = lcf::makeEnumTags<Movement>(
			"none",
			"step",
			"jump",
			"move"
		);
		enum AfterImage {
			AfterImage_none = 0,
			AfterImage_add = 1
		};
		static constexpr auto kAfterImageTags = lcf::makeEnumTags<AfterImage>(
			"none",
			"add"
		);

		int ID = 0;
		int32_t move = 0;
		int32_t after_image = 0;
		int32_t pose = -1;

		template <typename F>
		void ForEachString(const F& f);
	};
	inline std::ostream& operator<<(std::ostream& os, BattlerAnimationData::Movement code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, BattlerAnimationData::AfterImage code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const BattlerAnimationData& l, const BattlerAnimationData& r) {
		return l.move == r.move
		&& l.after_image == r.after_image
		&& l.pose == r.pose;
	}

	inline bool operator!=(const BattlerAnimationData& l, const BattlerAnimationData& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const BattlerAnimationData& obj);

	template <typename F>
	inline void BattlerAnimationData::ForEachString(const F& f) {
		(void)f;
	}
} // namespace rpg
} // namespace lcf

#endif
