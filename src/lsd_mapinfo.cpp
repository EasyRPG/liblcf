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
/// Read Save Map Info
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::SaveMapInfo>* Struct<RPG::SaveMapInfo>::ID_reader = new IDReaderT<RPG::SaveMapInfo, NoID>();

template <>
const Field<RPG::SaveMapInfo>* Struct<RPG::SaveMapInfo>::fields[] = {
	new TypedField<RPG::SaveMapInfo, int>								(&RPG::SaveMapInfo::pan_x,					LSD_Reader::ChunkMapInfo::pan_x,				"pan_x"					),
	new TypedField<RPG::SaveMapInfo, int>								(&RPG::SaveMapInfo::pan_y,					LSD_Reader::ChunkMapInfo::pan_y,				"pan_y"					),
	new TypedField<RPG::SaveMapInfo, int>								(&RPG::SaveMapInfo::encounter_rate,			LSD_Reader::ChunkMapInfo::encounter_rate,		"encounter_rate"		),
	new TypedField<RPG::SaveMapInfo, int>								(&RPG::SaveMapInfo::chipset_id,				LSD_Reader::ChunkMapInfo::chipset_id,			"chipset_id"			),
	new TypedField<RPG::SaveMapInfo, std::vector<RPG::SaveMapEvent> >	(&RPG::SaveMapInfo::events,					LSD_Reader::ChunkMapInfo::events,				"events"				),
	new TypedField<RPG::SaveMapInfo, std::vector<uint8_t> >				(&RPG::SaveMapInfo::lower_tiles,			LSD_Reader::ChunkMapInfo::lower_tiles,			"lower_tiles"			),
	new TypedField<RPG::SaveMapInfo, std::vector<uint8_t> >				(&RPG::SaveMapInfo::upper_tiles,			LSD_Reader::ChunkMapInfo::upper_tiles,			"upper_tiles"			),
	new TypedField<RPG::SaveMapInfo, std::string>						(&RPG::SaveMapInfo::parallax_name,			LSD_Reader::ChunkMapInfo::parallax_name,		"parallax_name"			),
	new TypedField<RPG::SaveMapInfo, bool>								(&RPG::SaveMapInfo::parallax_horz,			LSD_Reader::ChunkMapInfo::parallax_horz,		"parallax_horz"			),
	new TypedField<RPG::SaveMapInfo, bool>								(&RPG::SaveMapInfo::parallax_vert,			LSD_Reader::ChunkMapInfo::parallax_vert,		"parallax_vert"			),
	new TypedField<RPG::SaveMapInfo, bool>								(&RPG::SaveMapInfo::parallax_horz_auto,		LSD_Reader::ChunkMapInfo::parallax_horz_auto,	"parallax_horz_auto"	),
	new TypedField<RPG::SaveMapInfo, int>								(&RPG::SaveMapInfo::parallax_horz_speed,	LSD_Reader::ChunkMapInfo::parallax_horz_speed,	"parallax_horz_speed"	),
	new TypedField<RPG::SaveMapInfo, bool>								(&RPG::SaveMapInfo::parallax_vert_auto,		LSD_Reader::ChunkMapInfo::parallax_vert_auto,	"parallax_vert_auto"	),
	new TypedField<RPG::SaveMapInfo, int>								(&RPG::SaveMapInfo::parallax_vert_speed,	LSD_Reader::ChunkMapInfo::parallax_vert_speed,	"parallax_vert_speed"	),
	NULL
};
