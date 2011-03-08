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
/// Read TroopPageCondition
////////////////////////////////////////////////////////////
typedef RPG::TroopPageCondition::Flags flags_type;

template <>
char const* const Flags<flags_type>::name("TroopPageCondition_Flags");

template <>
const Flags<flags_type>::Flag* Flags<flags_type>::flags[] = {
	new Flags<flags_type>::Flag(&flags_type::switch_a,		"switch_a"		),
	new Flags<flags_type>::Flag(&flags_type::switch_b,		"switch_b"		),
	new Flags<flags_type>::Flag(&flags_type::variable,		"variable"		),
	new Flags<flags_type>::Flag(&flags_type::turn,			"turn"			),
	new Flags<flags_type>::Flag(&flags_type::fatigue,		"fatigue"		),
	new Flags<flags_type>::Flag(&flags_type::enemy_hp,		"enemy_hp"		),
	new Flags<flags_type>::Flag(&flags_type::actor_hp,		"actor_hp"		),
	new Flags<flags_type>::Flag(&flags_type::turn_enemy,	"turn_enemy"	),
	new Flags<flags_type>::Flag(&flags_type::turn_actor,	"turn_actor"	),
	new Flags<flags_type>::Flag(&flags_type::command_actor,	"command_actor"	),
	NULL
};

template <>
const uint32_t Flags<flags_type>::max_size = 2;

template <>
IDReader<RPG::TroopPageCondition>* Struct<RPG::TroopPageCondition>::ID_reader = new IDReaderT<RPG::TroopPageCondition, NoID>();

template <>
char const* const Struct<RPG::TroopPageCondition>::name("TroopPageCondition");

template <>
const Field<RPG::TroopPageCondition>* Struct<RPG::TroopPageCondition>::fields[] = {
	new TypedField<RPG::TroopPageCondition, flags_type>	(&RPG::TroopPageCondition::flags,				LDB_Reader::ChunkTroopPageCondition::flags,				"flags"				),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::switch_a_id,			LDB_Reader::ChunkTroopPageCondition::switch_a_id,		"switch_a_id"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::switch_b_id,			LDB_Reader::ChunkTroopPageCondition::switch_b_id,		"switch_b_id"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::variable_id,			LDB_Reader::ChunkTroopPageCondition::variable_id,		"variable_id"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::variable_value,		LDB_Reader::ChunkTroopPageCondition::variable_value,	"variable_value"	),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::turn_a,				LDB_Reader::ChunkTroopPageCondition::turn_a,			"turn_a"			),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::turn_b,				LDB_Reader::ChunkTroopPageCondition::turn_b,			"turn_b"			),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::fatigue_min,			LDB_Reader::ChunkTroopPageCondition::fatigue_min,		"fatigue_min"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::fatigue_max,			LDB_Reader::ChunkTroopPageCondition::fatigue_max,		"fatigue_max"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::enemy_id,			LDB_Reader::ChunkTroopPageCondition::enemy_id,			"enemy_id"			),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::enemy_hp_min,		LDB_Reader::ChunkTroopPageCondition::enemy_hp_min,		"enemy_hp_min"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::enemy_hp_max,		LDB_Reader::ChunkTroopPageCondition::enemy_hp_max,		"enemy_hp_max"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::actor_id,			LDB_Reader::ChunkTroopPageCondition::actor_id,			"actor_id"			),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::actor_hp_min,		LDB_Reader::ChunkTroopPageCondition::actor_hp_min,		"actor_hp_min"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::actor_hp_max,		LDB_Reader::ChunkTroopPageCondition::actor_hp_max,		"actor_hp_max"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::turn_enemy_id,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_id,		"turn_enemy_id"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::turn_enemy_a,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_a,		"turn_enemy_a"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::turn_enemy_b,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_b,		"turn_enemy_b"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::turn_actor_id,		LDB_Reader::ChunkTroopPageCondition::turn_actor_id,		"turn_actor_id"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::turn_actor_a,		LDB_Reader::ChunkTroopPageCondition::turn_actor_a,		"turn_actor_a"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::turn_actor_b,		LDB_Reader::ChunkTroopPageCondition::turn_actor_b,		"turn_actor_b"		),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::command_actor_id,	LDB_Reader::ChunkTroopPageCondition::command_actor_id,	"command_actor_id"	),
	new TypedField<RPG::TroopPageCondition, int>		(&RPG::TroopPageCondition::command_id,			LDB_Reader::ChunkTroopPageCondition::command_id,		"command_id"		),
	NULL
};
