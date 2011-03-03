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
/// Read Saved Events
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::SaveEvents>::ReadID(RPG::SaveEvents& obj, Reader& stream) {
	IDReader<RPG::SaveEvents, NoID>::ReadID(obj, stream);
}

template <>
const Field<RPG::SaveEvents>* Struct<RPG::SaveEvents>::fields[] = {
	new TypedField<RPG::SaveEvents, int>	(&RPG::SaveEvents::events_size,	LSD_Reader::ChunkEvents::events_size,	"events_size"	),
	new TypedField<RPG::SaveEvents, int>	(&RPG::SaveEvents::unknown_16,	LSD_Reader::ChunkEvents::unknown_16,	"unknown_16"	),
	new TypedField<RPG::SaveEvents, int>	(&RPG::SaveEvents::unknown_17,	LSD_Reader::ChunkEvents::unknown_17,	"unknown_17"	),
	new TypedField<RPG::SaveEvents, int>	(&RPG::SaveEvents::unknown_18,	LSD_Reader::ChunkEvents::unknown_18,	"unknown_18"	),
	new TypedField<RPG::SaveEvents, int>	(&RPG::SaveEvents::unknown_1c,	LSD_Reader::ChunkEvents::unknown_1c,	"unknown_1c"	),
	new TypedField<RPG::SaveEvents, int>	(&RPG::SaveEvents::unknown_20,	LSD_Reader::ChunkEvents::unknown_20,	"unknown_20"	),
	new TypedField<RPG::SaveEvents, int>	(&RPG::SaveEvents::unknown_24,	LSD_Reader::ChunkEvents::unknown_24,	"unknown_24"	),
	new TypedField<RPG::SaveEvents, int>	(&RPG::SaveEvents::unknown_25,	LSD_Reader::ChunkEvents::unknown_25,	"unknown_25"	),
	new TypedField<RPG::SaveEvents, std::vector<RPG::SaveEventCommands> >	(&RPG::SaveEvents::events,	LSD_Reader::ChunkEvents::events,	"events"	),
	NULL
};
