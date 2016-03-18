/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_BATTLECOMMANDS_H
#define LCF_RPG_BATTLECOMMANDS_H

// Headers
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

		int placement = 0;
		int death_handler1 = 0;
		int row = 0;
		int battle_type = 0;
		int unknown_09 = 0;
		std::vector<BattleCommand> commands;
		int death_handler2 = 0;
		int death_event = 0;
		int window_size = 0;
		int transparency = 0;
		bool teleport = false;
		int teleport_id = 0;
		int teleport_x = 0;
		int teleport_y = 0;
		int teleport_face = 0;
	};
}

#endif
