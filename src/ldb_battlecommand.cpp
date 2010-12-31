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
#include "reader.h"

////////////////////////////////////////////////////////////
/// Read BattleCommands
////////////////////////////////////////////////////////////
RPG::BattleCommands LDB_Reader::ReadBattleCommands(Reader& stream) {
	RPG::BattleCommands battlecommands;
	Reader::Chunk chunk_info;

	while (!stream.Eof()) {
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID == ChunkData::END) {
			break;
		} else {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkBattleCommands::command:
			for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
				battlecommands.commands.push_back(ReadBattleCommand(stream));
			}
			break;
		case ChunkBattleCommands::placement:
			battlecommands.placement = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::row:
			battlecommands.row = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::battle_type:
			battlecommands.battle_type = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::death_handler1:
			battlecommands.death_handler1 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::unknown1:
			battlecommands.unknown1 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::death_handler2:
			battlecommands.death_handler2 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::death_event:
			battlecommands.death_event = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::window_size:
			battlecommands.window_size = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::transparency:
			battlecommands.transparency = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::teleport:
			battlecommands.teleport = stream.ReadBool();
			break;
		case ChunkBattleCommands::teleport_id:
			battlecommands.teleport_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::teleport_x:
			battlecommands.teleport_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::teleport_y:
			battlecommands.teleport_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkBattleCommands::teleport_face:
			battlecommands.teleport_face = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
	return battlecommands;
}

////////////////////////////////////////////////////////////
/// Read BattleCommand
////////////////////////////////////////////////////////////
RPG::BattleCommand LDB_Reader::ReadBattleCommand(Reader& stream) {
	RPG::BattleCommand battle_command;
	battle_command.ID = stream.Read32(Reader::CompressedInteger);

	Reader::Chunk chunk_info;
	while (!stream.Eof()) {
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID == ChunkData::END) {
			break;
		} else {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkBattleCommand::name:
			battle_command.name = stream.ReadString(chunk_info.length);
			break;
		case ChunkBattleCommand::type:
			battle_command.type = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
	return battle_command;
}