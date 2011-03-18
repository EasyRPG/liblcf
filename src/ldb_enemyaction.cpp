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
/// Read EnemyAction
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(EnemyAction, WithID)

EASYRPG_STRUCT_NAME(EnemyAction)

template <>
const Field<RPG::EnemyAction>* Struct<RPG::EnemyAction>::fields[] = {
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::kind,				LDB_Reader::ChunkEnemyAction::kind,					"kind"				),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::basic,				LDB_Reader::ChunkEnemyAction::basic,				"basic"				),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::skill_id,			LDB_Reader::ChunkEnemyAction::skill_id,				"skill_id"			),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::enemy_id,			LDB_Reader::ChunkEnemyAction::enemy_id,				"enemy_id"			),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::condition_type,		LDB_Reader::ChunkEnemyAction::condition_type,		"condition_type"	),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::condition_param1,	LDB_Reader::ChunkEnemyAction::condition_param1,		"condition_param1"	),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::condition_param2,	LDB_Reader::ChunkEnemyAction::condition_param2,		"condition_param2"	),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::switch_id,			LDB_Reader::ChunkEnemyAction::switch_id,			"switch_id"			),
	new TypedField<RPG::EnemyAction, bool>	(&RPG::EnemyAction::switch_on,			LDB_Reader::ChunkEnemyAction::switch_on,			"switch_on"			),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::switch_on_id,		LDB_Reader::ChunkEnemyAction::switch_on_id,			"switch_on_id"		),
	new TypedField<RPG::EnemyAction, bool>	(&RPG::EnemyAction::switch_off,			LDB_Reader::ChunkEnemyAction::switch_off,			"switch_off"		),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::switch_off_id,		LDB_Reader::ChunkEnemyAction::switch_off_id,		"switch_off_id"		),
	new TypedField<RPG::EnemyAction, int>	(&RPG::EnemyAction::rating,				LDB_Reader::ChunkEnemyAction::rating,				"rating"			),
};
