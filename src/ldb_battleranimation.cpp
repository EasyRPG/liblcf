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
/// Read BattlerAnimation
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(BattlerAnimation, WithID)

EASYRPG_STRUCT_NAME(BattlerAnimation)

template <>
const Field<RPG::BattlerAnimation>* Struct<RPG::BattlerAnimation>::fields[] = {
	new TypedField<RPG::BattlerAnimation, std::string>									(&RPG::BattlerAnimation::name,			LDB_Reader::ChunkBattlerAnimation::name,		"name"			),
	new TypedField<RPG::BattlerAnimation, int>											(&RPG::BattlerAnimation::speed,			LDB_Reader::ChunkBattlerAnimation::speed,		"speed"			),
	new TypedField<RPG::BattlerAnimation, std::vector<RPG::BattlerAnimationExtension> >	(&RPG::BattlerAnimation::base_data,		LDB_Reader::ChunkBattlerAnimation::base_data,	"base_data"		),
	new TypedField<RPG::BattlerAnimation, std::vector<RPG::BattlerAnimationExtension> >	(&RPG::BattlerAnimation::weapon_data,	LDB_Reader::ChunkBattlerAnimation::weapon_data,	"weapon_data"	),
	NULL
};
