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

#ifndef LCF_RPG_SAVEEVENTEXECFRAME_H
#define LCF_RPG_SAVEEVENTEXECFRAME_H

// Headers
#include <stdint.h>
#include <vector>
#include "lcf/rpg/eventcommand.h"
#include <ostream>

/**
 * rpg::SaveEventExecFrame class.
 */
namespace lcf {
namespace rpg {
	class SaveEventExecFrame {
	public:
		int ID = 0;
		std::vector<EventCommand> commands;
		int32_t current_command = 0;
		int32_t event_id = 0;
		bool triggered_by_decision_key = false;
		std::vector<uint8_t> subcommand_path;
	};

	inline bool operator==(const SaveEventExecFrame& l, const SaveEventExecFrame& r) {
		return l.commands == r.commands
		&& l.current_command == r.current_command
		&& l.event_id == r.event_id
		&& l.triggered_by_decision_key == r.triggered_by_decision_key
		&& l.subcommand_path == r.subcommand_path;
	}

	inline bool operator!=(const SaveEventExecFrame& l, const SaveEventExecFrame& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const SaveEventExecFrame& obj) {
		os << "SaveEventExecFrame{";
		os << "commands=";
		for (size_t i = 0; i < obj.commands.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.commands[i];
		}
		os << "]";
		os << " current_command="<< obj.current_command;
		os << " event_id="<< obj.event_id;
		os << " triggered_by_decision_key="<< obj.triggered_by_decision_key;
		os << " subcommand_path=";
		for (size_t i = 0; i < obj.subcommand_path.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.subcommand_path[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
