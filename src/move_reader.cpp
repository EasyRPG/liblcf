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
#include "reader_lcf.h"

////////////////////////////////////////////////////////////
/// Read Move Command
////////////////////////////////////////////////////////////
RPG::MoveCommand Move_Reader::ReadMoveCommand(LcfReader& stream) {
	RPG::MoveCommand move_command;
	ReadMoveCommand(move_command, stream);
	return move_command;
}

void Move_Reader::ReadMoveCommand(RPG::MoveCommand& ref, LcfReader& stream) {
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

void Move_Reader::WriteMoveCommand(const RPG::MoveCommand& ref, LcfWriter& stream) {
	stream.WriteInt(ref.command_id);
	switch (ref.command_id) {
		case RPG::MoveCommand::Code::switch_on:
			stream.WriteInt(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::switch_off:
			stream.WriteInt(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::change_graphic:
			stream.WriteInt(ref.parameter_string.size());
			stream.WriteString(ref.parameter_string);
			stream.WriteInt(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::play_sound_effect:
			stream.WriteInt(ref.parameter_string.size());
			stream.WriteString(ref.parameter_string);
			stream.WriteInt(ref.parameter_a);
			stream.WriteInt(ref.parameter_b);
			stream.WriteInt(ref.parameter_c);
			break;
	}
}

int Move_Reader::MoveCommandSize(const RPG::MoveCommand& ref, LcfWriter& stream) {
	int result = 0;
	result += LcfReader::IntSize(ref.command_id);
	switch (ref.command_id) {
		case RPG::MoveCommand::Code::switch_on:
			result += LcfReader::IntSize(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::switch_off:
			result += LcfReader::IntSize(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::change_graphic:
			result += LcfReader::IntSize(ref.parameter_string.size());
			result += stream.Decode(ref.parameter_string).size();
			result += LcfReader::IntSize(ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::play_sound_effect:
			result += LcfReader::IntSize(ref.parameter_string.size());
			result += stream.Decode(ref.parameter_string).size();
			result += LcfReader::IntSize(ref.parameter_a);
			result += LcfReader::IntSize(ref.parameter_b);
			result += LcfReader::IntSize(ref.parameter_c);
			break;
	}
	return result;
}

void Move_Reader::WriteMoveCommand(const RPG::MoveCommand& ref, XmlWriter& stream) {
	stream.BeginElement("MoveCommand");
	stream.WriteNode<int>("command_id", ref.command_id);
	switch (ref.command_id) {
		case RPG::MoveCommand::Code::switch_on:
			stream.WriteNode<int>("parameter_a", ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::switch_off:
			stream.WriteNode<int>("parameter_a", ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::change_graphic:
			stream.WriteNode<std::string>("parameter_string", ref.parameter_string);
			stream.WriteNode<int>("parameter_a", ref.parameter_a);
			break;
		case RPG::MoveCommand::Code::play_sound_effect:
			stream.WriteNode<std::string>("parameter_string", ref.parameter_string);
			stream.WriteNode<int>("parameter_a", ref.parameter_a);
			stream.WriteNode<int>("parameter_b", ref.parameter_b);
			stream.WriteNode<int>("parameter_c", ref.parameter_c);
			break;
	}
	stream.EndElement("MoveCommand");
}

void Move_Reader::ReadMoveCommands(std::vector<RPG::MoveCommand>& ref, LcfReader& stream, uint32_t length) {
	unsigned long startpos = stream.Tell();
	unsigned long endpos = startpos + length;
	do {
		ref.push_back(ReadMoveCommand(stream));
	} while (stream.Tell() != endpos);
}

void Move_Reader::WriteMoveCommands(const std::vector<RPG::MoveCommand>& ref, LcfWriter& stream) {
	std::vector<RPG::MoveCommand>::const_iterator it;
	for (it = ref.begin(); it != ref.end(); it++)
		WriteMoveCommand(*it, stream);
}

int Move_Reader::MoveCommandsSize(const std::vector<RPG::MoveCommand>& ref, LcfWriter& stream) {
	int result = 0;
	std::vector<RPG::MoveCommand>::const_iterator it;
	for (it = ref.begin(); it != ref.end(); it++)
		result += MoveCommandSize(*it, stream);
	return result;
}

void Move_Reader::WriteMoveCommands(const std::vector<RPG::MoveCommand>& ref, XmlWriter& stream) {
	std::vector<RPG::MoveCommand>::const_iterator it;
	for (it = ref.begin(); it != ref.end(); it++)
		WriteMoveCommand(*it, stream);
}

