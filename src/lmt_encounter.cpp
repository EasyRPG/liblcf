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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Encounter
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::Encounter>* Struct<RPG::Encounter>::ID_reader = new IDReaderT<RPG::Encounter, WithID>();

template <>
char const* const Struct<RPG::Encounter>::name("Encounter");

template <>
const Field<RPG::Encounter>* Struct<RPG::Encounter>::fields[] = {
	new TypedField<RPG::Encounter, int>(&RPG::Encounter::troop_id, LMT_Reader::ChunkEncounter::troop_id, "troop_id"),
	NULL
};

