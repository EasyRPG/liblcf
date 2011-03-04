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
/// Read Save Map Event
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::SaveMapEvent>* Struct<RPG::SaveMapEvent>::ID_reader = new IDReaderT<RPG::SaveMapEvent, WithID>();

template <>
const Field<RPG::SaveMapEvent>* Struct<RPG::SaveMapEvent>::fields[] = {
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_01,			LSD_Reader::ChunkMapEvent::unknown_01,			"unknown_01"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::map_id,				LSD_Reader::ChunkMapEvent::map_id,				"map_id"				),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::position_x,			LSD_Reader::ChunkMapEvent::position_x,			"position_x"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::position_y,			LSD_Reader::ChunkMapEvent::position_y,			"position_y"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::facing1,				LSD_Reader::ChunkMapEvent::facing1,				"facing1"				),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::facing2,				LSD_Reader::ChunkMapEvent::facing2,				"facing2"				),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::anim_frame,			LSD_Reader::ChunkMapEvent::anim_frame,			"anim_frame"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_18,			LSD_Reader::ChunkMapEvent::unknown_18,			"unknown_18"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_1f,			LSD_Reader::ChunkMapEvent::unknown_1f,			"unknown_1f"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_20,			LSD_Reader::ChunkMapEvent::unknown_20,			"unknown_20"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::layer,					LSD_Reader::ChunkMapEvent::layer,				"layer"					),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_22,			LSD_Reader::ChunkMapEvent::unknown_22,			"unknown_22"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_23,			LSD_Reader::ChunkMapEvent::unknown_23,			"unknown_23"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_24,			LSD_Reader::ChunkMapEvent::unknown_24,			"unknown_24"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_25,			LSD_Reader::ChunkMapEvent::unknown_25,			"unknown_25"			),
	new TypedField<RPG::SaveMapEvent, RPG::MoveRoute>		(&RPG::SaveMapEvent::move_route,			LSD_Reader::ChunkMapEvent::move_route,			"move_route"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_2a,			LSD_Reader::ChunkMapEvent::unknown_2a,			"unknown_2a"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_2b,			LSD_Reader::ChunkMapEvent::unknown_2b,			"unknown_2b"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_2f,			LSD_Reader::ChunkMapEvent::unknown_2f,			"unknown_2f"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::anim_paused,			LSD_Reader::ChunkMapEvent::anim_paused,			"anim_paused"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_33,			LSD_Reader::ChunkMapEvent::unknown_33,			"unknown_33"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_34,			LSD_Reader::ChunkMapEvent::unknown_34,			"unknown_34"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_35,			LSD_Reader::ChunkMapEvent::unknown_35,			"unknown_35"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_36,			LSD_Reader::ChunkMapEvent::unknown_36,			"unknown_36"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_3e,			LSD_Reader::ChunkMapEvent::unknown_3e,			"unknown_3e"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_3f,			LSD_Reader::ChunkMapEvent::unknown_3f,			"unknown_3f"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_47,			LSD_Reader::ChunkMapEvent::unknown_47,			"unknown_47"			),
	new TypedField<RPG::SaveMapEvent, std::string>			(&RPG::SaveMapEvent::sprite_name,			LSD_Reader::ChunkMapEvent::sprite_name,			"sprite_name"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::sprite_id,				LSD_Reader::ChunkMapEvent::sprite_id,			"sprite_id"				),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_4b,			LSD_Reader::ChunkMapEvent::unknown_4b,			"unknown_4b"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::flash_red,				LSD_Reader::ChunkMapEvent::flash_red,			"flash_red"				),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::flash_green,			LSD_Reader::ChunkMapEvent::flash_green,			"flash_green"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::flash_blue,			LSD_Reader::ChunkMapEvent::flash_blue,			"flash_blue"			),
	new TypedField<RPG::SaveMapEvent, double>				(&RPG::SaveMapEvent::flash_current_level,	LSD_Reader::ChunkMapEvent::flash_current_level,	"flash_current_level"	),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::flash_time_left,		LSD_Reader::ChunkMapEvent::flash_time_left,		"flash_time_left"		),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_66,			LSD_Reader::ChunkMapEvent::unknown_66,			"unknown_66"			),
	new TypedField<RPG::SaveMapEvent, int>					(&RPG::SaveMapEvent::unknown_67,			LSD_Reader::ChunkMapEvent::unknown_67,			"unknown_67"			),
	new TypedField<RPG::SaveMapEvent, RPG::SaveEventData>	(&RPG::SaveMapEvent::event_data,			LSD_Reader::ChunkMapEvent::event_data,			"event_data"			),
	NULL
};
