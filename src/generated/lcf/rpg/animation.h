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

#ifndef LCF_RPG_ANIMATION_H
#define LCF_RPG_ANIMATION_H

// Headers
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/animationframe.h"
#include "lcf/rpg/animationtiming.h"
#include <ostream>

/**
 * rpg::Animation class.
 */
namespace lcf {
namespace rpg {
	class Animation {
	public:
		enum Scope {
			Scope_target = 0,
			Scope_screen = 1
		};
		static constexpr auto kScopeTags = lcf::makeEnumTags<Scope>(
			"target",
			"screen"
		);
		enum Position {
			Position_up = 0,
			Position_middle = 1,
			Position_down = 2
		};
		static constexpr auto kPositionTags = lcf::makeEnumTags<Position>(
			"up",
			"middle",
			"down"
		);

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

	inline std::ostream& operator<<(std::ostream& os, const Animation& obj) {
		os << "Animation{";
		os << "name="<< obj.name;
		os << " animation_name="<< obj.animation_name;
		os << " large="<< obj.large;
		os << " timings=";
		for (size_t i = 0; i < obj.timings.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.timings[i];
		}
		os << "]";
		os << " scope="<< obj.scope;
		os << " position="<< obj.position;
		os << " frames=";
		for (size_t i = 0; i < obj.frames.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.frames[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
