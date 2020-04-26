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

// Headers
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct_impl.h"

// Read EventPage.

template <>
char const* const Struct<RPG::EventPage>::name = "EventPage";
static TypedField<RPG::EventPage, RPG::EventPageCondition> static_condition(
	&RPG::EventPage::condition,
	LMU_Reader::ChunkEventPage::condition,
	"condition",
	1,
	0
);
static TypedField<RPG::EventPage, std::string> static_character_name(
	&RPG::EventPage::character_name,
	LMU_Reader::ChunkEventPage::character_name,
	"character_name",
	0,
	0
);
static TypedField<RPG::EventPage, int32_t> static_character_index(
	&RPG::EventPage::character_index,
	LMU_Reader::ChunkEventPage::character_index,
	"character_index",
	0,
	0
);
static TypedField<RPG::EventPage, int32_t> static_character_direction(
	&RPG::EventPage::character_direction,
	LMU_Reader::ChunkEventPage::character_direction,
	"character_direction",
	1,
	0
);
static TypedField<RPG::EventPage, int32_t> static_character_pattern(
	&RPG::EventPage::character_pattern,
	LMU_Reader::ChunkEventPage::character_pattern,
	"character_pattern",
	0,
	0
);
static TypedField<RPG::EventPage, bool> static_translucent(
	&RPG::EventPage::translucent,
	LMU_Reader::ChunkEventPage::translucent,
	"translucent",
	1,
	0
);
static TypedField<RPG::EventPage, int32_t> static_move_type(
	&RPG::EventPage::move_type,
	LMU_Reader::ChunkEventPage::move_type,
	"move_type",
	1,
	0
);
static TypedField<RPG::EventPage, int32_t> static_move_frequency(
	&RPG::EventPage::move_frequency,
	LMU_Reader::ChunkEventPage::move_frequency,
	"move_frequency",
	0,
	0
);
static TypedField<RPG::EventPage, int32_t> static_trigger(
	&RPG::EventPage::trigger,
	LMU_Reader::ChunkEventPage::trigger,
	"trigger",
	1,
	0
);
static TypedField<RPG::EventPage, int32_t> static_layer(
	&RPG::EventPage::layer,
	LMU_Reader::ChunkEventPage::layer,
	"layer",
	1,
	0
);
static TypedField<RPG::EventPage, bool> static_overlap_forbidden(
	&RPG::EventPage::overlap_forbidden,
	LMU_Reader::ChunkEventPage::overlap_forbidden,
	"overlap_forbidden",
	1,
	0
);
static TypedField<RPG::EventPage, int32_t> static_animation_type(
	&RPG::EventPage::animation_type,
	LMU_Reader::ChunkEventPage::animation_type,
	"animation_type",
	1,
	0
);
static TypedField<RPG::EventPage, int32_t> static_move_speed(
	&RPG::EventPage::move_speed,
	LMU_Reader::ChunkEventPage::move_speed,
	"move_speed",
	0,
	0
);
static TypedField<RPG::EventPage, RPG::MoveRoute> static_move_route(
	&RPG::EventPage::move_route,
	LMU_Reader::ChunkEventPage::move_route,
	"move_route",
	1,
	0
);
static SizeField<RPG::EventPage, RPG::EventCommand> static_size_event_commands(
	&RPG::EventPage::event_commands,
	LMU_Reader::ChunkEventPage::event_commands_size,
	1,
	0
);
static TypedField<RPG::EventPage, std::vector<RPG::EventCommand>> static_event_commands(
	&RPG::EventPage::event_commands,
	LMU_Reader::ChunkEventPage::event_commands,
	"event_commands",
	1,
	0
);


template <>
Field<RPG::EventPage> const* Struct<RPG::EventPage>::fields[] = {
	&static_condition,
	&static_character_name,
	&static_character_index,
	&static_character_direction,
	&static_character_pattern,
	&static_translucent,
	&static_move_type,
	&static_move_frequency,
	&static_trigger,
	&static_layer,
	&static_overlap_forbidden,
	&static_animation_type,
	&static_move_speed,
	&static_move_route,
	&static_size_event_commands,
	&static_event_commands,
	NULL
};

template class Struct<RPG::EventPage>;
