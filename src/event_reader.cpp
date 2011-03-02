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
#include "reader.h"

////////////////////////////////////////////////////////////
/// Read EventCommand
////////////////////////////////////////////////////////////
RPG::EventCommand Event_Reader::ReadEventCommand(Reader& stream) {
	RPG::EventCommand event_command;
	ReadEventCommand(event_command, stream);
	return event_command;
}

void Event_Reader::ReadEventCommand(RPG::EventCommand& event_command, Reader& stream) {
	event_command.code = stream.ReadInt();
	if (event_command.code != 0) {
		event_command.indent = stream.ReadInt();
		event_command.string = stream.ReadString(stream.ReadInt());
		for (int i = stream.ReadInt(); i > 0; i--) {
			event_command.parameters.push_back(stream.ReadInt());
		}
	}
}

void Event_Reader::ReadEventCommands(std::vector<RPG::EventCommand>& event_commands, Reader& stream) {
	// Event Commands is a special array
	// Has no size information. Is terminated by 4 times 0x00.
	for (;;) {
		char ch = stream.Read8();
		if (ch == 0) {
			stream.Seek(3, Reader::FromCurrent);
			break;
		}
		stream.Ungetch(ch);
		event_commands.push_back(Event_Reader::ReadEventCommand(stream));
	}
}

