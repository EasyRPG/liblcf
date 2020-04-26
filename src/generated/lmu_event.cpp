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

// Read Event.

template <>
char const* const Struct<RPG::Event>::name = "Event";
static TypedField<RPG::Event, std::string> static_name(
	&RPG::Event::name,
	LMU_Reader::ChunkEvent::name,
	"name",
	0,
	0
);
static TypedField<RPG::Event, int32_t> static_x(
	&RPG::Event::x,
	LMU_Reader::ChunkEvent::x,
	"x",
	0,
	0
);
static TypedField<RPG::Event, int32_t> static_y(
	&RPG::Event::y,
	LMU_Reader::ChunkEvent::y,
	"y",
	0,
	0
);
static TypedField<RPG::Event, std::vector<RPG::EventPage>> static_pages(
	&RPG::Event::pages,
	LMU_Reader::ChunkEvent::pages,
	"pages",
	1,
	0
);


template <>
Field<RPG::Event> const* Struct<RPG::Event>::fields[] = {
	&static_name,
	&static_x,
	&static_y,
	&static_pages,
	NULL
};

template class Struct<RPG::Event>;
