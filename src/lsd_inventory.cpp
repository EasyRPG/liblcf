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
/// Read Save Inventory
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(SaveInventory, NoID)

EASYRPG_STRUCT_NAME(SaveInventory)

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SaveInventory

EASYRPG_STRUCT_FIELDS_BEGIN(SaveInventory)
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::party_size,		LSD_Reader::ChunkInventory::party_size,		"party_size"		),
	new TypedField<RPG::SaveInventory, std::vector<int16_t> >	(&RPG::SaveInventory::party,			LSD_Reader::ChunkInventory::party,			"party"				),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::items_size,		LSD_Reader::ChunkInventory::items_size,		"items_size"		),
	new TypedField<RPG::SaveInventory, std::vector<int16_t> >	(&RPG::SaveInventory::item_ids,			LSD_Reader::ChunkInventory::item_ids,		"item_ids"			),
	new TypedField<RPG::SaveInventory, std::vector<uint8_t> >	(&RPG::SaveInventory::item_counts,		LSD_Reader::ChunkInventory::item_counts,	"item_counts"		),
	new TypedField<RPG::SaveInventory, std::vector<uint8_t> >	(&RPG::SaveInventory::item_usage,		LSD_Reader::ChunkInventory::item_usage,		"item_usage"		),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::gold,				LSD_Reader::ChunkInventory::gold,			"gold"				),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::timer1_secs,		LSD_Reader::ChunkInventory::timer1_secs,	"timer1_secs"		),
	new TypedField<RPG::SaveInventory, bool>					(&RPG::SaveInventory::timer1_active,	LSD_Reader::ChunkInventory::timer1_active,	"timer1_active"		),
	new TypedField<RPG::SaveInventory, bool>					(&RPG::SaveInventory::timer1_visible,	LSD_Reader::ChunkInventory::timer1_visible,	"timer1_visible"	),
	new TypedField<RPG::SaveInventory, bool>					(&RPG::SaveInventory::timer1_battle,	LSD_Reader::ChunkInventory::timer1_battle,	"timer1_battle"		),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::timer2_secs,		LSD_Reader::ChunkInventory::timer2_secs,	"timer2_secs"		),
	new TypedField<RPG::SaveInventory, bool>					(&RPG::SaveInventory::timer2_active,	LSD_Reader::ChunkInventory::timer2_active,	"timer2_active"		),
	new TypedField<RPG::SaveInventory, bool>					(&RPG::SaveInventory::timer2_visible,	LSD_Reader::ChunkInventory::timer2_visible,	"timer2_visible"	),
	new TypedField<RPG::SaveInventory, bool>					(&RPG::SaveInventory::timer2_battle,	LSD_Reader::ChunkInventory::timer2_battle,	"timer2_battle"		),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::battles,			LSD_Reader::ChunkInventory::battles,		"battles"			),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::defeats,			LSD_Reader::ChunkInventory::defeats,		"defeats"			),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::escapes,			LSD_Reader::ChunkInventory::escapes,		"escapes"			),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::victories,		LSD_Reader::ChunkInventory::victories,		"victories"			),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::unknown_29,		LSD_Reader::ChunkInventory::unknown_29,		"unknown_29"		),
	new TypedField<RPG::SaveInventory, int>						(&RPG::SaveInventory::steps,			LSD_Reader::ChunkInventory::steps,			"steps"				),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
