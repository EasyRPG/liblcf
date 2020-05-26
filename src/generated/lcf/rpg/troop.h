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

#ifndef LCF_RPG_TROOP_H
#define LCF_RPG_TROOP_H

// Headers
#include <string>
#include <vector>
#include "lcf/rpg/troopmember.h"
#include "lcf/rpg/trooppage.h"
#include <ostream>

/**
 * rpg::Troop class.
 */
namespace lcf {
namespace rpg {
	class Troop {
	public:
		int ID = 0;
		std::string name;
		std::vector<TroopMember> members;
		bool auto_alignment = false;
		std::vector<bool> terrain_set;
		bool appear_randomly = false;
		std::vector<TroopPage> pages;
	};

	inline bool operator==(const Troop& l, const Troop& r) {
		return l.name == r.name
		&& l.members == r.members
		&& l.auto_alignment == r.auto_alignment
		&& l.terrain_set == r.terrain_set
		&& l.appear_randomly == r.appear_randomly
		&& l.pages == r.pages;
	}

	inline bool operator!=(const Troop& l, const Troop& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const Troop& obj) {
		os << "Troop{";
		os << "name="<< obj.name;
		os << " members=";
		for (size_t i = 0; i < obj.members.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.members[i];
		}
		os << "]";
		os << " auto_alignment="<< obj.auto_alignment;
		os << " terrain_set=";
		for (size_t i = 0; i < obj.terrain_set.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.terrain_set[i];
		}
		os << "]";
		os << " appear_randomly="<< obj.appear_randomly;
		os << " pages=";
		for (size_t i = 0; i < obj.pages.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.pages[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
