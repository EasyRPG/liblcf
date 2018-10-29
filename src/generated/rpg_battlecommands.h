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

#ifndef LCF_RPG_BATTLECOMMANDS_H
#define LCF_RPG_BATTLECOMMANDS_H

// Headers
#include <stdint.h>
#include <vector>
#include "enum_tags.h"
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
		static constexpr auto kPlacementTags = makeEnumTags<Placement>(
			"manual",
			"automatic"
		);
		enum RowShown {
			RowShown_front = 0,
			RowShown_back = 1
		};
		static constexpr auto kRowShownTags = makeEnumTags<RowShown>(
			"front",
			"back"
		);
		enum BattleType {
			BattleType_traditional = 0,
			BattleType_alternative = 1,
			BattleType_gauge = 2
		};
		static constexpr auto kBattleTypeTags = makeEnumTags<BattleType>(
			"traditional",
			"alternative",
			"gauge"
		);
		enum WindowSize {
			WindowSize_large = 0,
			WindowSize_small = 1
		};
		static constexpr auto kWindowSizeTags = makeEnumTags<WindowSize>(
			"large",
			"small"
		);
		enum Transparency {
			Transparency_opaque = 0,
			Transparency_transparent = 1
		};
		static constexpr auto kTransparencyTags = makeEnumTags<Transparency>(
			"opaque",
			"transparent"
		);
		enum Facing {
			Facing_retain = 0,
			Facing_up = 1,
			Facing_right = 2,
			Facing_down = 3,
			Facing_left = 4
		};
		static constexpr auto kFacingTags = makeEnumTags<Facing>(
			"retain",
			"up",
			"right",
			"down",
			"left"
		);

		int32_t placement = 0;
		int32_t death_handler1 = 0;
		int32_t row = 0;
		int32_t battle_type = 0;
		bool unused_display_normal_parameters = true;
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
