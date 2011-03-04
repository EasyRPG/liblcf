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
/// Read TroopPageCondition
////////////////////////////////////////////////////////////
template <>
struct TypeReader<RPG::TroopPageCondition::Flags> {
	static inline void ReadLcf(RPG::TroopPageCondition::Flags& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		uint8_t bitflag = stream.Read8();
		ref.switch_a		= (bitflag & 0x01) != 0;
		ref.switch_b		= (bitflag & 0x02) != 0;
		ref.variable		= (bitflag & 0x04) != 0;
		ref.turn			= (bitflag & 0x08) != 0;
		ref.fatigue			= (bitflag & 0x10) != 0;
		ref.enemy_hp		= (bitflag & 0x20) != 0;
		ref.actor_hp		= (bitflag & 0x40) != 0;
		ref.turn_enemy		= (bitflag & 0x80) != 0;
	
		if (chunk_info.length < 2)
			return;

		bitflag = stream.Read8();
		ref.turn_actor		= (bitflag & 0x01) != 0;
		ref.command_actor	= (bitflag & 0x02) != 0;
	}
	static inline void WriteLcf(const RPG::TroopPageCondition::Flags& ref, Writer& stream) {
		uint8_t bitflag1 = 0;
		if (ref.switch_a	) bitflag1 |= 0x01;
		if (ref.switch_b	) bitflag1 |= 0x02;
		if (ref.variable	) bitflag1 |= 0x04;
		if (ref.turn		) bitflag1 |= 0x08;
		if (ref.fatigue		) bitflag1 |= 0x10;
		if (ref.enemy_hp	) bitflag1 |= 0x20;
		if (ref.actor_hp	) bitflag1 |= 0x40;
		if (ref.turn_enemy	) bitflag1 |= 0x80;
		stream.Write8(bitflag1);

		uint8_t bitflag2 = 0;
		if (ref.turn_actor		) bitflag2 |= 0x01;
		if (ref.command_actor	) bitflag2 |= 0x02;
		if (bitflag2 == 0)
			return;
		stream.Write8(bitflag2);
	}
	static inline int LcfSize(const RPG::TroopPageCondition::Flags& ref, Writer& stream) {
		return (ref.turn_actor || ref.command_actor) ? 2 : 1;
	}
};

template <>
IDReader<RPG::TroopPageCondition>* Struct<RPG::TroopPageCondition>::ID_reader = new IDReaderT<RPG::TroopPageCondition, NoID>();

template <>
const Field<RPG::TroopPageCondition>* Struct<RPG::TroopPageCondition>::fields[] = {
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::switch_a_id,			LDB_Reader::ChunkTroopPageCondition::switch_a_id,		"switch_a_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::switch_b_id,			LDB_Reader::ChunkTroopPageCondition::switch_b_id,		"switch_b_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::variable_id,			LDB_Reader::ChunkTroopPageCondition::variable_id,		"variable_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::variable_value,		LDB_Reader::ChunkTroopPageCondition::variable_value,	"variable_value"	),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_a,				LDB_Reader::ChunkTroopPageCondition::turn_a,			"turn_a"			),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_b,				LDB_Reader::ChunkTroopPageCondition::turn_b,			"turn_b"			),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::fatigue_min,			LDB_Reader::ChunkTroopPageCondition::fatigue_min,		"fatigue_min"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::fatigue_max,			LDB_Reader::ChunkTroopPageCondition::fatigue_max,		"fatigue_max"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::enemy_id,			LDB_Reader::ChunkTroopPageCondition::enemy_id,			"enemy_id"			),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::enemy_hp_min,		LDB_Reader::ChunkTroopPageCondition::enemy_hp_min,		"enemy_hp_min"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::enemy_hp_max,		LDB_Reader::ChunkTroopPageCondition::enemy_hp_max,		"enemy_hp_max"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::actor_id,			LDB_Reader::ChunkTroopPageCondition::actor_id,			"actor_id"			),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::actor_hp_min,		LDB_Reader::ChunkTroopPageCondition::actor_hp_min,		"actor_hp_min"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::actor_hp_max,		LDB_Reader::ChunkTroopPageCondition::actor_hp_max,		"actor_hp_max"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_enemy_id,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_id,		"turn_enemy_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_enemy_a,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_a,		"turn_enemy_a"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_enemy_b,		LDB_Reader::ChunkTroopPageCondition::turn_enemy_b,		"turn_enemy_b"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_actor_id,		LDB_Reader::ChunkTroopPageCondition::turn_actor_id,		"turn_actor_id"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_actor_a,		LDB_Reader::ChunkTroopPageCondition::turn_actor_a,		"turn_actor_a"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::turn_actor_b,		LDB_Reader::ChunkTroopPageCondition::turn_actor_b,		"turn_actor_b"		),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::command_actor_id,	LDB_Reader::ChunkTroopPageCondition::command_actor_id,	"command_actor_id"	),
	new TypedField<RPG::TroopPageCondition, int>	(&RPG::TroopPageCondition::command_id,			LDB_Reader::ChunkTroopPageCondition::command_id,		"command_id"		),
	new TypedField<RPG::TroopPageCondition, RPG::TroopPageCondition::Flags>	(&RPG::TroopPageCondition::flags,	LDB_Reader::ChunkTroopPageCondition::flags,	"flags"				),
	NULL
};
