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

template <>
Field<RPG::BattleCommands> const* Struct<RPG::BattleCommands>::fields[] = {
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::placement,
		LDB_Reader::ChunkBattleCommands::placement,
		"placement",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::death_handler1,
		LDB_Reader::ChunkBattleCommands::death_handler1,
		"death_handler1",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::row,
		LDB_Reader::ChunkBattleCommands::row,
		"row",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::battle_type,
		LDB_Reader::ChunkBattleCommands::battle_type,
		"battle_type",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, bool>(
		&RPG::BattleCommands::unused_display_normal_parameters,
		LDB_Reader::ChunkBattleCommands::unused_display_normal_parameters,
		"unused_display_normal_parameters",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, std::vector<RPG::BattleCommand>>(
		&RPG::BattleCommands::commands,
		LDB_Reader::ChunkBattleCommands::commands,
		"commands",
		1,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::death_handler2,
		LDB_Reader::ChunkBattleCommands::death_handler2,
		"death_handler2",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::death_event,
		LDB_Reader::ChunkBattleCommands::death_event,
		"death_event",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::window_size,
		LDB_Reader::ChunkBattleCommands::window_size,
		"window_size",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::transparency,
		LDB_Reader::ChunkBattleCommands::transparency,
		"transparency",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, bool>(
		&RPG::BattleCommands::teleport,
		LDB_Reader::ChunkBattleCommands::teleport,
		"teleport",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::teleport_id,
		LDB_Reader::ChunkBattleCommands::teleport_id,
		"teleport_id",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::teleport_x,
		LDB_Reader::ChunkBattleCommands::teleport_x,
		"teleport_x",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::teleport_y,
		LDB_Reader::ChunkBattleCommands::teleport_y,
		"teleport_y",
		0,
		0
	),
	new TypedField<RPG::BattleCommands, int32_t>(
		&RPG::BattleCommands::teleport_face,
		LDB_Reader::ChunkBattleCommands::teleport_face,
		"teleport_face",
		0,
		0
	),
	NULL
};

template class Struct<RPG::BattleCommands>;
