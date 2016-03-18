/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
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
