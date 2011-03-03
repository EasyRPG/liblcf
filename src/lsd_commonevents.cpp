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
/// Read Save Common Event
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::SaveCommonEvent>::ReadID(RPG::SaveCommonEvent& obj, Reader& stream) {
	IDReader<RPG::SaveCommonEvent, WithID>::ReadID(obj, stream);
}

template <>
const Field<RPG::SaveCommonEvent>* Struct<RPG::SaveCommonEvent>::fields[] = {
	new TypedField<RPG::SaveCommonEvent, RPG::SaveEventData>	(&RPG::SaveCommonEvent::event_data,	LSD_Reader::ChunkCommonEvent::event_data,	"event_data"	),
	NULL
};
