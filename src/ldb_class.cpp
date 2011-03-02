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
/// Read Class
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::Class>::ReadID(RPG::Class& obj, Reader& stream) {
	IDReader<RPG::Class, WithID>::ReadID(obj, stream);
}

template <>
struct TypeReader<RPG::Class::Parameters> {
	static inline void ReadLcf(RPG::Class::Parameters& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		int n = chunk_info.length / 6;
		stream.Read16(ref.maxhp, n);
		stream.Read16(ref.maxsp, n);
		stream.Read16(ref.attack, n);
		stream.Read16(ref.defense, n);
		stream.Read16(ref.spirit, n);
		stream.Read16(ref.agility, n);
	}
};

template <>
const Field<RPG::Class>* Struct<RPG::Class>::fields[] = {
	new TypedField<RPG::Class, std::string>					(&RPG::Class::name				, LDB_Reader::ChunkClass::name					, "name"				),
	new TypedField<RPG::Class, bool>						(&RPG::Class::two_swords_style	, LDB_Reader::ChunkClass::two_swords_style		, "two_swords_style"	),
	new TypedField<RPG::Class, bool>						(&RPG::Class::fix_equipment		, LDB_Reader::ChunkClass::fix_equipment			, "fix_equipment"		),
	new TypedField<RPG::Class, bool>						(&RPG::Class::auto_battle		, LDB_Reader::ChunkClass::auto_battle			, "auto_battle"			),
	new TypedField<RPG::Class, bool>						(&RPG::Class::super_guard		, LDB_Reader::ChunkClass::super_guard			, "super_guard"			),
	new TypedField<RPG::Class, RPG::Class::Parameters>		(&RPG::Class::parameters		, LDB_Reader::ChunkClass::parameters			, "parameters"			),
	new TypedField<RPG::Class, int>							(&RPG::Class::exp_base			, LDB_Reader::ChunkClass::exp_base				, "exp_base"			),
	new TypedField<RPG::Class, int>							(&RPG::Class::exp_inflation		, LDB_Reader::ChunkClass::exp_inflation			, "exp_inflation"		),
	new TypedField<RPG::Class, int>							(&RPG::Class::exp_correction	, LDB_Reader::ChunkClass::exp_correction		, "exp_correction"		),
	new TypedField<RPG::Class, int>							(&RPG::Class::unarmed_animation , LDB_Reader::ChunkClass::unarmed_animation 	, "unarmed_animation"	),
	new TypedField<RPG::Class, std::vector<RPG::Learning> > (&RPG::Class::skills			, LDB_Reader::ChunkClass::skills				, "skills"				),
	new TypedField<RPG::Class, int>							(NULL							, LDB_Reader::ChunkClass::state_ranks_size		, ""					),
	new TypedField<RPG::Class, std::vector<unsigned char> > (&RPG::Class::state_ranks		, LDB_Reader::ChunkClass::state_ranks			, "state_ranks"			),
	new TypedField<RPG::Class, int>							(NULL							, LDB_Reader::ChunkClass::attribute_ranks_size	, ""					),
	new TypedField<RPG::Class, std::vector<unsigned char> > (&RPG::Class::attribute_ranks	, LDB_Reader::ChunkClass::attribute_ranks		, "attribute_ranks"		),
	new TypedField<RPG::Class, std::vector<uint32_t> >		(&RPG::Class::battle_commands	, LDB_Reader::ChunkClass::battle_commands		, "battle_commands"		),
	NULL
};
