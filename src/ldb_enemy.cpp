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
/// Read Enemy
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Enemy, WithID)

EASYRPG_STRUCT_NAME(Enemy)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Enemy

EASYRPG_STRUCT_FIELDS_BEGIN(Enemy)
	new TypedField<RPG::Enemy, std::string>						(&RPG::Enemy::name,					LDB_Reader::ChunkEnemy::name,					"name"					),
	new TypedField<RPG::Enemy, std::string>						(&RPG::Enemy::battler_name,			LDB_Reader::ChunkEnemy::battler_name,			"battler_name"			),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::battler_hue,			LDB_Reader::ChunkEnemy::battler_hue,			"battler_hue"			),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::max_hp,				LDB_Reader::ChunkEnemy::max_hp,					"max_hp"				),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::max_sp,				LDB_Reader::ChunkEnemy::max_sp,					"max_sp"				),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::attack,				LDB_Reader::ChunkEnemy::attack,					"attack"				),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::defense,				LDB_Reader::ChunkEnemy::defense,				"defense"				),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::spirit,				LDB_Reader::ChunkEnemy::spirit,					"spirit"				),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::agility,				LDB_Reader::ChunkEnemy::agility,				"agility"				),
	new TypedField<RPG::Enemy, bool>							(&RPG::Enemy::transparent,			LDB_Reader::ChunkEnemy::transparent,			"transparent"			),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::exp,					LDB_Reader::ChunkEnemy::exp,					"exp"					),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::gold,					LDB_Reader::ChunkEnemy::gold,					"gold"					),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::drop_id,				LDB_Reader::ChunkEnemy::drop_id,				"drop_id"				),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::drop_prob,			LDB_Reader::ChunkEnemy::drop_prob,				"drop_prob"				),
	new TypedField<RPG::Enemy, bool>							(&RPG::Enemy::critical_hit,			LDB_Reader::ChunkEnemy::critical_hit,			"critical_hit"			),
	new TypedField<RPG::Enemy, int>								(&RPG::Enemy::critical_hit_chance,	LDB_Reader::ChunkEnemy::critical_hit_chance,	"critical_hit_chance"	),
	new TypedField<RPG::Enemy, bool>							(&RPG::Enemy::miss,					LDB_Reader::ChunkEnemy::miss,					"miss"					),
	new TypedField<RPG::Enemy, bool>							(&RPG::Enemy::levitate,				LDB_Reader::ChunkEnemy::levitate,				"levitate"				),
	new SizeField<RPG::Enemy, uint8_t>							(&RPG::Enemy::state_ranks,			LDB_Reader::ChunkEnemy::state_ranks_size								),
	new TypedField<RPG::Enemy, std::vector<uint8_t> >			(&RPG::Enemy::state_ranks,			LDB_Reader::ChunkEnemy::state_ranks,			"state_ranks"			),
	new SizeField<RPG::Enemy, uint8_t>							(&RPG::Enemy::attribute_ranks,		LDB_Reader::ChunkEnemy::attribute_ranks_size							),
	new TypedField<RPG::Enemy, std::vector<uint8_t> >			(&RPG::Enemy::attribute_ranks,		LDB_Reader::ChunkEnemy::attribute_ranks,		"attribute_ranks"		),
	new TypedField<RPG::Enemy, std::vector<RPG::EnemyAction> >	(&RPG::Enemy::actions,				LDB_Reader::ChunkEnemy::actions,				"actions"				),
};
