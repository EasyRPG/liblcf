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
#include "reader.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read BattlerAnimation
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::BattlerAnimationData>* Struct<RPG::BattlerAnimationData>::ID_reader = new IDReaderT<RPG::BattlerAnimationData, WithID>();

template <>
const Field<RPG::BattlerAnimationData>* Struct<RPG::BattlerAnimationData>::fields[] = {
	new TypedField<RPG::BattlerAnimationData, int>	(&RPG::BattlerAnimationData::move,			LDB_Reader::ChunkBattlerAnimationData::move,		"move"			),
	new TypedField<RPG::BattlerAnimationData, int>	(&RPG::BattlerAnimationData::after_image,	LDB_Reader::ChunkBattlerAnimationData::after_image,	"after_image"	),
	new TypedField<RPG::BattlerAnimationData, int>	(&RPG::BattlerAnimationData::pose,			LDB_Reader::ChunkBattlerAnimationData::pose,		"pose"			),
	NULL
};
