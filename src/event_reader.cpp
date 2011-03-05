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
#include "event_reader.h"
#include "reader_lcf.h"
#include "writer_lcf.h"
#include "writer_xml.h"

////////////////////////////////////////////////////////////
/// Read EventCommand
////////////////////////////////////////////////////////////
RPG::EventCommand Event_Reader::ReadEventCommand(LcfReader& stream) {
	RPG::EventCommand event_command;
	ReadEventCommand(event_command, stream);
	return event_command;
}

void Event_Reader::ReadEventCommand(RPG::EventCommand& event_command, LcfReader& stream) {
	event_command.code = stream.ReadInt();
	if (event_command.code != 0) {
		event_command.indent = stream.ReadInt();
		event_command.string = stream.ReadString(stream.ReadInt());
		for (int i = stream.ReadInt(); i > 0; i--) {
			event_command.parameters.push_back(stream.ReadInt());
		}
	}
}

void Event_Reader::WriteEventCommand(const RPG::EventCommand& event_command, LcfWriter& stream) {
	stream.WriteInt(event_command.code);
	stream.WriteInt(event_command.indent);
	stream.WriteInt(event_command.string.size());
	stream.WriteString(event_command.string);
	int count = event_command.parameters.size();
	stream.WriteInt(count);
	for (int i = 0; i < count; i++)
		stream.WriteInt(event_command.parameters[i]);
}

int Event_Reader::EventCommandSize(const RPG::EventCommand& event_command, LcfWriter& stream) {
	int result = 0;
	result += LcfReader::IntSize(event_command.code);
	result += LcfReader::IntSize(event_command.indent);
	result += LcfReader::IntSize(event_command.string.size());
	result += stream.Decode(event_command.string).size();
	int count = event_command.parameters.size();
	result += LcfReader::IntSize(count);
	for (int i = 0; i < count; i++)
		result += LcfReader::IntSize(event_command.parameters[i]);
	return result;
}

void Event_Reader::WriteEventCommand(const RPG::EventCommand& event_command, XmlWriter& stream) {
	stream.BeginElement("EventCommand");
	stream.WriteNode<int>("code", event_command.code);
	stream.WriteNode<int>("indent", event_command.indent);
	stream.WriteNode<std::string>("string", event_command.string);
	stream.WriteNode<std::vector<int> >("parameters", event_command.parameters);
	stream.EndElement("EventCommand");
}

void Event_Reader::ReadEventCommands(std::vector<RPG::EventCommand>& event_commands, LcfReader& stream, uint32_t length) {
	// Event Commands is a special array
	// Has no size information. Is terminated by 4 times 0x00.
	unsigned long startpos = stream.Tell();
	unsigned long endpos = startpos + length;
	for (;;) {
		char ch = stream.Read8();
		if (ch == 0) {
			stream.Seek(3, LcfReader::FromCurrent);
			break;
		}
		stream.Ungetch(ch);
		event_commands.push_back(Event_Reader::ReadEventCommand(stream));
	}
	assert(stream.Tell() == endpos);
}

void Event_Reader::WriteEventCommands(const std::vector<RPG::EventCommand>& event_commands, LcfWriter& stream) {
	int count = event_commands.size();
	for (int i = 0; i < count; i++)
		WriteEventCommand(event_commands[i], stream);
	for (int i = 0; i < 4; i++)
		stream.WriteInt(0);
}

int Event_Reader::EventCommandsSize(const std::vector<RPG::EventCommand>& event_commands, LcfWriter& stream) {
	int result = 0;
	int count = event_commands.size();
	for (int i = 0; i < count; i++)
		result += EventCommandSize(event_commands[i], stream);
	result += 4;
	return result;
}

void Event_Reader::WriteEventCommands(const std::vector<RPG::EventCommand>& event_commands, XmlWriter& stream) {
	std::vector<RPG::EventCommand>::const_iterator it;
	for (it = event_commands.begin(); it != event_commands.end(); it++)
		WriteEventCommand(*it, stream);
}
