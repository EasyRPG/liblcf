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
/// Read Terms
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Terms, NoID)

EASYRPG_STRUCT_NAME(Terms)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Terms

EASYRPG_STRUCT_FIELDS_BEGIN(Terms)
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::encounter,			LDB_Reader::ChunkTerms::encounter,				"encounter"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::special_combat,		LDB_Reader::ChunkTerms::special_combat,			"special_combat"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::escape_success,		LDB_Reader::ChunkTerms::escape_success,			"escape_success"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::escape_failure,		LDB_Reader::ChunkTerms::escape_failure,			"escape_failure"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::victory,				LDB_Reader::ChunkTerms::victory,				"victory"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::defeat,				LDB_Reader::ChunkTerms::defeat,					"defeat"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::exp_received,			LDB_Reader::ChunkTerms::exp_received,			"exp_received"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::gold_recieved_a,		LDB_Reader::ChunkTerms::gold_recieved_a,		"gold_recieved_a"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::gold_recieved_b,		LDB_Reader::ChunkTerms::gold_recieved_b,		"gold_recieved_b"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::item_recieved,		LDB_Reader::ChunkTerms::item_recieved,			"item_recieved"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::attacking,			LDB_Reader::ChunkTerms::attacking,				"attacking"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::actor_critical,		LDB_Reader::ChunkTerms::actor_critical,			"actor_critical"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::enemy_critical,		LDB_Reader::ChunkTerms::enemy_critical,			"enemy_critical"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::defending,			LDB_Reader::ChunkTerms::defending,				"defending"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::observing,			LDB_Reader::ChunkTerms::observing,				"observing"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::focus,				LDB_Reader::ChunkTerms::focus,					"focus"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::autodestruction,		LDB_Reader::ChunkTerms::autodestruction,		"autodestruction"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::enemy_escape,			LDB_Reader::ChunkTerms::enemy_escape,			"enemy_escape"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::enemy_transform,		LDB_Reader::ChunkTerms::enemy_transform,		"enemy_transform"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::enemy_damaged,		LDB_Reader::ChunkTerms::enemy_damaged,			"enemy_damaged"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::enemy_undamaged,		LDB_Reader::ChunkTerms::enemy_undamaged,		"enemy_undamaged"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::actor_damaged,		LDB_Reader::ChunkTerms::actor_damaged,			"actor_damaged"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::actor_undamaged,		LDB_Reader::ChunkTerms::actor_undamaged,		"actor_undamaged"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::skill_failure_a,		LDB_Reader::ChunkTerms::skill_failure_a,		"skill_failure_a"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::skill_failure_b,		LDB_Reader::ChunkTerms::skill_failure_b,		"skill_failure_b"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::skill_failure_c,		LDB_Reader::ChunkTerms::skill_failure_c,		"skill_failure_c"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::dodge,				LDB_Reader::ChunkTerms::dodge,					"dodge"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::use_item,				LDB_Reader::ChunkTerms::use_item,				"use_item"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::hp_recovery,			LDB_Reader::ChunkTerms::hp_recovery,			"hp_recovery"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::parameter_increase,	LDB_Reader::ChunkTerms::parameter_increase,		"parameter_increase"	),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::parameter_decrease,	LDB_Reader::ChunkTerms::parameter_decrease,		"parameter_decrease"	),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::actor_hp_absorbed,	LDB_Reader::ChunkTerms::actor_hp_absorbed,		"actor_hp_absorbed"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::enemy_hp_absorbed,	LDB_Reader::ChunkTerms::enemy_hp_absorbed,		"enemy_hp_absorbed"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::resistance_increase,	LDB_Reader::ChunkTerms::resistance_increase,	"resistance_increase"	),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::resistance_decrease,	LDB_Reader::ChunkTerms::resistance_decrease,	"resistance_decrease"	),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::level_up,				LDB_Reader::ChunkTerms::level_up,				"level_up"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::skill_learned,		LDB_Reader::ChunkTerms::skill_learned,			"skill_learned"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::battle_start,			LDB_Reader::ChunkTerms::battle_start,			"battle_start"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::miss,					LDB_Reader::ChunkTerms::miss,					"miss"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_greeting1,		LDB_Reader::ChunkTerms::shop_greeting1,			"shop_greeting1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_regreeting1,		LDB_Reader::ChunkTerms::shop_regreeting1,		"shop_regreeting1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy1,			LDB_Reader::ChunkTerms::shop_buy1,				"shop_buy1"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell1,			LDB_Reader::ChunkTerms::shop_sell1,				"shop_sell1"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_leave1,			LDB_Reader::ChunkTerms::shop_leave1,			"shop_leave1"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy_select1,		LDB_Reader::ChunkTerms::shop_buy_select1,		"shop_buy_select1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy_number1,		LDB_Reader::ChunkTerms::shop_buy_number1,		"shop_buy_number1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_purchased1,		LDB_Reader::ChunkTerms::shop_purchased1,		"shop_purchased1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell_select1,	LDB_Reader::ChunkTerms::shop_sell_select1,		"shop_sell_select1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell_number1,	LDB_Reader::ChunkTerms::shop_sell_number1,		"shop_sell_number1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sold1,			LDB_Reader::ChunkTerms::shop_sold1,				"shop_sold1"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_greeting2,		LDB_Reader::ChunkTerms::shop_greeting2,			"shop_greeting2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_regreeting2,		LDB_Reader::ChunkTerms::shop_regreeting2,		"shop_regreeting2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy2,			LDB_Reader::ChunkTerms::shop_buy2,				"shop_buy2"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell2,			LDB_Reader::ChunkTerms::shop_sell2,				"shop_sell2"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_leave2,			LDB_Reader::ChunkTerms::shop_leave2,			"shop_leave2"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy_select2,		LDB_Reader::ChunkTerms::shop_buy_select2,		"shop_buy_select2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy_number2,		LDB_Reader::ChunkTerms::shop_buy_number2,		"shop_buy_number2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_purchased2,		LDB_Reader::ChunkTerms::shop_purchased2,		"shop_purchased2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell_select2,	LDB_Reader::ChunkTerms::shop_sell_select2,		"shop_sell_select2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell_number2,	LDB_Reader::ChunkTerms::shop_sell_number2,		"shop_sell_number2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sold2,			LDB_Reader::ChunkTerms::shop_sold2,				"shop_sold2"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_greeting3,		LDB_Reader::ChunkTerms::shop_greeting3,			"shop_greeting3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_regreeting3,		LDB_Reader::ChunkTerms::shop_regreeting3,		"shop_regreeting3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy3,			LDB_Reader::ChunkTerms::shop_buy3,				"shop_buy3"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell3,			LDB_Reader::ChunkTerms::shop_sell3,				"shop_sell3"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_leave3,			LDB_Reader::ChunkTerms::shop_leave3,			"shop_leave3"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy_select3,		LDB_Reader::ChunkTerms::shop_buy_select3,		"shop_buy_select3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_buy_number3,		LDB_Reader::ChunkTerms::shop_buy_number3,		"shop_buy_number3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_purchased3,		LDB_Reader::ChunkTerms::shop_purchased3,		"shop_purchased3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell_select3,	LDB_Reader::ChunkTerms::shop_sell_select3,		"shop_sell_select3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sell_number3,	LDB_Reader::ChunkTerms::shop_sell_number3,		"shop_sell_number3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shop_sold3,			LDB_Reader::ChunkTerms::shop_sold3,				"shop_sold3"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_a_greeting_1,		LDB_Reader::ChunkTerms::inn_a_greeting_1,		"inn_a_greeting_1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_a_greeting_2,		LDB_Reader::ChunkTerms::inn_a_greeting_2,		"inn_a_greeting_2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_a_greeting_3,		LDB_Reader::ChunkTerms::inn_a_greeting_3,		"inn_a_greeting_3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_a_accept,			LDB_Reader::ChunkTerms::inn_a_accept,			"inn_a_accept"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_a_cancel,			LDB_Reader::ChunkTerms::inn_a_cancel,			"inn_a_cancel"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_b_greeting_1,		LDB_Reader::ChunkTerms::inn_b_greeting_1,		"inn_b_greeting_1"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_b_greeting_2,		LDB_Reader::ChunkTerms::inn_b_greeting_2,		"inn_b_greeting_2"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_b_greeting_3,		LDB_Reader::ChunkTerms::inn_b_greeting_3,		"inn_b_greeting_3"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_b_accept,			LDB_Reader::ChunkTerms::inn_b_accept,			"inn_b_accept"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::inn_b_cancel,			LDB_Reader::ChunkTerms::inn_b_cancel,			"inn_b_cancel"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::possessed_items,		LDB_Reader::ChunkTerms::possessed_items,		"possessed_items"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::equipped_items,		LDB_Reader::ChunkTerms::equipped_items,			"equipped_items"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::gold,					LDB_Reader::ChunkTerms::gold,					"gold"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::battle_fight,			LDB_Reader::ChunkTerms::battle_fight,			"battle_fight"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::battle_auto,			LDB_Reader::ChunkTerms::battle_auto,			"battle_auto"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::battle_escape,		LDB_Reader::ChunkTerms::battle_escape,			"battle_escape"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::command_attack,		LDB_Reader::ChunkTerms::command_attack,			"command_attack"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::command_defend,		LDB_Reader::ChunkTerms::command_defend,			"command_defend"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::command_item,			LDB_Reader::ChunkTerms::command_item,			"command_item"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::command_skill,		LDB_Reader::ChunkTerms::command_skill,			"command_skill"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::menu_equipment,		LDB_Reader::ChunkTerms::menu_equipment,			"menu_equipment"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::menu_save,			LDB_Reader::ChunkTerms::menu_save,				"menu_save"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::menu_quit,			LDB_Reader::ChunkTerms::menu_quit,				"menu_quit"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::new_game,				LDB_Reader::ChunkTerms::new_game,				"new_game"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::load_game,			LDB_Reader::ChunkTerms::load_game,				"load_game"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::exit_game,			LDB_Reader::ChunkTerms::exit_game,				"exit_game"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::status,				LDB_Reader::ChunkTerms::status,					"status"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::row,					LDB_Reader::ChunkTerms::row,					"row"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::order,				LDB_Reader::ChunkTerms::order,					"order"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::wait_on,				LDB_Reader::ChunkTerms::wait_on,				"wait_on"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::wait_off,				LDB_Reader::ChunkTerms::wait_off,				"wait_off"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::level,				LDB_Reader::ChunkTerms::level,					"level"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::health_points,		LDB_Reader::ChunkTerms::health_points,			"health_points"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::spirit_points,		LDB_Reader::ChunkTerms::spirit_points,			"spirit_points"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::normal_status,		LDB_Reader::ChunkTerms::normal_status,			"normal_status"			),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::exp_short,			LDB_Reader::ChunkTerms::exp_short,				"exp_short"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::lvl_short,			LDB_Reader::ChunkTerms::lvl_short,				"lvl_short"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::hp_short,				LDB_Reader::ChunkTerms::hp_short,				"hp_short"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::sp_short,				LDB_Reader::ChunkTerms::sp_short,				"sp_short"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::sp_cost,				LDB_Reader::ChunkTerms::sp_cost,				"sp_cost"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::attack,				LDB_Reader::ChunkTerms::attack,					"attack"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::defense,				LDB_Reader::ChunkTerms::defense,				"defense"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::spirit,				LDB_Reader::ChunkTerms::spirit,					"spirit"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::agility,				LDB_Reader::ChunkTerms::agility,				"agility"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::weapon,				LDB_Reader::ChunkTerms::weapon,					"weapon"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::shield,				LDB_Reader::ChunkTerms::shield,					"shield"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::armor,				LDB_Reader::ChunkTerms::armor,					"armor"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::helmet,				LDB_Reader::ChunkTerms::helmet,					"helmet"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::accessory,			LDB_Reader::ChunkTerms::accessory,				"accessory"				),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::save_game_message,	LDB_Reader::ChunkTerms::save_game_message,		"save_game_message"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::load_game_message,	LDB_Reader::ChunkTerms::load_game_message,		"load_game_message"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::file,					LDB_Reader::ChunkTerms::file,					"file"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::exit_game_message,	LDB_Reader::ChunkTerms::exit_game_message,		"exit_game_message"		),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::yes,					LDB_Reader::ChunkTerms::yes,					"yes"					),
	new TypedField<RPG::Terms, std::string>	(&RPG::Terms::no,					LDB_Reader::ChunkTerms::no,						"no"					),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
