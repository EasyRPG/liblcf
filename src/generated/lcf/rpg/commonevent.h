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

#ifndef LCF_RPG_COMMONEVENT_H
#define LCF_RPG_COMMONEVENT_H

// Headers
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/eventcommand.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::CommonEvent class.
 */
namespace lcf {
namespace rpg {
	class CommonEvent {
	public:
		enum Trigger {
			Trigger_automatic = 3,
			Trigger_parallel = 4,
			Trigger_call = 5
		};

		int ID = 0;
		std::string name;
		int32_t trigger = 0;
		bool switch_flag = false;
		int32_t switch_id = 1;
		std::vector<EventCommand> event_commands;
	};
	inline std::ostream& operator<<(std::ostream& os, CommonEvent::Trigger code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const CommonEvent& l, const CommonEvent& r) {
		return l.name == r.name
		&& l.trigger == r.trigger
		&& l.switch_flag == r.switch_flag
		&& l.switch_id == r.switch_id
		&& l.event_commands == r.event_commands;
	}

	inline bool operator!=(const CommonEvent& l, const CommonEvent& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const CommonEvent& obj);
} // namespace rpg
} // namespace lcf

#endif
