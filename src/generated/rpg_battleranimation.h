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

#ifndef LCF_RPG_BATTLERANIMATION_H
#define LCF_RPG_BATTLERANIMATION_H

// Headers
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_battleranimationextension.h"

/**
 * RPG::BattlerAnimation class.
 */
namespace RPG {
	class BattlerAnimation {
	public:
		enum class Speed {
			Slow = 0,
			Normal = 8,
			Fast = 14
		};

		int ID = 0;
		std::string name;
		int32_t speed = 0;
		std::vector<BattlerAnimationExtension> base_data;
		std::vector<BattlerAnimationExtension> weapon_data;
	};

	inline bool operator==(const BattlerAnimation& l, const BattlerAnimation& r) {
		return l.name == r.name
		&& l.speed == r.speed
		&& l.base_data == r.base_data
		&& l.weapon_data == r.weapon_data;
	}

	inline bool operator!=(const BattlerAnimation& l, const BattlerAnimation& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::BattlerAnimation::Speed, false, Slow, Fast);

LCF_DEFINE_ENUM_TAGS(RPG::BattlerAnimation::Speed, (makeEnumTags<RPG::BattlerAnimation::Speed, 3>({{
	RPG::BattlerAnimation::Speed::Slow,
	RPG::BattlerAnimation::Speed::Normal,
	RPG::BattlerAnimation::Speed::Fast
	}}, {{
	"Slow",
	"Normal",
	"Fast"
	}})));


#endif
