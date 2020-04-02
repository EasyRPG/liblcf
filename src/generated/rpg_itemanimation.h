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

#ifndef LCF_RPG_ITEMANIMATION_H
#define LCF_RPG_ITEMANIMATION_H

// Headers
#include <stdint.h>
#include "enum_tags.h"

/**
 * RPG::ItemAnimation class.
 */
namespace RPG {
	class ItemAnimation {
	public:
		enum class Movement {
			None = 0,
			Step = 1,
			Jump = 2,
			Move = 3
		};
		static constexpr auto kMovementTags = makeEnumTags<Movement>(
			"None",
			"Step",
			"Jump",
			"Move"
		);
		enum class AfterImage {
			None = 0,
			Add = 1
		};
		static constexpr auto kAfterImageTags = makeEnumTags<AfterImage>(
			"None",
			"Add"
		);
		enum class Speed {
			Fast = 0,
			Medium = 1,
			Slow = 2
		};
		static constexpr auto kSpeedTags = makeEnumTags<Speed>(
			"Fast",
			"Medium",
			"Slow"
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
}

LCF_DEFINE_ENUM_TRAITS(RPG::ItemAnimation::Movement, true, None, Move);
LCF_DEFINE_ENUM_TRAITS(RPG::ItemAnimation::AfterImage, true, None, Add);
LCF_DEFINE_ENUM_TRAITS(RPG::ItemAnimation::Speed, true, Fast, Slow);

#endif
