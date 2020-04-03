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

#ifndef LCF_RPG_ANIMATION_H
#define LCF_RPG_ANIMATION_H

// Headers
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_animationframe.h"
#include "rpg_animationtiming.h"

/**
 * RPG::Animation class.
 */
namespace RPG {
	class Animation {
	public:
		enum class Scope {
			Target = 0,
			Screen = 1
		};
		enum class Position {
			Up = 0,
			Middle = 1,
			Down = 2
		};

		int ID = 0;
		std::string name;
		std::string animation_name;
		bool large = false;
		std::vector<AnimationTiming> timings;
		int32_t scope = 0;
		int32_t position = 2;
		std::vector<AnimationFrame> frames;
	};

	inline bool operator==(const Animation& l, const Animation& r) {
		return l.name == r.name
		&& l.animation_name == r.animation_name
		&& l.large == r.large
		&& l.timings == r.timings
		&& l.scope == r.scope
		&& l.position == r.position
		&& l.frames == r.frames;
	}

	inline bool operator!=(const Animation& l, const Animation& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::Animation::Scope, true, Target, Screen);
LCF_DEFINE_ENUM_TRAITS(RPG::Animation::Position, true, Up, Down);

LCF_DEFINE_ENUM_TAGS(RPG::Animation::Scope, (makeEnumTags<RPG::Animation::Scope>({{
	"Target",
	"Screen"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::Animation::Position, (makeEnumTags<RPG::Animation::Position>({{
	"Up",
	"Middle",
	"Down"
	}})));


#endif
