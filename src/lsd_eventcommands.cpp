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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "rpg_save.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Save Event Commands
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveEventCommands, WithID)

EASYRPG_STRUCT_NAME(SaveEventCommands)

template <>
const Field<RPG::SaveEventCommands>* Struct<RPG::SaveEventCommands>::fields[] = {
	new TypedField<RPG::SaveEventCommands, int>								(&RPG::SaveEventCommands::commands_size,	LSD_Reader::ChunkEventCommands::commands_size,		"commands_size"		),
	new TypedField<RPG::SaveEventCommands, std::vector<RPG::EventCommand> >	(&RPG::SaveEventCommands::commands,			LSD_Reader::ChunkEventCommands::commands,			"commands"			),
	new TypedField<RPG::SaveEventCommands, int>								(&RPG::SaveEventCommands::current_command,	LSD_Reader::ChunkEventCommands::current_command,	"current_command"	),
	new TypedField<RPG::SaveEventCommands, int>								(&RPG::SaveEventCommands::unknown_0c,		LSD_Reader::ChunkEventCommands::unknown_0c,			"unknown_0c"		),
	new TypedField<RPG::SaveEventCommands, int>								(&RPG::SaveEventCommands::unknown_0d,		LSD_Reader::ChunkEventCommands::unknown_0d,			"unknown_0d"		),
	new TypedField<RPG::SaveEventCommands, int>								(&RPG::SaveEventCommands::unknown_15,		LSD_Reader::ChunkEventCommands::unknown_15,			"unknown_15"		),
	new TypedField<RPG::SaveEventCommands, std::vector<uint8_t> >			(&RPG::SaveEventCommands::unknown_16,		LSD_Reader::ChunkEventCommands::unknown_16,			"unknown_16"		),
	NULL
};
