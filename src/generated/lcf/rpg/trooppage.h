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

#ifndef LCF_RPG_TROOPPAGE_H
#define LCF_RPG_TROOPPAGE_H

// Headers
#include <vector>
#include "lcf/rpg/eventcommand.h"
#include "lcf/rpg/trooppagecondition.h"
#include <ostream>

/**
 * rpg::TroopPage class.
 */
namespace lcf {
namespace rpg {
	class TroopPage {
	public:
		int ID = 0;
		TroopPageCondition condition;
		std::vector<EventCommand> event_commands;
	};

	inline bool operator==(const TroopPage& l, const TroopPage& r) {
		return l.condition == r.condition
		&& l.event_commands == r.event_commands;
	}

	inline bool operator!=(const TroopPage& l, const TroopPage& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const TroopPage& obj) {
		os << "TroopPage{";
		os << "condition="<< obj.condition;
		os << " event_commands=";
		for (size_t i = 0; i < obj.event_commands.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.event_commands[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
