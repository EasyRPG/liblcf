/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_BATTLECOMMAND_H
#define LCF_RPG_BATTLECOMMAND_H

// Headers
#include <string>

/**
 * RPG::BattleCommand class.
 */
namespace RPG {
	class BattleCommand {
	public:
		enum Type {
			Type_attack = 0,
			Type_skill = 1,
			Type_subskill = 2,
			Type_defense = 3,
			Type_item = 4,
			Type_escape = 5,
			Type_special = 6
		};

		int ID = 0;
		std::string name;
		int type = 0;
	};
}

#endif
