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

#ifndef LCF_RPG_MOVEROUTE_H
#define LCF_RPG_MOVEROUTE_H

// Headers
#include <vector>
#include "rpg_movecommand.h"

/**
 * RPG::MoveRoute class.
 */
namespace RPG {
	class MoveRoute {
	public:
		std::vector<MoveCommand> move_commands;
		bool repeat = true;
		bool skippable = false;
	};
}

#endif
