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

#ifndef LCF_RPG_SAVEEVENTCOMMANDS_H
#define LCF_RPG_SAVEEVENTCOMMANDS_H

// Headers
#include <stdint.h>
#include <vector>
#include "rpg_eventcommand.h"

/**
 * RPG::SaveEventCommands class.
 */
namespace RPG {
	class SaveEventCommands {
	public:
		int ID = 0;
		int32_t commands_size = 0;
		std::vector<EventCommand> commands;
		int32_t current_command = 0;
		int32_t event_id = 0;
		bool actioned = false;
		std::vector<uint8_t> subcommand_path;
	};

	inline bool operator==(const SaveEventCommands& l, const SaveEventCommands& r) {
		return l.commands_size == r.commands_size
		&& l.commands == r.commands
		&& l.current_command == r.current_command
		&& l.event_id == r.event_id
		&& l.actioned == r.actioned
		&& l.subcommand_path == r.subcommand_path
		&& l.subcommand_path == r.subcommand_path;
	}

	inline bool operator!=(const SaveEventCommands& l, const SaveEventCommands& r) {
		return !(l == r);
	}
}

#endif
