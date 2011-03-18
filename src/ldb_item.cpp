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
/// Read Item
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Item, WithID)

EASYRPG_STRUCT_NAME(Item)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Item

EASYRPG_STRUCT_FIELDS_BEGIN(Item)
	new TypedField<RPG::Item, std::string>						(&RPG::Item::name,				LDB_Reader::ChunkItem::name,				"name"				),
	new TypedField<RPG::Item, std::string>						(&RPG::Item::description,		LDB_Reader::ChunkItem::description,			"description"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::type,				LDB_Reader::ChunkItem::type,				"type"				),
	new TypedField<RPG::Item, int>								(&RPG::Item::price,				LDB_Reader::ChunkItem::price,				"price"				),
	new TypedField<RPG::Item, int>								(&RPG::Item::uses,				LDB_Reader::ChunkItem::uses,				"uses"				),
	new TypedField<RPG::Item, int>								(&RPG::Item::atk_points1,		LDB_Reader::ChunkItem::atk_points1,			"atk_points1"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::def_points1,		LDB_Reader::ChunkItem::def_points1,			"def_points1"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::spi_points1,		LDB_Reader::ChunkItem::spi_points1,			"spi_points1"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::agi_points1,		LDB_Reader::ChunkItem::agi_points1,			"agi_points1"		),
	new TypedField<RPG::Item, bool>								(&RPG::Item::two_handed,		LDB_Reader::ChunkItem::two_handed,			"two_handed"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::sp_cost,			LDB_Reader::ChunkItem::sp_cost,				"sp_cost"			),
	new TypedField<RPG::Item, int>								(&RPG::Item::hit,				LDB_Reader::ChunkItem::hit,					"hit"				),
	new TypedField<RPG::Item, int>								(&RPG::Item::critical_hit,		LDB_Reader::ChunkItem::critical_hit,		"critical_hit"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::animation_id,		LDB_Reader::ChunkItem::animation_id,		"animation_id"		),
	new TypedField<RPG::Item, bool>								(&RPG::Item::preemptive,		LDB_Reader::ChunkItem::preemptive,			"preemptive"		),
	new TypedField<RPG::Item, bool>								(&RPG::Item::dual_attack,		LDB_Reader::ChunkItem::dual_attack,			"dual_attack"		),
	new TypedField<RPG::Item, bool>								(&RPG::Item::attack_all,		LDB_Reader::ChunkItem::attack_all,			"attack_all"		),
	new TypedField<RPG::Item, bool>								(&RPG::Item::ignore_evasion,	LDB_Reader::ChunkItem::ignore_evasion,		"ignore_evasion"	),
	new TypedField<RPG::Item, bool>								(&RPG::Item::prevent_critical,	LDB_Reader::ChunkItem::prevent_critical,	"prevent_critical"	),
	new TypedField<RPG::Item, bool>								(&RPG::Item::raise_evasion,		LDB_Reader::ChunkItem::raise_evasion,		"raise_evasion"		),
	new TypedField<RPG::Item, bool>								(&RPG::Item::half_sp_cost,		LDB_Reader::ChunkItem::half_sp_cost,		"half_sp_cost"		),
	new TypedField<RPG::Item, bool>								(&RPG::Item::no_terrain_damage,	LDB_Reader::ChunkItem::no_terrain_damage,	"no_terrain_damage"	),
	new TypedField<RPG::Item, bool>								(&RPG::Item::cursed,			LDB_Reader::ChunkItem::cursed,				"cursed"			),
	new TypedField<RPG::Item, bool>								(&RPG::Item::entire_party,		LDB_Reader::ChunkItem::entire_party,		"entire_party"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::recover_hp,		LDB_Reader::ChunkItem::recover_hp,			"recover_hp"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::recover_hp_rate,	LDB_Reader::ChunkItem::recover_hp_rate,		"recover_hp_rate"	),
	new TypedField<RPG::Item, int>								(&RPG::Item::recover_sp,		LDB_Reader::ChunkItem::recover_sp,			"recover_sp"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::recover_sp_rate,	LDB_Reader::ChunkItem::recover_sp_rate,		"recover_sp_rate"	),
	new TypedField<RPG::Item, bool>								(&RPG::Item::occasion_field1,	LDB_Reader::ChunkItem::occasion_field1,		"occasion_field1"	),
	new TypedField<RPG::Item, bool>								(&RPG::Item::ko_only,			LDB_Reader::ChunkItem::ko_only,				"ko_only"			),
	new TypedField<RPG::Item, int>								(&RPG::Item::max_hp_points,		LDB_Reader::ChunkItem::max_hp_points,		"max_hp_points"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::max_sp_points,		LDB_Reader::ChunkItem::max_sp_points,		"max_sp_points"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::atk_points2,		LDB_Reader::ChunkItem::atk_points2,			"atk_points2"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::def_points2,		LDB_Reader::ChunkItem::def_points2,			"def_points2"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::spi_points2,		LDB_Reader::ChunkItem::spi_points2,			"spi_points2"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::agi_points2,		LDB_Reader::ChunkItem::agi_points2,			"agi_points2"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::using_message,		LDB_Reader::ChunkItem::using_message,		"using_message"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::skill_id,			LDB_Reader::ChunkItem::skill_id,			"skill_id"			),
	new TypedField<RPG::Item, int>								(&RPG::Item::switch_id,			LDB_Reader::ChunkItem::switch_id,			"switch_id"			),
	new TypedField<RPG::Item, bool>								(&RPG::Item::occasion_field2,	LDB_Reader::ChunkItem::occasion_field2,		"occasion_field2"	),
	new TypedField<RPG::Item, bool>								(&RPG::Item::occasion_battle,	LDB_Reader::ChunkItem::occasion_battle,		"occasion_battle"	),
	new SizeField<RPG::Item, bool>								(&RPG::Item::actor_set,			LDB_Reader::ChunkItem::actor_set_size		),
	new TypedField<RPG::Item, std::vector<bool> >				(&RPG::Item::actor_set,			LDB_Reader::ChunkItem::actor_set,			"actor_set"			),
	new SizeField<RPG::Item, bool>								(&RPG::Item::state_set,			LDB_Reader::ChunkItem::state_set_size		),
	new TypedField<RPG::Item, std::vector<bool> >				(&RPG::Item::state_set,			LDB_Reader::ChunkItem::state_set,			"state_set"			),
	new SizeField<RPG::Item, bool>								(&RPG::Item::attribute_set,		LDB_Reader::ChunkItem::attribute_set_size	),
	new TypedField<RPG::Item, std::vector<bool> >				(&RPG::Item::attribute_set,		LDB_Reader::ChunkItem::attribute_set,		"attribute_set"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::state_chance,		LDB_Reader::ChunkItem::state_chance,		"state_chance"		),
	new TypedField<RPG::Item, bool>								(&RPG::Item::state_effect,		LDB_Reader::ChunkItem::state_effect,		"state_effect"		),
	new TypedField<RPG::Item, int>								(&RPG::Item::weapon_animation,	LDB_Reader::ChunkItem::weapon_animation,	"weapon_animation"	),
	new TypedField<RPG::Item, std::vector<RPG::ItemAnimation> >	(&RPG::Item::animation_data,	LDB_Reader::ChunkItem::animation_data,		"animation_data"	),
	new TypedField<RPG::Item, bool>								(&RPG::Item::use_skill,			LDB_Reader::ChunkItem::use_skill,			"use_skill"			),
	new SizeField<RPG::Item, bool>								(&RPG::Item::class_set,			LDB_Reader::ChunkItem::class_set_size		),
	new TypedField<RPG::Item, std::vector<bool> >				(&RPG::Item::class_set,			LDB_Reader::ChunkItem::class_set,			"class_set"			),
	new TypedField<RPG::Item, int>								(&RPG::Item::ranged_trajectory,	LDB_Reader::ChunkItem::ranged_trajectory,	"ranged_trajectory"	),
	new TypedField<RPG::Item, int>								(&RPG::Item::ranged_target,		LDB_Reader::ChunkItem::ranged_target,		"ranged_target"		),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
