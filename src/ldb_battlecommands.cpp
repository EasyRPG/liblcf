/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read BattleCommands
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::BattleCommands>* Struct<RPG::BattleCommands>::ID_reader = new IDReaderT<RPG::BattleCommands, NoID>();

template <>
char const* const Struct<RPG::BattleCommands>::name("BattleCommands");

template <>
const Field<RPG::BattleCommands>* Struct<RPG::BattleCommands>::fields[] = {
	new TypedField<RPG::BattleCommands, std::vector<RPG::BattleCommand> >	(&RPG::BattleCommands::commands,		LDB_Reader::ChunkBattleCommands::commands,			"commands"		),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::placement,		LDB_Reader::ChunkBattleCommands::placement,			"placement"		),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::row,				LDB_Reader::ChunkBattleCommands::row,				"row"			),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::battle_type,		LDB_Reader::ChunkBattleCommands::battle_type,		"battle_type"	),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::death_handler1,	LDB_Reader::ChunkBattleCommands::death_handler1,	"death_handler1"),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::unknown1,		LDB_Reader::ChunkBattleCommands::unknown1,			"unknown1"		),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::death_handler2,	LDB_Reader::ChunkBattleCommands::death_handler2,	"death_handler2"),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::death_event,		LDB_Reader::ChunkBattleCommands::death_event,		"death_event"	),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::window_size,		LDB_Reader::ChunkBattleCommands::window_size,		"window_size"	),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::transparency,	LDB_Reader::ChunkBattleCommands::transparency,		"transparency"	),
	new TypedField<RPG::BattleCommands, bool>								(&RPG::BattleCommands::teleport,		LDB_Reader::ChunkBattleCommands::teleport,			"teleport"		),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::teleport_id,		LDB_Reader::ChunkBattleCommands::teleport_id,		"teleport_id"	),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::teleport_x,		LDB_Reader::ChunkBattleCommands::teleport_x,		"teleport_x"	),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::teleport_y,		LDB_Reader::ChunkBattleCommands::teleport_y,		"teleport_y"	),
	new TypedField<RPG::BattleCommands, int>								(&RPG::BattleCommands::teleport_face,	LDB_Reader::ChunkBattleCommands::teleport_face,		"teleport_face"	),
	NULL
};
