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
#include "reader_util.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Tree Map
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::TreeMap>::ReadID(RPG::TreeMap& obj, Reader& stream) {
	IDReader<RPG::TreeMap, NoID>::ReadID(obj, stream);
}

template <>
const Field<RPG::TreeMap>* Struct<RPG::TreeMap>::fields[] = {
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::start_map_id,	LMT_Reader::ChunkTreeMap::start_map_id,		"start_map_id"		),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::start_x,		LMT_Reader::ChunkTreeMap::start_x,			"start_x"			),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::start_y,		LMT_Reader::ChunkTreeMap::start_y,			"start_y"			),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::boat_map_id,	LMT_Reader::ChunkTreeMap::boat_map_id,		"boat_map_id"		),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::boat_x,			LMT_Reader::ChunkTreeMap::boat_x,			"boat_x"			),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::boat_y,			LMT_Reader::ChunkTreeMap::boat_y,			"boat_y"			),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::ship_map_id,	LMT_Reader::ChunkTreeMap::ship_map_id,		"ship_map_id"		),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::ship_x,			LMT_Reader::ChunkTreeMap::ship_x,			"ship_x"			),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::ship_y,			LMT_Reader::ChunkTreeMap::ship_y,			"ship_y"			),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::airship_map_id,	LMT_Reader::ChunkTreeMap::airship_map_id,	"airship_map_id"	),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::airship_x,		LMT_Reader::ChunkTreeMap::airship_x,		"airship_x"			),
	new TypedField<RPG::TreeMap, int>	(&RPG::TreeMap::airship_y,		LMT_Reader::ChunkTreeMap::airship_y,		"airship_y"			),
	NULL
};

