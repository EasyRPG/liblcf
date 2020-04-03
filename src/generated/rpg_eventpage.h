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
		enum class Direction {
			Up = 0,
			Right = 1,
			Down = 2,
			Left = 3
		};
		enum class Frame {
			Left = 0,
			Middle = 1,
			Right = 2,
			Middle2 = 3
		};
		enum class MoveType {
			Stationary = 0,
			Random = 1,
			Vertical = 2,
			Horizontal = 3,
			Toward = 4,
			Away = 5,
			Custom = 6
		};
		enum class Trigger {
			Action = 0,
			Touched = 1,
			Collision = 2,
			AutoStart = 3,
			Parallel = 4
		};
		enum class Layers {
			Below = 0,
			Same = 1,
			Above = 2
		};
		enum class AnimType {
			NonContinuous = 0,
			Continuous = 1,
			FixedNonContinuous = 2,
			FixedContinuous = 3,
			FixedGraphic = 4,
			Spin = 5,
			StepFrameFix = 6
		};
		enum class MoveSpeed {
			Eighth = 1,
			Quarter = 2,
			Half = 3,
			Normal = 4,
			Double = 5,
			Fourfold = 6
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

LCF_DEFINE_ENUM_TRAITS(RPG::EventPage::Direction, true, Up, Left);
LCF_DEFINE_ENUM_TRAITS(RPG::EventPage::Frame, true, Left, Middle2);
LCF_DEFINE_ENUM_TRAITS(RPG::EventPage::MoveType, true, Stationary, Custom);
LCF_DEFINE_ENUM_TRAITS(RPG::EventPage::Trigger, true, Action, Parallel);
LCF_DEFINE_ENUM_TRAITS(RPG::EventPage::Layers, true, Below, Above);
LCF_DEFINE_ENUM_TRAITS(RPG::EventPage::AnimType, true, NonContinuous, StepFrameFix);
LCF_DEFINE_ENUM_TRAITS(RPG::EventPage::MoveSpeed, true, Eighth, Fourfold);

LCF_DEFINE_ENUM_TAGS(RPG::EventPage::Direction, (makeEnumTags<RPG::EventPage::Direction>({{
	"Up",
	"Right",
	"Down",
	"Left"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::EventPage::Frame, (makeEnumTags<RPG::EventPage::Frame>({{
	"Left",
	"Middle",
	"Right",
	"Middle2"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::EventPage::MoveType, (makeEnumTags<RPG::EventPage::MoveType>({{
	"Stationary",
	"Random",
	"Vertical",
	"Horizontal",
	"Toward",
	"Away",
	"Custom"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::EventPage::Trigger, (makeEnumTags<RPG::EventPage::Trigger>({{
	"Action",
	"Touched",
	"Collision",
	"AutoStart",
	"Parallel"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::EventPage::Layers, (makeEnumTags<RPG::EventPage::Layers>({{
	"Below",
	"Same",
	"Above"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::EventPage::AnimType, (makeEnumTags<RPG::EventPage::AnimType>({{
	"NonContinuous",
	"Continuous",
	"FixedNonContinuous",
	"FixedContinuous",
	"FixedGraphic",
	"Spin",
	"StepFrameFix"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::EventPage::MoveSpeed, (makeEnumTags<RPG::EventPage::MoveSpeed>({{
	"Eighth",
	"Quarter",
	"Half",
	"Normal",
	"Double",
	"Fourfold"
	}})));


#endif
