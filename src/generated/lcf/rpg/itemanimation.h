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

#ifndef LCF_RPG_ITEMANIMATION_H
#define LCF_RPG_ITEMANIMATION_H

// Headers
#include <stdint.h>
#include "lcf/enum_tags.h"
#include "lcf/context.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::ItemAnimation class.
 */
namespace lcf {
namespace rpg {
	class ItemAnimation {
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
		enum Speed {
			Speed_fast = 0,
			Speed_medium = 1,
			Speed_slow = 2
		};
		static constexpr auto kSpeedTags = lcf::makeEnumTags<Speed>(
			"fast",
			"medium",
			"slow"
		);

		int ID = 0;
		int32_t type = 0;
		int32_t weapon_anim = 0;
		int32_t movement = 0;
		int32_t after_image = 0;
		int32_t attacks = 0;
		bool ranged = false;
		int32_t ranged_anim = 0;
		int32_t ranged_speed = 0;
		int32_t battle_anim = 0;
	};
	inline std::ostream& operator<<(std::ostream& os, ItemAnimation::Movement code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, ItemAnimation::AfterImage code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}
	inline std::ostream& operator<<(std::ostream& os, ItemAnimation::Speed code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const ItemAnimation& l, const ItemAnimation& r) {
		return l.type == r.type
		&& l.weapon_anim == r.weapon_anim
		&& l.movement == r.movement
		&& l.after_image == r.after_image
		&& l.attacks == r.attacks
		&& l.ranged == r.ranged
		&& l.ranged_anim == r.ranged_anim
		&& l.ranged_speed == r.ranged_speed
		&& l.battle_anim == r.battle_anim;
	}

	inline bool operator!=(const ItemAnimation& l, const ItemAnimation& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const ItemAnimation& obj);

	template <typename F, typename ParentCtx = Context<void,void>>
	void ForEachString(ItemAnimation& obj, const F& f, const ParentCtx* parent_ctx = nullptr) {
		(void)obj;
		(void)f;
		(void)parent_ctx;
	}

} // namespace rpg
} // namespace lcf

#endif
