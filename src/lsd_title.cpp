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
/// Read Save Title
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveTitle, NoID)

EASYRPG_STRUCT_NAME(SaveTitle)

template <>
const Field<RPG::SaveTitle>* Struct<RPG::SaveTitle>::fields[] = {
	new TypedField<RPG::SaveTitle, std::vector<uint8_t> >	(&RPG::SaveTitle::timestamp,	LSD_Reader::ChunkTitle::timestamp,		"timestamp"		),
	new TypedField<RPG::SaveTitle, std::string>				(&RPG::SaveTitle::hero_name,	LSD_Reader::ChunkTitle::hero_name,		"hero_name"		),
	new TypedField<RPG::SaveTitle, int>						(&RPG::SaveTitle::hero_level,	LSD_Reader::ChunkTitle::hero_level,		"hero_level"	),
	new TypedField<RPG::SaveTitle, int>						(&RPG::SaveTitle::hero_hp,		LSD_Reader::ChunkTitle::hero_hp,		"hero_hp"		),
	new TypedField<RPG::SaveTitle, std::string>				(&RPG::SaveTitle::face1_name,	LSD_Reader::ChunkTitle::face1_name,		"face1_name"	),
	new TypedField<RPG::SaveTitle, int>						(&RPG::SaveTitle::face1_id,		LSD_Reader::ChunkTitle::face1_id,		"face1_id"		),
	new TypedField<RPG::SaveTitle, std::string>				(&RPG::SaveTitle::face2_name,	LSD_Reader::ChunkTitle::face2_name,		"face2_name"	),
	new TypedField<RPG::SaveTitle, int>						(&RPG::SaveTitle::face2_id,		LSD_Reader::ChunkTitle::face2_id,		"face2_id"		),
	new TypedField<RPG::SaveTitle, std::string>				(&RPG::SaveTitle::face3_name,	LSD_Reader::ChunkTitle::face3_name,		"face3_name"	),
	new TypedField<RPG::SaveTitle, int>						(&RPG::SaveTitle::face3_id,		LSD_Reader::ChunkTitle::face3_id,		"face3_id"		),
	new TypedField<RPG::SaveTitle, std::string>				(&RPG::SaveTitle::face4_name,	LSD_Reader::ChunkTitle::face4_name,		"face4_name"	),
	new TypedField<RPG::SaveTitle, int>						(&RPG::SaveTitle::face4_id,		LSD_Reader::ChunkTitle::face4_id,		"face4_id"		),
	NULL
};
