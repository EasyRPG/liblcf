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
/// Read TestBattler
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::TestBattler>::ReadID(RPG::TestBattler& obj, Reader& stream) {
	IDReader<RPG::TestBattler, SkipID>::ReadID(obj, stream);
}

template <>
const Field<RPG::TestBattler>* Struct<RPG::TestBattler>::fields[] = {
	new TypedField<RPG::TestBattler, int>	(&RPG::TestBattler::ID,				LDB_Reader::ChunkTestBattler::ID,			"ID"			),
	new TypedField<RPG::TestBattler, int>	(&RPG::TestBattler::level,			LDB_Reader::ChunkTestBattler::level,		"level"			),
	new TypedField<RPG::TestBattler, int>	(&RPG::TestBattler::weapon_id,		LDB_Reader::ChunkTestBattler::weapon_id,	"weapon_id"		),
	new TypedField<RPG::TestBattler, int>	(&RPG::TestBattler::shield_id,		LDB_Reader::ChunkTestBattler::shield_id,	"shield_id"		),
	new TypedField<RPG::TestBattler, int>	(&RPG::TestBattler::armor_id,		LDB_Reader::ChunkTestBattler::armor_id,		"armor_id"		),
	new TypedField<RPG::TestBattler, int>	(&RPG::TestBattler::helmet_id,		LDB_Reader::ChunkTestBattler::helmet_id,	"helmet_id"		),
	new TypedField<RPG::TestBattler, int>	(&RPG::TestBattler::accessory_id,	LDB_Reader::ChunkTestBattler::accessory_id,	"accessory_id"	),
	NULL
};
