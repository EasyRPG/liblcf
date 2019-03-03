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

template <>
Field<RPG::CommonEvent> const* Struct<RPG::CommonEvent>::fields[] = {
	new TypedField<RPG::CommonEvent, std::string>(
		&RPG::CommonEvent::name,
		LDB_Reader::ChunkCommonEvent::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::CommonEvent, int32_t>(
		&RPG::CommonEvent::trigger,
		LDB_Reader::ChunkCommonEvent::trigger,
		"trigger",
		0,
		0
	),
	new TypedField<RPG::CommonEvent, bool>(
		&RPG::CommonEvent::switch_flag,
		LDB_Reader::ChunkCommonEvent::switch_flag,
		"switch_flag",
		0,
		0
	),
	new TypedField<RPG::CommonEvent, int32_t>(
		&RPG::CommonEvent::switch_id,
		LDB_Reader::ChunkCommonEvent::switch_id,
		"switch_id",
		0,
		0
	),
	new SizeField<RPG::CommonEvent, RPG::EventCommand>(
		&RPG::CommonEvent::event_commands,
		LDB_Reader::ChunkCommonEvent::event_commands_size,
		1,
		0
	),
	new TypedField<RPG::CommonEvent, std::vector<RPG::EventCommand>>(
		&RPG::CommonEvent::event_commands,
		LDB_Reader::ChunkCommonEvent::event_commands,
		"event_commands",
		1,
		0
	),
	NULL
};

template class Struct<RPG::CommonEvent>;
