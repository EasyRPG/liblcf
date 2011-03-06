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
/// Read Save
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::Save>* Struct<RPG::Save>::ID_reader = new IDReaderT<RPG::Save, NoID>();

template <>
char const* const Struct<RPG::Save>::name("Save");

template <>
const Field<RPG::Save>* Struct<RPG::Save>::fields[] = {
	new TypedField<RPG::Save, RPG::SaveTitle>						(&RPG::Save::title,				LSD_Reader::ChunkSave::title,				"title"				),
	new TypedField<RPG::Save, RPG::SaveSystem>						(&RPG::Save::system,			LSD_Reader::ChunkSave::system,				"system"			),
	new TypedField<RPG::Save, RPG::SaveScreen>						(&RPG::Save::screen,			LSD_Reader::ChunkSave::screen,				"screen"			),
	new TypedField<RPG::Save, std::vector<RPG::SavePicture> >		(&RPG::Save::pictures,			LSD_Reader::ChunkSave::pictures,			"pictures"			),
	new TypedField<RPG::Save, RPG::SavePartyLocation>				(&RPG::Save::party_location,	LSD_Reader::ChunkSave::party_location,		"party_location"	),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>				(&RPG::Save::boat_location,		LSD_Reader::ChunkSave::boat_location,		"boat_location"		),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>				(&RPG::Save::ship_location,		LSD_Reader::ChunkSave::ship_location,		"ship_location"		),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>				(&RPG::Save::airship_location,	LSD_Reader::ChunkSave::airship_location,	"airship_location"	),
	new TypedField<RPG::Save, std::vector<RPG::SaveActor> >			(&RPG::Save::party,				LSD_Reader::ChunkSave::party,				"party"				),
	new TypedField<RPG::Save, RPG::SaveInventory>					(&RPG::Save::inventory,			LSD_Reader::ChunkSave::inventory,			"inventory"			),
	new TypedField<RPG::Save, std::vector<RPG::SaveTarget> >		(&RPG::Save::targets,			LSD_Reader::ChunkSave::targets,				"targets"			),
	new TypedField<RPG::Save, RPG::SaveMapInfo>						(&RPG::Save::map_info,			LSD_Reader::ChunkSave::map_info,			"map_info"			),
	new TypedField<RPG::Save, int>									(&RPG::Save::unknown_70,		LSD_Reader::ChunkSave::unknown_70,			"unknown_70"		),
	new TypedField<RPG::Save, std::vector<RPG::SaveCommonEvent> >	(&RPG::Save::common_events,		LSD_Reader::ChunkSave::common_events,		"common_events"		),
	new TypedField<RPG::Save, RPG::SaveEvents>						(&RPG::Save::events,			LSD_Reader::ChunkSave::events,				"events"			),
	NULL
};
