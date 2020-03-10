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

// Read MoveRoute.

template <>
char const* const Struct<RPG::MoveRoute>::name = "MoveRoute";
static SizeField<RPG::MoveRoute, RPG::MoveCommand> static_size_move_commands(
	&RPG::MoveRoute::move_commands,
	LMU_Reader::ChunkMoveRoute::move_commands_size,
	0,
	0
);
static TypedField<RPG::MoveRoute, std::vector<RPG::MoveCommand>> static_move_commands(
	&RPG::MoveRoute::move_commands,
	LMU_Reader::ChunkMoveRoute::move_commands,
	"move_commands",
	1,
	0
);
static TypedField<RPG::MoveRoute, bool> static_repeat(
	&RPG::MoveRoute::repeat,
	LMU_Reader::ChunkMoveRoute::repeat,
	"repeat",
	0,
	0
);
static TypedField<RPG::MoveRoute, bool> static_skippable(
	&RPG::MoveRoute::skippable,
	LMU_Reader::ChunkMoveRoute::skippable,
	"skippable",
	0,
	0
);


template <>
Field<RPG::MoveRoute> const* Struct<RPG::MoveRoute>::fields[] = {
	&static_size_move_commands,
	&static_move_commands,
	&static_repeat,
	&static_skippable,
	NULL
};

template class Struct<RPG::MoveRoute>;
