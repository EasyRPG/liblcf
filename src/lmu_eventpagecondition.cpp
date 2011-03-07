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
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Event Page Condition
////////////////////////////////////////////////////////////
typedef RPG::EventPageCondition::Flags flags_type;

template <>
char const* const Flags<flags_type>::name("EventPageCondition_Flags");

template <>
const Flags<flags_type>::Flag* Flags<flags_type>::flags[] = {
	new Flags<flags_type>::Flag(&flags_type::switch_a,	"switch_a"	),
	new Flags<flags_type>::Flag(&flags_type::switch_b,	"switch_b"	),
	new Flags<flags_type>::Flag(&flags_type::variable,	"variable"	),
	new Flags<flags_type>::Flag(&flags_type::item,		"item"		),
	new Flags<flags_type>::Flag(&flags_type::actor,		"actor"		),
	new Flags<flags_type>::Flag(&flags_type::timer,		"timer"		),
	new Flags<flags_type>::Flag(&flags_type::timer2,	"timer2"	),
	NULL
};

template <>
const uint32_t Flags<flags_type>::max_size = 1;

template <>
IDReader<RPG::EventPageCondition>* Struct<RPG::EventPageCondition>::ID_reader = new IDReaderT<RPG::EventPageCondition, NoID>();

template <>
char const* const Struct<RPG::EventPageCondition>::name("EventPageCondition");

template <>
const Field<RPG::EventPageCondition>* Struct<RPG::EventPageCondition>::fields[] = {
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::switch_a_id,			LMU_Reader::ChunkEventPageCondition::switch_a_id,		"switch_a_id"		),
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::switch_b_id,			LMU_Reader::ChunkEventPageCondition::switch_b_id,		"switch_b_id"		),
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::variable_id,			LMU_Reader::ChunkEventPageCondition::variable_id,		"variable_id"		),
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::variable_value,		LMU_Reader::ChunkEventPageCondition::variable_value,	"variable_value"	),
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::item_id,				LMU_Reader::ChunkEventPageCondition::item_id,			"item_id"			),
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::actor_id,			LMU_Reader::ChunkEventPageCondition::actor_id,			"actor_id"			),
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::timer_sec,			LMU_Reader::ChunkEventPageCondition::timer_sec,			"timer_sec"			),
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::timer2_sec,			LMU_Reader::ChunkEventPageCondition::timer2_sec,		"timer2_sec"		),
	new TypedField<RPG::EventPageCondition, int>	(&RPG::EventPageCondition::compare_operator,	LMU_Reader::ChunkEventPageCondition::compare_operator,	"compare_operator"	),
	new TypedField<RPG::EventPageCondition, flags_type>(&RPG::EventPageCondition::flags,	LMU_Reader::ChunkEventPageCondition::flags,	"flags"),
	NULL
};
