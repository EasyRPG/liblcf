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
/// Read Chipset
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::Chipset>* Struct<RPG::Chipset>::ID_reader = new IDReaderT<RPG::Chipset, WithID>();

template <>
char const* const Struct<RPG::Chipset>::name("Chipset");

template <>
const Field<RPG::Chipset>* Struct<RPG::Chipset>::fields[] = {
	new TypedField<RPG::Chipset, std::string>			(&RPG::Chipset::name,					LDB_Reader::ChunkChipset::name,					"name"					),
	new TypedField<RPG::Chipset, std::string>			(&RPG::Chipset::chipset_name,			LDB_Reader::ChunkChipset::chipset_name,			"chipset_name"			),
	new TypedField<RPG::Chipset, std::vector<int16_t> >	(&RPG::Chipset::terrain_data,			LDB_Reader::ChunkChipset::terrain_data,			"terrain_data"			),
	new TypedField<RPG::Chipset, std::vector<uint8_t> >	(&RPG::Chipset::passable_data_lower,	LDB_Reader::ChunkChipset::passable_data_lower,	"passable_data_lower"	),
	new TypedField<RPG::Chipset, std::vector<uint8_t> >	(&RPG::Chipset::passable_data_upper,	LDB_Reader::ChunkChipset::passable_data_upper,	"passable_data_upper"	),
	new TypedField<RPG::Chipset, int>					(&RPG::Chipset::animation_type,			LDB_Reader::ChunkChipset::animation_type,		"animation_type"		),
	new TypedField<RPG::Chipset, int>					(&RPG::Chipset::animation_speed,		LDB_Reader::ChunkChipset::animation_speed,		"animation_speed"		),
	NULL
};
