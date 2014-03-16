/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_CLASS_H
#define LCF_RPG_CLASS_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_learning.h"
#include "rpg_parameters.h"

/**
 * RPG::Class class.
 */
namespace RPG {
	class Class {
	public:
		Class();

		int ID;
		std::string name;
		bool two_swords_style;
		bool fix_equipment;
		bool auto_battle;
		bool super_guard;
		Parameters parameters;
		int exp_base;
		int exp_inflation;
		int exp_correction;
		int unarmed_animation;
		std::vector<Learning> skills;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<uint32_t> battle_commands;
	};
}

#endif
