/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_EVENTPAGE_H
#define LCF_RPG_EVENTPAGE_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_eventcommand.h"
#include "rpg_eventpagecondition.h"
#include "rpg_moveroute.h"

/**
 * RPG::EventPage class.
 */
namespace RPG {
	class EventPage {
	public:
		enum Direction {
			Direction_up = 0,
			Direction_right = 1,
			Direction_down = 2,
			Direction_left = 3
		};
		static constexpr auto kDirectionTags = makeEnumTags<Direction>(
			"up",
			"right",
			"down",
			"left"
		);
		enum Frame {
			Frame_left = 0,
			Frame_middle = 1,
			Frame_right = 2,
			Frame_middle2 = 3
		};
		static constexpr auto kFrameTags = makeEnumTags<Frame>(
			"left",
			"middle",
			"right",
			"middle2"
		);
		enum MoveType {
			MoveType_stationary = 0,
			MoveType_random = 1,
			MoveType_vertical = 2,
			MoveType_horizontal = 3,
			MoveType_toward = 4,
			MoveType_away = 5,
			MoveType_custom = 6
		};
		static constexpr auto kMoveTypeTags = makeEnumTags<MoveType>(
			"stationary",
			"random",
			"vertical",
			"horizontal",
			"toward",
			"away",
			"custom"
		);
		enum Trigger {
			Trigger_action = 0,
			Trigger_touched = 1,
			Trigger_collision = 2,
			Trigger_auto_start = 3,
			Trigger_parallel = 4
		};
		static constexpr auto kTriggerTags = makeEnumTags<Trigger>(
			"action",
			"touched",
			"collision",
			"auto_start",
			"parallel"
		);
		enum Layers {
			Layers_below = 0,
			Layers_same = 1,
			Layers_above = 2
		};
		static constexpr auto kLayersTags = makeEnumTags<Layers>(
			"below",
			"same",
			"above"
		);
		enum AnimType {
			AnimType_non_continuous = 0,
			AnimType_continuous = 1,
			AnimType_fixed_non_continuous = 2,
			AnimType_fixed_continuous = 3,
			AnimType_fixed_graphic = 4,
			AnimType_spin = 5,
			AnimType_step_frame_fix = 6
		};
		static constexpr auto kAnimTypeTags = makeEnumTags<AnimType>(
			"non_continuous",
			"continuous",
			"fixed_non_continuous",
			"fixed_continuous",
			"fixed_graphic",
			"spin",
			"step_frame_fix"
		);
		enum MoveSpeed {
			MoveSpeed_eighth = 1,
			MoveSpeed_quarter = 2,
			MoveSpeed_half = 3,
			MoveSpeed_normal = 4,
			MoveSpeed_double = 5,
			MoveSpeed_fourfold = 6
		};

		int ID = 0;
		EventPageCondition condition;
		std::string character_name;
		int32_t character_index = 0;
		int32_t character_direction = 2;
		int32_t character_pattern = 1;
		bool translucent = false;
		int32_t move_type = 1;
		int32_t move_frequency = 3;
		int32_t trigger = 0;
		int32_t layer = 0;
		bool overlap_forbidden = false;
		int32_t animation_type = 0;
		int32_t move_speed = 3;
		MoveRoute move_route;
		std::vector<EventCommand> event_commands;
	};

	inline bool operator==(const EventPage& l, const EventPage& r) {
		return l.condition == r.condition
		&& l.character_name == r.character_name
		&& l.character_index == r.character_index
		&& l.character_direction == r.character_direction
		&& l.character_pattern == r.character_pattern
		&& l.translucent == r.translucent
		&& l.move_type == r.move_type
		&& l.move_frequency == r.move_frequency
		&& l.trigger == r.trigger
		&& l.layer == r.layer
		&& l.overlap_forbidden == r.overlap_forbidden
		&& l.animation_type == r.animation_type
		&& l.move_speed == r.move_speed
		&& l.move_route == r.move_route
		&& l.event_commands == r.event_commands;
	}

	inline bool operator!=(const EventPage& l, const EventPage& r) {
		return !(l == r);
	}
}

#endif
