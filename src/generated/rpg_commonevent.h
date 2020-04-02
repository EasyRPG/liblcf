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

#ifndef LCF_RPG_COMMONEVENT_H
#define LCF_RPG_COMMONEVENT_H

// Headers
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_eventcommand.h"

/**
 * RPG::CommonEvent class.
 */
namespace RPG {
	class CommonEvent {
	public:
		enum class Trigger {
			Automatic = 3,
			Parallel = 4,
			Call = 5
		};

		int ID = 0;
		std::string name;
		int32_t trigger = 0;
		bool switch_flag = false;
		int32_t switch_id = 1;
		std::vector<EventCommand> event_commands;
	};

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
}

LCF_DEFINE_ENUM_TRAITS(RPG::CommonEvent::Trigger, true, Automatic, Call);

#endif
