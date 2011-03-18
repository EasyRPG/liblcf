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
/// Read BattlerAnimationExtension
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(BattlerAnimationExtension, WithID)

EASYRPG_STRUCT_NAME(BattlerAnimationExtension)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT BattlerAnimationExtension

EASYRPG_STRUCT_FIELDS_BEGIN(BattlerAnimationExtension)
	new TypedField<RPG::BattlerAnimationExtension, std::string>	(&RPG::BattlerAnimationExtension::name,				LDB_Reader::ChunkBattlerAnimationExtension::name,			"name"				),
	new TypedField<RPG::BattlerAnimationExtension, std::string>	(&RPG::BattlerAnimationExtension::battler_name,		LDB_Reader::ChunkBattlerAnimationExtension::battler_name,	"battler_name"		),
	new TypedField<RPG::BattlerAnimationExtension, int>			(&RPG::BattlerAnimationExtension::battler_index,	LDB_Reader::ChunkBattlerAnimationExtension::battler_index,	"battler_index"		),
	new TypedField<RPG::BattlerAnimationExtension, int>			(&RPG::BattlerAnimationExtension::animation_type,	LDB_Reader::ChunkBattlerAnimationExtension::animation_type,	"animation_type"	),
	new TypedField<RPG::BattlerAnimationExtension, int>			(&RPG::BattlerAnimationExtension::animation_id,		LDB_Reader::ChunkBattlerAnimationExtension::animation_id,	"animation_id"		),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
