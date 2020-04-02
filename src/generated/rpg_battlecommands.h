/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
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
		enum class Placement {
			Manual = 0,
			Automatic = 1
		};
		static constexpr auto kPlacementTags = makeEnumTags<Placement>(
			"Manual",
			"Automatic"
		);
		enum class RowShown {
			Front = 0,
			Back = 1
		};
		static constexpr auto kRowShownTags = makeEnumTags<RowShown>(
			"Front",
			"Back"
		);
		enum class BattleType {
			Traditional = 0,
			Alternative = 1,
			Gauge = 2
		};
		static constexpr auto kBattleTypeTags = makeEnumTags<BattleType>(
			"Traditional",
			"Alternative",
			"Gauge"
		);
		enum class WindowSize {
			Large = 0,
			Small = 1
		};
		static constexpr auto kWindowSizeTags = makeEnumTags<WindowSize>(
			"Large",
			"Small"
		);
		enum class Transparency {
			Opaque = 0,
			Transparent = 1
		};
		static constexpr auto kTransparencyTags = makeEnumTags<Transparency>(
			"Opaque",
			"Transparent"
		);
		enum class Facing {
			Retain = 0,
			Up = 1,
			Right = 2,
			Down = 3,
			Left = 4
		};
		static constexpr auto kFacingTags = makeEnumTags<Facing>(
			"Retain",
			"Up",
			"Right",
			"Down",
			"Left"
		);

		int32_t placement = 0;
		bool death_handler_unused = 0;
		int32_t row = 0;
		int32_t battle_type = 0;
		bool unused_display_normal_parameters = true;
		std::vector<BattleCommand> commands;
		bool death_handler = 0;
		int32_t death_event = 1;
		int32_t window_size = 0;
		int32_t transparency = 0;
		bool death_teleport = false;
		int32_t death_teleport_id = 1;
		int32_t death_teleport_x = 0;
		int32_t death_teleport_y = 0;
		int32_t death_teleport_face = 0;
	};

	inline bool operator==(const BattleCommands& l, const BattleCommands& r) {
		return l.placement == r.placement
		&& l.death_handler_unused == r.death_handler_unused
		&& l.row == r.row
		&& l.battle_type == r.battle_type
		&& l.unused_display_normal_parameters == r.unused_display_normal_parameters
		&& l.commands == r.commands
		&& l.death_handler == r.death_handler
		&& l.death_event == r.death_event
		&& l.window_size == r.window_size
		&& l.transparency == r.transparency
		&& l.death_teleport == r.death_teleport
		&& l.death_teleport_id == r.death_teleport_id
		&& l.death_teleport_x == r.death_teleport_x
		&& l.death_teleport_y == r.death_teleport_y
		&& l.death_teleport_face == r.death_teleport_face;
	}

	inline bool operator!=(const BattleCommands& l, const BattleCommands& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::BattleCommands::Placement, true, Manual, Automatic);
LCF_DEFINE_ENUM_TRAITS(RPG::BattleCommands::RowShown, true, Front, Back);
LCF_DEFINE_ENUM_TRAITS(RPG::BattleCommands::BattleType, true, Traditional, Gauge);
LCF_DEFINE_ENUM_TRAITS(RPG::BattleCommands::WindowSize, true, Large, Small);
LCF_DEFINE_ENUM_TRAITS(RPG::BattleCommands::Transparency, true, Opaque, Transparent);
LCF_DEFINE_ENUM_TRAITS(RPG::BattleCommands::Facing, true, Retain, Left);

#endif
