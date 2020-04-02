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

#ifndef LCF_RPG_BATTLERANIMATIONDATA_H
#define LCF_RPG_BATTLERANIMATIONDATA_H

// Headers
#include <stdint.h>
#include "enum_tags.h"

/**
 * RPG::BattlerAnimationData class.
 */
namespace RPG {
	class BattlerAnimationData {
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

		int ID = 0;
		int32_t move = 0;
		int32_t after_image = 0;
		int32_t pose = -1;
	};

	inline bool operator==(const BattlerAnimationData& l, const BattlerAnimationData& r) {
		return l.move == r.move
		&& l.after_image == r.after_image
		&& l.pose == r.pose;
	}

	inline bool operator!=(const BattlerAnimationData& l, const BattlerAnimationData& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::BattlerAnimationData::Movement, true, None, Move);
LCF_DEFINE_ENUM_TRAITS(RPG::BattlerAnimationData::AfterImage, true, None, Add);

#endif
