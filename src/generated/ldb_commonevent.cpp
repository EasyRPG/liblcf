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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct_impl.h"

// Read CommonEvent.

template <>
char const* const Struct<RPG::CommonEvent>::name = "CommonEvent";
static TypedField<RPG::CommonEvent, std::string> static_name(
	&RPG::CommonEvent::name,
	LDB_Reader::ChunkCommonEvent::name,
	"name",
	0,
	0
);
static TypedField<RPG::CommonEvent, int32_t> static_trigger(
	&RPG::CommonEvent::trigger,
	LDB_Reader::ChunkCommonEvent::trigger,
	"trigger",
	0,
	0
);
static TypedField<RPG::CommonEvent, bool> static_switch_flag(
	&RPG::CommonEvent::switch_flag,
	LDB_Reader::ChunkCommonEvent::switch_flag,
	"switch_flag",
	0,
	0
);
static TypedField<RPG::CommonEvent, int32_t> static_switch_id(
	&RPG::CommonEvent::switch_id,
	LDB_Reader::ChunkCommonEvent::switch_id,
	"switch_id",
	0,
	0
);
static SizeField<RPG::CommonEvent, RPG::EventCommand> static_size_event_commands(
	&RPG::CommonEvent::event_commands,
	LDB_Reader::ChunkCommonEvent::event_commands_size,
	1,
	0
);
static TypedField<RPG::CommonEvent, std::vector<RPG::EventCommand>> static_event_commands(
	&RPG::CommonEvent::event_commands,
	LDB_Reader::ChunkCommonEvent::event_commands,
	"event_commands",
	1,
	0
);


template <>
Field<RPG::CommonEvent> const* Struct<RPG::CommonEvent>::fields[] = {
	&static_name,
	&static_trigger,
	&static_switch_flag,
	&static_switch_id,
	&static_size_event_commands,
	&static_event_commands,
	NULL
};

template class Struct<RPG::CommonEvent>;
