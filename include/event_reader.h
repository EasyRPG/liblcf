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

#ifndef _EVENT_READER_H_
#define _EVENT_READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader_lcf.h"
#include "writer_lcf.h"
#include "writer_xml.h"
#include "rpg_eventcommand.h"

////////////////////////////////////////////////////////////
/// Event Reader namespace
////////////////////////////////////////////////////////////
namespace Event_Reader {
	RPG::EventCommand ReadEventCommand(LcfReader& stream);
	void ReadEventCommand(RPG::EventCommand& command, LcfReader& stream);
	void WriteEventCommand(const RPG::EventCommand& event_command, LcfWriter& stream);
	int EventCommandSize(const RPG::EventCommand& event_command, LcfWriter& stream);
	void WriteEventCommand(const RPG::EventCommand& event_command, XmlWriter& stream);

	void ReadEventCommands(std::vector<RPG::EventCommand>& commands, LcfReader& stream, uint32_t length);
	void WriteEventCommands(const std::vector<RPG::EventCommand>& event_commands, LcfWriter& stream);
	int EventCommandsSize(const std::vector<RPG::EventCommand>& event_commands, LcfWriter& stream);
	void WriteEventCommands(const std::vector<RPG::EventCommand>& event_commands, XmlWriter& stream);
}

#endif
