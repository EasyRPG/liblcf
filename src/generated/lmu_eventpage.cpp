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

// Headers
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct_impl.h"

// Read EventPage.

template <>
char const* const Struct<RPG::EventPage>::name = "EventPage";

template <>
Field<RPG::EventPage> const* Struct<RPG::EventPage>::fields[] = {
	new TypedField<RPG::EventPage, RPG::EventPageCondition>(
		&RPG::EventPage::condition,
		LMU_Reader::ChunkEventPage::condition,
		"condition",
		1,
		0
	),
	new TypedField<RPG::EventPage, std::string>(
		&RPG::EventPage::character_name,
		LMU_Reader::ChunkEventPage::character_name,
		"character_name",
		0,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::character_index,
		LMU_Reader::ChunkEventPage::character_index,
		"character_index",
		0,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::character_direction,
		LMU_Reader::ChunkEventPage::character_direction,
		"character_direction",
		1,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::character_pattern,
		LMU_Reader::ChunkEventPage::character_pattern,
		"character_pattern",
		0,
		0
	),
	new TypedField<RPG::EventPage, bool>(
		&RPG::EventPage::translucent,
		LMU_Reader::ChunkEventPage::translucent,
		"translucent",
		1,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::move_type,
		LMU_Reader::ChunkEventPage::move_type,
		"move_type",
		1,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::move_frequency,
		LMU_Reader::ChunkEventPage::move_frequency,
		"move_frequency",
		0,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::trigger,
		LMU_Reader::ChunkEventPage::trigger,
		"trigger",
		1,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::layer,
		LMU_Reader::ChunkEventPage::layer,
		"layer",
		1,
		0
	),
	new TypedField<RPG::EventPage, bool>(
		&RPG::EventPage::overlap_forbidden,
		LMU_Reader::ChunkEventPage::overlap_forbidden,
		"overlap_forbidden",
		1,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::animation_type,
		LMU_Reader::ChunkEventPage::animation_type,
		"animation_type",
		1,
		0
	),
	new TypedField<RPG::EventPage, int32_t>(
		&RPG::EventPage::move_speed,
		LMU_Reader::ChunkEventPage::move_speed,
		"move_speed",
		0,
		0
	),
	new TypedField<RPG::EventPage, RPG::MoveRoute>(
		&RPG::EventPage::move_route,
		LMU_Reader::ChunkEventPage::move_route,
		"move_route",
		1,
		0
	),
	new SizeField<RPG::EventPage, RPG::EventCommand>(
		&RPG::EventPage::event_commands,
		LMU_Reader::ChunkEventPage::event_commands_size,
		1,
		0
	),
	new TypedField<RPG::EventPage, std::vector<RPG::EventCommand>>(
		&RPG::EventPage::event_commands,
		LMU_Reader::ChunkEventPage::event_commands,
		"event_commands",
		1,
		0
	),
	NULL
};

template class Struct<RPG::EventPage>;
