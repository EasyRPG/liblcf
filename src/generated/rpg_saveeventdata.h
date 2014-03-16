/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEEVENTDATA_H
#define LCF_RPG_SAVEEVENTDATA_H

// Headers
#include <vector>
#include "rpg_saveeventcommands.h"

/**
 * RPG::SaveEventData class.
 */
namespace RPG {
	class SaveEventData {
	public:
		SaveEventData();

		std::vector<SaveEventCommands> commands;
		int unknown_16;
		int unknown_17;
		int time_left;
		int unknown_20;
	};
}

#endif
