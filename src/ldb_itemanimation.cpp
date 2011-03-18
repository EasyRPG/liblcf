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
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Item Animation
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(ItemAnimation, WithID)

EASYRPG_STRUCT_NAME(ItemAnimation)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT ItemAnimation

EASYRPG_STRUCT_FIELDS_BEGIN(ItemAnimation)
	new TypedField<RPG::ItemAnimation, int>	(&RPG::ItemAnimation::type,			LDB_Reader::ChunkItemAnimation::type,			"type"			),
	new TypedField<RPG::ItemAnimation, int>	(&RPG::ItemAnimation::weapon_anim,	LDB_Reader::ChunkItemAnimation::weapon_anim,	"weapon_anim"	),
	new TypedField<RPG::ItemAnimation, int>	(&RPG::ItemAnimation::movement,		LDB_Reader::ChunkItemAnimation::movement,		"movement"		),
	new TypedField<RPG::ItemAnimation, int>	(&RPG::ItemAnimation::after_image,	LDB_Reader::ChunkItemAnimation::after_image,	"after_image"	),
	new TypedField<RPG::ItemAnimation, int>	(&RPG::ItemAnimation::attacks,		LDB_Reader::ChunkItemAnimation::attacks,		"attacks"		),
	new TypedField<RPG::ItemAnimation, bool>(&RPG::ItemAnimation::ranged,		LDB_Reader::ChunkItemAnimation::ranged,			"ranged"		),
	new TypedField<RPG::ItemAnimation, int>	(&RPG::ItemAnimation::ranged_anim,	LDB_Reader::ChunkItemAnimation::ranged_anim,	"ranged_anim"	),
	new TypedField<RPG::ItemAnimation, int>	(&RPG::ItemAnimation::ranged_speed,	LDB_Reader::ChunkItemAnimation::ranged_speed,	"ranged_speed"	),
	new TypedField<RPG::ItemAnimation, int>	(&RPG::ItemAnimation::battle_anim,	LDB_Reader::ChunkItemAnimation::battle_anim,	"battle_anim"	),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
