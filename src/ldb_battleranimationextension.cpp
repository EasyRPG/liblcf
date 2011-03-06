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
template <>
IDReader<RPG::BattlerAnimationExtension>* Struct<RPG::BattlerAnimationExtension>::ID_reader = new IDReaderT<RPG::BattlerAnimationExtension, WithID>();

template <>
char const* const Struct<RPG::BattlerAnimationExtension>::name("BattlerAnimationExtension");

template <>
const Field<RPG::BattlerAnimationExtension>* Struct<RPG::BattlerAnimationExtension>::fields[] = {
	new TypedField<RPG::BattlerAnimationExtension, std::string>	(&RPG::BattlerAnimationExtension::name,				LDB_Reader::ChunkBattlerAnimationExtension::name,			"name"				),
	new TypedField<RPG::BattlerAnimationExtension, std::string>	(&RPG::BattlerAnimationExtension::battler_name,		LDB_Reader::ChunkBattlerAnimationExtension::battler_name,	"battler_name"		),
	new TypedField<RPG::BattlerAnimationExtension, int>			(&RPG::BattlerAnimationExtension::battler_index,	LDB_Reader::ChunkBattlerAnimationExtension::battler_index,	"battler_index"		),
	new TypedField<RPG::BattlerAnimationExtension, int>			(&RPG::BattlerAnimationExtension::animation_type,	LDB_Reader::ChunkBattlerAnimationExtension::animation_type,	"animation_type"	),
	new TypedField<RPG::BattlerAnimationExtension, int>			(&RPG::BattlerAnimationExtension::animation_id,		LDB_Reader::ChunkBattlerAnimationExtension::animation_id,	"animation_id"		),
	NULL
};
