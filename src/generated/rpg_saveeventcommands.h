/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEEVENTCOMMANDS_H
#define LCF_RPG_SAVEEVENTCOMMANDS_H

// Headers
#include <vector>
#include "reader_types.h"
#include "rpg_eventcommand.h"

/**
 * RPG::SaveEventCommands class.
 */
namespace RPG {
	class SaveEventCommands {
	public:
		int ID = 0;
		int commands_size = 0;
		std::vector<EventCommand> commands;
		int current_command = 0;
		int event_id = 0;
		bool actioned = false;
		int unknown_15_subcommand_path_size = -1;
		std::vector<uint8_t> unknown_16_subcommand_path;
	};
}

#endif
