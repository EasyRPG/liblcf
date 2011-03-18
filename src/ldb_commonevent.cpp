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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read CommonEvent
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(CommonEvent, WithID)

EASYRPG_STRUCT_NAME(CommonEvent)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT CommonEvent

EASYRPG_STRUCT_FIELDS_BEGIN(CommonEvent)
	new TypedField<RPG::CommonEvent, std::string>						(&RPG::CommonEvent::name,			LDB_Reader::ChunkCommonEvent::name,					"name"			),
	new TypedField<RPG::CommonEvent, int>								(&RPG::CommonEvent::trigger,		LDB_Reader::ChunkCommonEvent::trigger,				"trigger"		),
	new TypedField<RPG::CommonEvent, bool>								(&RPG::CommonEvent::switch_flag,	LDB_Reader::ChunkCommonEvent::switch_flag,			"switch_flag"	),
	new TypedField<RPG::CommonEvent, int>								(&RPG::CommonEvent::switch_id,		LDB_Reader::ChunkCommonEvent::switch_id,			"switch_id"		),
	new SizeField<RPG::CommonEvent, RPG::EventCommand>					(&RPG::CommonEvent::event_commands,	LDB_Reader::ChunkCommonEvent::event_commands_size					),
	new TypedField<RPG::CommonEvent, std::vector<RPG::EventCommand> >	(&RPG::CommonEvent::event_commands,	LDB_Reader::ChunkCommonEvent::event_commands,		"event_commands"),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
