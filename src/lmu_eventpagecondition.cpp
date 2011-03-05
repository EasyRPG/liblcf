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
template <>
struct TypeReader<RPG::EventPageCondition::Flags> {
	static inline void ReadLcf(RPG::EventPageCondition::Flags& ref, LcfReader& stream, uint32_t length) {
		assert(length == 1);
		uint8_t bitflag = stream.Read8();
		ref.switch_a	= (bitflag & 0x01) != 0;
		ref.switch_b	= (bitflag & 0x02) != 0;
		ref.variable	= (bitflag & 0x04) != 0;
		ref.item		= (bitflag & 0x08) != 0;
		ref.actor		= (bitflag & 0x10) != 0;
		ref.timer		= (bitflag & 0x20) != 0;
		ref.timer2		= (bitflag & 0x40) != 0;
	}
	static inline void WriteLcf(const RPG::EventPageCondition::Flags& ref, LcfWriter& stream) {
		uint8_t bitflag = 0;
		if (ref.switch_a	) bitflag |= 0x01;
		if (ref.switch_b	) bitflag |= 0x02;
		if (ref.variable	) bitflag |= 0x04;
		if (ref.item		) bitflag |= 0x08;
		if (ref.actor		) bitflag |= 0x10;
		if (ref.timer		) bitflag |= 0x20;
		if (ref.timer2		) bitflag |= 0x40;
		stream.Write8(bitflag);
	}
	static inline int LcfSize(const RPG::EventPageCondition::Flags& ref, LcfWriter& stream) {
		return 1;
	}
	static inline void WriteXml(const RPG::EventPageCondition::Flags& ref, XmlWriter& stream) {
		stream.BeginElement("EventPageCondition_Flags");
		stream.WriteNode<bool>("switch_a", ref.switch_a);
		stream.WriteNode<bool>("switch_b", ref.switch_b);
		stream.WriteNode<bool>("variable", ref.variable);
		stream.WriteNode<bool>("item", ref.item);
		stream.WriteNode<bool>("actor", ref.actor);
		stream.WriteNode<bool>("timer", ref.timer);
		stream.WriteNode<bool>("timer2", ref.timer2);
		stream.EndElement("EventPageCondition_Flags");
	}
};

template <>
IDReader<RPG::EventPageCondition>* Struct<RPG::EventPageCondition>::ID_reader = new IDReaderT<RPG::EventPageCondition, NoID>();

template <>
const std::string Struct<RPG::EventPageCondition>::name("EventPageCondition");

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
	new TypedField<RPG::EventPageCondition, RPG::EventPageCondition::Flags>(&RPG::EventPageCondition::flags,	LMU_Reader::ChunkEventPageCondition::flags,	"flags"),
	NULL
};
