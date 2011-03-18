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
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Event
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Event, WithID)

EASYRPG_STRUCT_NAME(Event)

template <>
const Field<RPG::Event>* Struct<RPG::Event>::fields[] = {
	new TypedField<RPG::Event, std::string>					(&RPG::Event::name,		LMU_Reader::ChunkEvent::name,	"name"	),
	new TypedField<RPG::Event, int>							(&RPG::Event::x,		LMU_Reader::ChunkEvent::x,		"x"		),
	new TypedField<RPG::Event, int>							(&RPG::Event::y,		LMU_Reader::ChunkEvent::y,		"y"		),
	new TypedField<RPG::Event, std::vector<RPG::EventPage> >(&RPG::Event::pages,	LMU_Reader::ChunkEvent::pages,	"pages"	),
	NULL
};
