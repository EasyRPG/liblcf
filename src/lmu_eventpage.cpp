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
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Event Page
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(EventPage, WithID)

EASYRPG_STRUCT_NAME(EventPage)

template <>
const Field<RPG::EventPage>* Struct<RPG::EventPage>::fields[] = {
	new TypedField<RPG::EventPage, RPG::EventPageCondition>			(&RPG::EventPage::condition,			LMU_Reader::ChunkEventPage::condition,				"condition"				),
	new TypedField<RPG::EventPage, std::string>						(&RPG::EventPage::character_name,		LMU_Reader::ChunkEventPage::character_name,			"character_name"		),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::character_index,		LMU_Reader::ChunkEventPage::character_index,		"character_index"		),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::character_direction,	LMU_Reader::ChunkEventPage::character_direction,	"character_direction"	),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::character_pattern,	LMU_Reader::ChunkEventPage::character_pattern,		"character_pattern"		),
	new TypedField<RPG::EventPage, bool>							(&RPG::EventPage::translucent,			LMU_Reader::ChunkEventPage::translucent,			"translucent"			),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::move_type,			LMU_Reader::ChunkEventPage::move_type,				"move_type"				),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::move_frequency,		LMU_Reader::ChunkEventPage::move_frequency,			"move_frequency"		),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::trigger,				LMU_Reader::ChunkEventPage::trigger,				"trigger"				),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::priority_type,		LMU_Reader::ChunkEventPage::priority_type,			"priority_type"			),
	new TypedField<RPG::EventPage, bool>							(&RPG::EventPage::overlap,				LMU_Reader::ChunkEventPage::overlap,				"overlap"				),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::animation_type,		LMU_Reader::ChunkEventPage::animation_type,			"animation_type"		),
	new TypedField<RPG::EventPage, int>								(&RPG::EventPage::move_speed,			LMU_Reader::ChunkEventPage::move_speed,				"move_speed"			),
	new TypedField<RPG::EventPage, RPG::MoveRoute>					(&RPG::EventPage::move_route,			LMU_Reader::ChunkEventPage::move_route,				"move_route"			),
	new SizeField<RPG::EventPage, RPG::EventCommand>				(&RPG::EventPage::event_commands,		LMU_Reader::ChunkEventPage::event_commands_size								),
	new TypedField<RPG::EventPage, std::vector<RPG::EventCommand> >	(&RPG::EventPage::event_commands,		LMU_Reader::ChunkEventPage::event_commands,			"event_commands"		),
	NULL
};
