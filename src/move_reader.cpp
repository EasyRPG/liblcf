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
#include "move_reader.h"
#include "reader.h"

////////////////////////////////////////////////////////////
/// Read Move Command
////////////////////////////////////////////////////////////
RPG::MoveCommand Move_Reader::ReadMoveCommand(Reader& stream) {
	RPG::MoveCommand move_command;
	ReadMoveCommand(move_command, stream);
	return move_command;
}

void Move_Reader::ReadMoveCommand(RPG::MoveCommand& ref, Reader& stream) {
	ref.command_id = stream.ReadInt();
	switch (ref.command_id) {
		case RPG::MoveCommand::Code::switch_on:
			ref.parameter_a = stream.ReadInt();
			break;
		case RPG::MoveCommand::Code::switch_off:
			ref.parameter_a = stream.ReadInt();
			break;
		case RPG::MoveCommand::Code::change_graphic:
			ref.parameter_string = stream.ReadString(stream.ReadInt());
			ref.parameter_a = stream.ReadInt();
			break;
		case RPG::MoveCommand::Code::play_sound_effect:
			ref.parameter_string = stream.ReadString(stream.ReadInt());
			ref.parameter_a = stream.ReadInt();
			ref.parameter_b = stream.ReadInt();
			ref.parameter_c = stream.ReadInt();
			break;
	}
}

void Move_Reader::ReadMoveCommands(std::vector<RPG::MoveCommand>& ref, Reader& stream, const Reader::Chunk& chunk_info) {
	unsigned long startpos = stream.Tell();
	unsigned long endpos = startpos + chunk_info.length;
	do {
		ref.push_back(ReadMoveCommand(stream));
	} while (stream.Tell() != endpos);
}

