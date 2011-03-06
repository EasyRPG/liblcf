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
#include "lmu_reader.h"
#include "rpg_save.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Save Party Location
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::SavePartyLocation>* Struct<RPG::SavePartyLocation>::ID_reader = new IDReaderT<RPG::SavePartyLocation, NoID>();

template <>
char const* const Struct<RPG::SavePartyLocation>::name("SavePartyLocation");

template <>
const Field<RPG::SavePartyLocation>* Struct<RPG::SavePartyLocation>::fields[] = {
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::map_id,				LSD_Reader::ChunkPartyLocation::map_id,				"map_id"				),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::position_x,			LSD_Reader::ChunkPartyLocation::position_x,			"position_x"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::position_y,			LSD_Reader::ChunkPartyLocation::position_y,			"position_y"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::facing1,				LSD_Reader::ChunkPartyLocation::facing1,			"facing1"				),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::facing2,				LSD_Reader::ChunkPartyLocation::facing2,			"facing2"				),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_17,			LSD_Reader::ChunkPartyLocation::unknown_17,			"unknown_17"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_20,			LSD_Reader::ChunkPartyLocation::unknown_20,			"unknown_20"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_21,			LSD_Reader::ChunkPartyLocation::unknown_21,			"unknown_21"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_23,			LSD_Reader::ChunkPartyLocation::unknown_23,			"unknown_23"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_25,			LSD_Reader::ChunkPartyLocation::unknown_25,			"unknown_25"			),
	new TypedField<RPG::SavePartyLocation, RPG::MoveRoute>	(&RPG::SavePartyLocation::move_route,			LSD_Reader::ChunkPartyLocation::move_route,			"move_route"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_2a,			LSD_Reader::ChunkPartyLocation::unknown_2a,			"unknown_2a"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_2b,			LSD_Reader::ChunkPartyLocation::unknown_2b,			"unknown_2b"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_2c,			LSD_Reader::ChunkPartyLocation::unknown_2c,			"unknown_2c"			),
	new TypedField<RPG::SavePartyLocation, bool>			(&RPG::SavePartyLocation::sprite_transparent,	LSD_Reader::ChunkPartyLocation::sprite_transparent,	"sprite_transparent"	),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_2f,			LSD_Reader::ChunkPartyLocation::unknown_2f,			"unknown_2f"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_33,			LSD_Reader::ChunkPartyLocation::unknown_33,			"unknown_33"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_34,			LSD_Reader::ChunkPartyLocation::unknown_34,			"unknown_34"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_35,			LSD_Reader::ChunkPartyLocation::unknown_35,			"unknown_35"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_36,			LSD_Reader::ChunkPartyLocation::unknown_36,			"unknown_36"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_3e,			LSD_Reader::ChunkPartyLocation::unknown_3e,			"unknown_3e"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_3f,			LSD_Reader::ChunkPartyLocation::unknown_3f,			"unknown_3f"			),
	new TypedField<RPG::SavePartyLocation, std::string>		(&RPG::SavePartyLocation::sprite_name,			LSD_Reader::ChunkPartyLocation::sprite_name,		"sprite_name"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::sprite_id,			LSD_Reader::ChunkPartyLocation::sprite_id,			"sprite_id"				),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_4b,			LSD_Reader::ChunkPartyLocation::unknown_4b,			"unknown_4b"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_51,			LSD_Reader::ChunkPartyLocation::unknown_51,			"unknown_51"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_52,			LSD_Reader::ChunkPartyLocation::unknown_52,			"unknown_52"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_53,			LSD_Reader::ChunkPartyLocation::unknown_53,			"unknown_53"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::pan_state,			LSD_Reader::ChunkPartyLocation::pan_state,			"pan_state"				),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::pan_current_x,		LSD_Reader::ChunkPartyLocation::pan_current_x,		"pan_current_x"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::pan_current_y,		LSD_Reader::ChunkPartyLocation::pan_current_y,		"pan_current_y"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::pan_finish_x,			LSD_Reader::ChunkPartyLocation::pan_finish_x,		"pan_finish_x"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::pan_finish_y,			LSD_Reader::ChunkPartyLocation::pan_finish_y,		"pan_finish_y"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_79,			LSD_Reader::ChunkPartyLocation::unknown_79,			"unknown_79"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_7c,			LSD_Reader::ChunkPartyLocation::unknown_7c,			"unknown_7c"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_83,			LSD_Reader::ChunkPartyLocation::unknown_83,			"unknown_83"			),
	new TypedField<RPG::SavePartyLocation, int>				(&RPG::SavePartyLocation::unknown_84,			LSD_Reader::ChunkPartyLocation::unknown_84,			"unknown_84"			),
	NULL
};
