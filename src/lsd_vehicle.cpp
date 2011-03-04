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
/// Read Save Vehicle Location
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::SaveVehicleLocation>* Struct<RPG::SaveVehicleLocation>::ID_reader = new IDReaderT<RPG::SaveVehicleLocation, NoID>();

template <>
const Field<RPG::SaveVehicleLocation>* Struct<RPG::SaveVehicleLocation>::fields[] = {
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::map_id,			LSD_Reader::ChunkVehicleLocation::map_id,			"map_id"		),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::position_x,		LSD_Reader::ChunkVehicleLocation::position_x,		"position_x"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::position_y,		LSD_Reader::ChunkVehicleLocation::position_y,		"position_y"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::facing1,		LSD_Reader::ChunkVehicleLocation::facing1,			"facing1"		),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::facing2,		LSD_Reader::ChunkVehicleLocation::facing2,			"facing2"		),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::unknown_17,		LSD_Reader::ChunkVehicleLocation::unknown_17,		"unknown_17"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::unknown_21,		LSD_Reader::ChunkVehicleLocation::unknown_21,		"unknown_21"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::unknown_23,		LSD_Reader::ChunkVehicleLocation::unknown_23,		"unknown_23"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::unknown_25,		LSD_Reader::ChunkVehicleLocation::unknown_25,		"unknown_25"	),
	new TypedField<RPG::SaveVehicleLocation, RPG::MoveRoute>	(&RPG::SaveVehicleLocation::move_route,		LSD_Reader::ChunkVehicleLocation::move_route,		"move_route"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::unknown_34,		LSD_Reader::ChunkVehicleLocation::unknown_34,		"unknown_34"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::unknown_35,		LSD_Reader::ChunkVehicleLocation::unknown_35,		"unknown_35"	),
	new TypedField<RPG::SaveVehicleLocation, std::string>		(&RPG::SaveVehicleLocation::sprite_name,	LSD_Reader::ChunkVehicleLocation::sprite_name,		"sprite_name"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::sprite_id,		LSD_Reader::ChunkVehicleLocation::sprite_id,		"sprite_id"		),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::unknown_4b,		LSD_Reader::ChunkVehicleLocation::unknown_4b,		"unknown_4b"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::unknown_65,		LSD_Reader::ChunkVehicleLocation::unknown_65,		"unknown_65"	),
	new TypedField<RPG::SaveVehicleLocation, std::string>		(&RPG::SaveVehicleLocation::sprite2_name,	LSD_Reader::ChunkVehicleLocation::sprite2_name,		"sprite2_name"	),
	new TypedField<RPG::SaveVehicleLocation, int>				(&RPG::SaveVehicleLocation::sprite2_id,		LSD_Reader::ChunkVehicleLocation::sprite2_id,		"sprite2_id"	),
	NULL
};
