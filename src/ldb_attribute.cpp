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
/// Read Attribute
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::Attribute>* Struct<RPG::Attribute>::ID_reader = new IDReaderT<RPG::Attribute, WithID>();

template <>
const std::string Struct<RPG::Attribute>::name("Attribute");

template <>
const Field<RPG::Attribute>* Struct<RPG::Attribute>::fields[] = {
	new TypedField<RPG::Attribute, std::string>	(&RPG::Attribute::name,		LDB_Reader::ChunkAttribute::name,	"name"		),
	new TypedField<RPG::Attribute, int>			(&RPG::Attribute::type,		LDB_Reader::ChunkAttribute::type,	"type"		),
	new TypedField<RPG::Attribute, int>			(&RPG::Attribute::a_rate,	LDB_Reader::ChunkAttribute::a_rate,	"a_rate"	),
	new TypedField<RPG::Attribute, int>			(&RPG::Attribute::b_rate,	LDB_Reader::ChunkAttribute::b_rate,	"b_rate"	),
	new TypedField<RPG::Attribute, int>			(&RPG::Attribute::c_rate,	LDB_Reader::ChunkAttribute::c_rate,	"c_rate"	),
	new TypedField<RPG::Attribute, int>			(&RPG::Attribute::d_rate,	LDB_Reader::ChunkAttribute::d_rate,	"d_rate"	),
	new TypedField<RPG::Attribute, int>			(&RPG::Attribute::e_rate,	LDB_Reader::ChunkAttribute::e_rate,	"e_rate"	),
	NULL
};
