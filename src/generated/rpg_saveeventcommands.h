/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
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
		SaveEventCommands();

		int ID;
		int commands_size;
		std::vector<EventCommand> commands;
		int current_command;
		int event_id;
		bool actioned;
		int unknown_15_subcommand_path_size;
		std::vector<uint8_t> unknown_16_subcommand_path;
	};
}

#endif
