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
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Move Route
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::MoveRoute>::ReadID(RPG::MoveRoute& obj, Reader& stream) {
	IDReader<RPG::MoveRoute, NoID>::ReadID(obj, stream);
}

template <>
const Field<RPG::MoveRoute>* Struct<RPG::MoveRoute>::fields[] = {
	new TypedField<RPG::MoveRoute, bool>	(&RPG::MoveRoute::repeat,		LMU_Reader::ChunkMoveRoute::repeat,				"repeat"				),
	new TypedField<RPG::MoveRoute, bool>	(&RPG::MoveRoute::skippable,	LMU_Reader::ChunkMoveRoute::skippable,			"skippable"				),
	new TypedField<RPG::MoveRoute, int>		(NULL,							LMU_Reader::ChunkMoveRoute::move_commands_size,	"move_commands_size"	),
	new TypedField<RPG::MoveRoute, std::vector<RPG::MoveCommand> >(&RPG::MoveRoute::move_commands, LMU_Reader::ChunkMoveRoute::move_commands, "move_commands"),
	NULL
};

