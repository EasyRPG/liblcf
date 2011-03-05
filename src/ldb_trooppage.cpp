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
#include "event_reader.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read TroopPage
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::TroopPage>* Struct<RPG::TroopPage>::ID_reader = new IDReaderT<RPG::TroopPage, WithID>();

template <>
const std::string Struct<RPG::TroopPage>::name("TroopPage");

template <>
const Field<RPG::TroopPage>* Struct<RPG::TroopPage>::fields[] = {
	new TypedField<RPG::TroopPage, RPG::TroopPageCondition>			(&RPG::TroopPage::condition,			LDB_Reader::ChunkTroopPage::condition,				"condition"			),
	new SizeField<RPG::TroopPage, RPG::EventCommand>				(&RPG::TroopPage::event_commands,		LDB_Reader::ChunkTroopPage::event_commands_size							),
	new TypedField<RPG::TroopPage, std::vector<RPG::EventCommand> >	(&RPG::TroopPage::event_commands,		LDB_Reader::ChunkTroopPage::event_commands,			"event_commands"	),
	NULL
};

