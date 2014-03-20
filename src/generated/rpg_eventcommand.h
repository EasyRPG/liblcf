/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_EVENTCOMMAND_H
#define LCF_RPG_EVENTCOMMAND_H

// Headers
#include <string>
#include <vector>

/**
 * RPG::EventCommand class.
 */
namespace RPG {
	class EventCommand {
	public:
		EventCommand();

		int code;
		int indent;
		std::string string;
		std::vector<int> parameters;
	};
}

#endif
