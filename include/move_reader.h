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

#ifndef _MOVE_READER_H_
#define _MOVE_READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader_lcf.h"
#include "writer_lcf.h"
#include "writer_xml.h"
#include "rpg_movecommand.h"

////////////////////////////////////////////////////////////
/// Move Reader namespace
////////////////////////////////////////////////////////////
namespace Move_Reader {
	RPG::MoveCommand ReadMoveCommand(LcfReader& stream);
	void ReadMoveCommand(RPG::MoveCommand& command, LcfReader& stream);
	void WriteMoveCommand(const RPG::MoveCommand& command, LcfWriter& stream);
	int MoveCommandSize(const RPG::MoveCommand& command, LcfWriter& stream);
	void WriteMoveCommand(const RPG::MoveCommand& command, XmlWriter& stream);

	void ReadMoveCommands(std::vector<RPG::MoveCommand>& commands, LcfReader& stream, uint32_t length);
	void WriteMoveCommands(const std::vector<RPG::MoveCommand>& commands, LcfWriter& stream);
	int MoveCommandsSize(const std::vector<RPG::MoveCommand>& commands, LcfWriter& stream);
	void WriteMoveCommands(const std::vector<RPG::MoveCommand>& commands, XmlWriter& stream);
}

#endif
