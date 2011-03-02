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
/// Read Learning
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::Learning>::ReadID(RPG::Learning& obj, Reader& stream) {
	IDReader<RPG::Learning, SkipID>::ReadID(obj, stream);
}

template <>
const Field<RPG::Learning>* Struct<RPG::Learning>::fields[] = {
	new TypedField<RPG::Learning, int> (&RPG::Learning::level,		LDB_Reader::ChunkLearning::level,		"level"),
	new TypedField<RPG::Learning, int> (&RPG::Learning::skill_id,	LDB_Reader::ChunkLearning::skill_id,	"skill_id"),
	NULL
};

