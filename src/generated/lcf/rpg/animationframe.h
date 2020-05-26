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

#ifndef LCF_RPG_ANIMATIONFRAME_H
#define LCF_RPG_ANIMATIONFRAME_H

// Headers
#include <vector>
#include "lcf/rpg/animationcelldata.h"
#include <ostream>

/**
 * rpg::AnimationFrame class.
 */
namespace lcf {
namespace rpg {
	class AnimationFrame {
	public:
		int ID = 0;
		std::vector<AnimationCellData> cells;
	};

	inline bool operator==(const AnimationFrame& l, const AnimationFrame& r) {
		return l.cells == r.cells;
	}

	inline bool operator!=(const AnimationFrame& l, const AnimationFrame& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const AnimationFrame& obj) {
		os << "AnimationFrame{";
		os << "cells=";
		for (size_t i = 0; i < obj.cells.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.cells[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
