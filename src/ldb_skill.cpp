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
/// Read Skill
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Skill, WithID)

EASYRPG_STRUCT_NAME(Skill)

template <>
const Field<RPG::Skill>* Struct<RPG::Skill>::fields[] = {
	new TypedField<RPG::Skill, std::string>			(&RPG::Skill::name,					LDB_Reader::ChunkSkill::name,					"name"					),
	new TypedField<RPG::Skill, std::string>			(&RPG::Skill::description,			LDB_Reader::ChunkSkill::description,			"description"			),
	new TypedField<RPG::Skill, std::string>			(&RPG::Skill::using_message1,		LDB_Reader::ChunkSkill::using_message1,			"using_message1"		),
	new TypedField<RPG::Skill, std::string>			(&RPG::Skill::using_message2,		LDB_Reader::ChunkSkill::using_message2,			"using_message2"		),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::failure_message,		LDB_Reader::ChunkSkill::failure_message,		"failure_message"		),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::type,					LDB_Reader::ChunkSkill::type,					"type"					),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::sp_type,				LDB_Reader::ChunkSkill::sp_type,				"sp_type"				),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::sp_percent,			LDB_Reader::ChunkSkill::sp_percent,				"sp_percent"			),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::sp_cost,				LDB_Reader::ChunkSkill::sp_cost,				"sp_cost"				),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::scope,				LDB_Reader::ChunkSkill::scope,					"scope"					),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::switch_id,			LDB_Reader::ChunkSkill::switch_id,				"switch_id"				),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::animation_id,			LDB_Reader::ChunkSkill::animation_id,			"animation_id"			),
	new TypedField<RPG::Skill, RPG::Sound>			(&RPG::Skill::sound_effect,			LDB_Reader::ChunkSkill::sound_effect,			"sound_effect"			),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::occasion_field,		LDB_Reader::ChunkSkill::occasion_field,			"occasion_field"		),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::occasion_battle,		LDB_Reader::ChunkSkill::occasion_battle,		"occasion_battle"		),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::state_effect,			LDB_Reader::ChunkSkill::state_effect,			"state_effect"			),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::pdef_f,				LDB_Reader::ChunkSkill::pdef_f,					"pdef_f"				),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::mdef_f,				LDB_Reader::ChunkSkill::mdef_f,					"mdef_f"				),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::variance,				LDB_Reader::ChunkSkill::variance,				"variance"				),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::power,				LDB_Reader::ChunkSkill::power,					"power"					),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::hit,					LDB_Reader::ChunkSkill::hit,					"hit"					),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::affect_hp,			LDB_Reader::ChunkSkill::affect_hp,				"affect_hp"				),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::affect_sp,			LDB_Reader::ChunkSkill::affect_sp,				"affect_sp"				),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::affect_attack,		LDB_Reader::ChunkSkill::affect_attack,			"affect_attack"			),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::affect_defense,		LDB_Reader::ChunkSkill::affect_defense,			"affect_defense"		),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::affect_spirit,		LDB_Reader::ChunkSkill::affect_spirit,			"affect_spirit"			),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::affect_agility,		LDB_Reader::ChunkSkill::affect_agility,			"affect_agility"		),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::absorb_damage,		LDB_Reader::ChunkSkill::absorb_damage,			"absorb_damage"			),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::ignore_defense,		LDB_Reader::ChunkSkill::ignore_defense,			"ignore_defense"		),
	new SizeField<RPG::Skill, bool>					(&RPG::Skill::state_effects,		LDB_Reader::ChunkSkill::state_size										),
	new TypedField<RPG::Skill, std::vector<bool> >	(&RPG::Skill::state_effects,		LDB_Reader::ChunkSkill::state_effects,			"state_effects"			),
	new SizeField<RPG::Skill, bool>					(&RPG::Skill::attribute_effects,	LDB_Reader::ChunkSkill::attribute_size									),
	new TypedField<RPG::Skill, std::vector<bool> >	(&RPG::Skill::attribute_effects,	LDB_Reader::ChunkSkill::attribute_effects,		"attribute_effects"		),
	new TypedField<RPG::Skill, bool>				(&RPG::Skill::affect_attr_defence,	LDB_Reader::ChunkSkill::affect_attr_defence,	"affect_attr_defence"	),
	new TypedField<RPG::Skill, int>					(&RPG::Skill::battler_animation,	LDB_Reader::ChunkSkill::battler_animation,		"battler_animation"		),
	new TypedField<RPG::Skill, std::vector<RPG::BattlerAnimationData> >	(&RPG::Skill::battler_animation_data,	LDB_Reader::ChunkSkill::battler_animation_data,	"battler_animation_data"),
	NULL
};
