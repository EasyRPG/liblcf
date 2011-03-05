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
/// Read Variable
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::Variable>* Struct<RPG::Variable>::ID_reader = new IDReaderT<RPG::Variable, WithID>();

template <>
const std::string Struct<RPG::Variable>::name("Variable");

template <>
const Field<RPG::Variable>* Struct<RPG::Variable>::fields[] = {
	new TypedField<RPG::Variable, std::string>(&RPG::Variable::name, LDB_Reader::ChunkVariable::name, "name"),
	NULL
};

