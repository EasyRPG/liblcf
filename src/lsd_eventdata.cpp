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
/// Read Save Event Data
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::SaveEventData>::ReadID(RPG::SaveEventData& obj, Reader& stream) {
	IDReader<RPG::SaveEventData, NoID>::ReadID(obj, stream);
}

template <>
const Field<RPG::SaveEventData>* Struct<RPG::SaveEventData>::fields[] = {
	new TypedField<RPG::SaveEventData, int>	(&RPG::SaveEventData::time_left,	LSD_Reader::ChunkEventData::time_left,	"time_left"		),
	new TypedField<RPG::SaveEventData, int>	(&RPG::SaveEventData::unknown_16,	LSD_Reader::ChunkEventData::unknown_16,	"unknown_16"	),
	new TypedField<RPG::SaveEventData, int>	(&RPG::SaveEventData::unknown_17,	LSD_Reader::ChunkEventData::unknown_17,	"unknown_17"	),
	new TypedField<RPG::SaveEventData, int>	(&RPG::SaveEventData::unknown_20,	LSD_Reader::ChunkEventData::unknown_20,	"unknown_20"	),
	new TypedField<RPG::SaveEventData, std::vector<RPG::SaveEventCommands> >	(&RPG::SaveEventData::commands,	LSD_Reader::ChunkEventData::commands,	"commands"	),
	NULL
};
