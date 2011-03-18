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
/// Read Troop
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Troop, WithID)

EASYRPG_STRUCT_NAME(Troop)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Troop

EASYRPG_STRUCT_FIELDS_BEGIN(Troop)
	new TypedField<RPG::Troop, std::string>						(&RPG::Troop::name,			LDB_Reader::ChunkTroop::name,				"name"			),
	new TypedField<RPG::Troop, std::vector<RPG::TroopMember> >	(&RPG::Troop::members,		LDB_Reader::ChunkTroop::members,			"members"		),
	new SizeField<RPG::Troop, bool>								(&RPG::Troop::terrain_set,	LDB_Reader::ChunkTroop::terrain_set_size					),
	new TypedField<RPG::Troop, std::vector<bool> >				(&RPG::Troop::terrain_set,	LDB_Reader::ChunkTroop::terrain_set,		"terrain_set"	),
	new TypedField<RPG::Troop, std::vector<RPG::TroopPage> >	(&RPG::Troop::pages,		LDB_Reader::ChunkTroop::pages,				"pages"			),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
