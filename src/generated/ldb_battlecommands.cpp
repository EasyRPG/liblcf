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

// Read BattleCommands.

template <>
char const* const Struct<RPG::BattleCommands>::name = "BattleCommands";
static TypedField<RPG::BattleCommands, int32_t> static_placement(
	&RPG::BattleCommands::placement,
	LDB_Reader::ChunkBattleCommands::placement,
	"placement",
	0,
	0
);
static TypedField<RPG::BattleCommands, bool> static_death_handler_unused(
	&RPG::BattleCommands::death_handler_unused,
	LDB_Reader::ChunkBattleCommands::death_handler_unused,
	"death_handler_unused",
	0,
	1
);
static TypedField<RPG::BattleCommands, int32_t> static_row(
	&RPG::BattleCommands::row,
	LDB_Reader::ChunkBattleCommands::row,
	"row",
	0,
	0
);
static TypedField<RPG::BattleCommands, int32_t> static_battle_type(
	&RPG::BattleCommands::battle_type,
	LDB_Reader::ChunkBattleCommands::battle_type,
	"battle_type",
	0,
	0
);
static TypedField<RPG::BattleCommands, bool> static_unused_display_normal_parameters(
	&RPG::BattleCommands::unused_display_normal_parameters,
	LDB_Reader::ChunkBattleCommands::unused_display_normal_parameters,
	"unused_display_normal_parameters",
	0,
	0
);
static TypedField<RPG::BattleCommands, std::vector<RPG::BattleCommand>> static_commands(
	&RPG::BattleCommands::commands,
	LDB_Reader::ChunkBattleCommands::commands,
	"commands",
	1,
	0
);
static TypedField<RPG::BattleCommands, bool> static_death_handler(
	&RPG::BattleCommands::death_handler,
	LDB_Reader::ChunkBattleCommands::death_handler,
	"death_handler",
	0,
	1
);
static TypedField<RPG::BattleCommands, int32_t> static_death_event(
	&RPG::BattleCommands::death_event,
	LDB_Reader::ChunkBattleCommands::death_event,
	"death_event",
	0,
	0
);
static TypedField<RPG::BattleCommands, int32_t> static_window_size(
	&RPG::BattleCommands::window_size,
	LDB_Reader::ChunkBattleCommands::window_size,
	"window_size",
	0,
	0
);
static TypedField<RPG::BattleCommands, int32_t> static_transparency(
	&RPG::BattleCommands::transparency,
	LDB_Reader::ChunkBattleCommands::transparency,
	"transparency",
	0,
	0
);
static TypedField<RPG::BattleCommands, bool> static_death_teleport(
	&RPG::BattleCommands::death_teleport,
	LDB_Reader::ChunkBattleCommands::death_teleport,
	"death_teleport",
	0,
	0
);
static TypedField<RPG::BattleCommands, int32_t> static_death_teleport_id(
	&RPG::BattleCommands::death_teleport_id,
	LDB_Reader::ChunkBattleCommands::death_teleport_id,
	"death_teleport_id",
	0,
	0
);
static TypedField<RPG::BattleCommands, int32_t> static_death_teleport_x(
	&RPG::BattleCommands::death_teleport_x,
	LDB_Reader::ChunkBattleCommands::death_teleport_x,
	"death_teleport_x",
	0,
	0
);
static TypedField<RPG::BattleCommands, int32_t> static_death_teleport_y(
	&RPG::BattleCommands::death_teleport_y,
	LDB_Reader::ChunkBattleCommands::death_teleport_y,
	"death_teleport_y",
	0,
	0
);
static TypedField<RPG::BattleCommands, int32_t> static_death_teleport_face(
	&RPG::BattleCommands::death_teleport_face,
	LDB_Reader::ChunkBattleCommands::death_teleport_face,
	"death_teleport_face",
	0,
	0
);


template <>
Field<RPG::BattleCommands> const* Struct<RPG::BattleCommands>::fields[] = {
	&static_placement,
	&static_death_handler_unused,
	&static_row,
	&static_battle_type,
	&static_unused_display_normal_parameters,
	&static_commands,
	&static_death_handler,
	&static_death_event,
	&static_window_size,
	&static_transparency,
	&static_death_teleport,
	&static_death_teleport_id,
	&static_death_teleport_x,
	&static_death_teleport_y,
	&static_death_teleport_face,
	NULL
};

template class Struct<RPG::BattleCommands>;
