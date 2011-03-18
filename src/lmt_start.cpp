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
EASYRPG_STRUCT_ID_READER(Start, NoID)

EASYRPG_STRUCT_NAME(Start)

#define EASYRPG_CHUNK_SUFFIX LMT_Reader
#define EASYRPG_CURRENT_STRUCT Start

EASYRPG_STRUCT_FIELDS_BEGIN(Start)
	new TypedField<RPG::Start, int>	(&RPG::Start::party_map_id,		LMT_Reader::ChunkStart::party_map_id,	"party_map_id"		),
	new TypedField<RPG::Start, int>	(&RPG::Start::party_x,			LMT_Reader::ChunkStart::party_x,		"party_x"			),
	new TypedField<RPG::Start, int>	(&RPG::Start::party_y,			LMT_Reader::ChunkStart::party_y,		"party_y"			),
	new TypedField<RPG::Start, int>	(&RPG::Start::boat_map_id,		LMT_Reader::ChunkStart::boat_map_id,	"boat_map_id"		),
	new TypedField<RPG::Start, int>	(&RPG::Start::boat_x,			LMT_Reader::ChunkStart::boat_x,			"boat_x"			),
	new TypedField<RPG::Start, int>	(&RPG::Start::boat_y,			LMT_Reader::ChunkStart::boat_y,			"boat_y"			),
	new TypedField<RPG::Start, int>	(&RPG::Start::ship_map_id,		LMT_Reader::ChunkStart::ship_map_id,	"ship_map_id"		),
	new TypedField<RPG::Start, int>	(&RPG::Start::ship_x,			LMT_Reader::ChunkStart::ship_x,			"ship_x"			),
	new TypedField<RPG::Start, int>	(&RPG::Start::ship_y,			LMT_Reader::ChunkStart::ship_y,			"ship_y"			),
	new TypedField<RPG::Start, int>	(&RPG::Start::airship_map_id,	LMT_Reader::ChunkStart::airship_map_id,	"airship_map_id"	),
	new TypedField<RPG::Start, int>	(&RPG::Start::airship_x,		LMT_Reader::ChunkStart::airship_x,		"airship_x"			),
	new TypedField<RPG::Start, int>	(&RPG::Start::airship_y,		LMT_Reader::ChunkStart::airship_y,		"airship_y"			),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
