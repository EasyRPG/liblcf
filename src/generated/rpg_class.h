/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_CLASS_H
#define LCF_RPG_CLASS_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_learning.h"
#include "rpg_parameters.h"

/**
 * RPG::Class class.
 */
namespace RPG {
	class Class {
	public:
		int ID = 0;
		std::string name;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int32_t exp_base = 300;
		int32_t exp_inflation = 300;
		int32_t exp_correction = 0;
		int32_t battler_animation = 0;
		std::vector<Learning> skills;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<int32_t> battle_commands;
	};
}

#endif
