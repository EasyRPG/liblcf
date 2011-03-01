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
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader.h"

////////////////////////////////////////////////////////////
/// Read Move Command
////////////////////////////////////////////////////////////
RPG::MoveCommand LMU_Reader::ReadMoveCommand(Reader& stream) {
	RPG::MoveCommand movecommand;

	movecommand.command_id = stream.ReadInt();
	switch (movecommand.command_id) {
	case ChunkMoveCommand::switch_on:
		movecommand.parameter_a = stream.ReadInt();
		break;
	case ChunkMoveCommand::switch_off:
		movecommand.parameter_a = stream.ReadInt();
		break;
	case ChunkMoveCommand::change_graphic:
		movecommand.parameter_string = stream.ReadString(stream.ReadInt());
		movecommand.parameter_a = stream.ReadInt();
		break;
	case ChunkMoveCommand::play_sound:
		movecommand.parameter_string = stream.ReadString(stream.ReadInt());
		movecommand.parameter_a = stream.ReadInt();
		movecommand.parameter_b = stream.ReadInt();
		movecommand.parameter_c = stream.ReadInt();
		break;
	}
	return movecommand;
}
