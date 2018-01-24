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

#ifndef LCF_RPG_BATTLECOMMANDS_H
#define LCF_RPG_BATTLECOMMANDS_H

// Headers
#include <stdint.h>
#include <vector>
#include "rpg_battlecommand.h"

/**
 * RPG::BattleCommands class.
 */
namespace RPG {
	class BattleCommands {
	public:
		enum Placement {
			Placement_manual = 0,
			Placement_automatic = 1
		};
		enum RowShown {
			RowShown_front = 0,
			RowShown_back = 1
		};
		enum BattleType {
			BattleType_traditional = 0,
			BattleType_alternative = 1,
			BattleType_gauge = 2
		};
		enum WindowSize {
			WindowSize_large = 0,
			WindowSize_small = 1
		};
		enum Transparency {
			Transparency_opaque = 0,
			Transparency_transparent = 1
		};
		enum Facing {
			Facing_retain = 0,
			Facing_up = 1,
			Facing_right = 2,
			Facing_down = 3,
			Facing_left = 4
		};

		int32_t placement = 0;
		int32_t death_handler1 = 0;
		int32_t row = 0;
		int32_t battle_type = 0;
		int32_t unknown_09 = 0;
		std::vector<BattleCommand> commands;
		int32_t death_handler2 = 0;
		int32_t death_event = 0;
		int32_t window_size = 0;
		int32_t transparency = 0;
		bool teleport = false;
		int32_t teleport_id = 0;
		int32_t teleport_x = 0;
		int32_t teleport_y = 0;
		int32_t teleport_face = 0;
	};
}

#endif
