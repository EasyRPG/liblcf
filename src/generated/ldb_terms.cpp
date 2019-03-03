/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct_impl.h"

// Read Terms.

template <>
char const* const Struct<RPG::Terms>::name = "Terms";

template <>
Field<RPG::Terms> const* Struct<RPG::Terms>::fields[] = {
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::encounter,
		LDB_Reader::ChunkTerms::encounter,
		"encounter",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::special_combat,
		LDB_Reader::ChunkTerms::special_combat,
		"special_combat",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::escape_success,
		LDB_Reader::ChunkTerms::escape_success,
		"escape_success",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::escape_failure,
		LDB_Reader::ChunkTerms::escape_failure,
		"escape_failure",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::victory,
		LDB_Reader::ChunkTerms::victory,
		"victory",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::defeat,
		LDB_Reader::ChunkTerms::defeat,
		"defeat",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::exp_received,
		LDB_Reader::ChunkTerms::exp_received,
		"exp_received",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::gold_recieved_a,
		LDB_Reader::ChunkTerms::gold_recieved_a,
		"gold_recieved_a",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::gold_recieved_b,
		LDB_Reader::ChunkTerms::gold_recieved_b,
		"gold_recieved_b",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::item_recieved,
		LDB_Reader::ChunkTerms::item_recieved,
		"item_recieved",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::attacking,
		LDB_Reader::ChunkTerms::attacking,
		"attacking",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::enemy_critical,
		LDB_Reader::ChunkTerms::enemy_critical,
		"enemy_critical",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::actor_critical,
		LDB_Reader::ChunkTerms::actor_critical,
		"actor_critical",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::defending,
		LDB_Reader::ChunkTerms::defending,
		"defending",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::observing,
		LDB_Reader::ChunkTerms::observing,
		"observing",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::focus,
		LDB_Reader::ChunkTerms::focus,
		"focus",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::autodestruction,
		LDB_Reader::ChunkTerms::autodestruction,
		"autodestruction",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::enemy_escape,
		LDB_Reader::ChunkTerms::enemy_escape,
		"enemy_escape",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::enemy_transform,
		LDB_Reader::ChunkTerms::enemy_transform,
		"enemy_transform",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::enemy_damaged,
		LDB_Reader::ChunkTerms::enemy_damaged,
		"enemy_damaged",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::enemy_undamaged,
		LDB_Reader::ChunkTerms::enemy_undamaged,
		"enemy_undamaged",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::actor_damaged,
		LDB_Reader::ChunkTerms::actor_damaged,
		"actor_damaged",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::actor_undamaged,
		LDB_Reader::ChunkTerms::actor_undamaged,
		"actor_undamaged",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::skill_failure_a,
		LDB_Reader::ChunkTerms::skill_failure_a,
		"skill_failure_a",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::skill_failure_b,
		LDB_Reader::ChunkTerms::skill_failure_b,
		"skill_failure_b",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::skill_failure_c,
		LDB_Reader::ChunkTerms::skill_failure_c,
		"skill_failure_c",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::dodge,
		LDB_Reader::ChunkTerms::dodge,
		"dodge",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::use_item,
		LDB_Reader::ChunkTerms::use_item,
		"use_item",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::hp_recovery,
		LDB_Reader::ChunkTerms::hp_recovery,
		"hp_recovery",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::parameter_increase,
		LDB_Reader::ChunkTerms::parameter_increase,
		"parameter_increase",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::parameter_decrease,
		LDB_Reader::ChunkTerms::parameter_decrease,
		"parameter_decrease",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::enemy_hp_absorbed,
		LDB_Reader::ChunkTerms::enemy_hp_absorbed,
		"enemy_hp_absorbed",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::actor_hp_absorbed,
		LDB_Reader::ChunkTerms::actor_hp_absorbed,
		"actor_hp_absorbed",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::resistance_increase,
		LDB_Reader::ChunkTerms::resistance_increase,
		"resistance_increase",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::resistance_decrease,
		LDB_Reader::ChunkTerms::resistance_decrease,
		"resistance_decrease",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::level_up,
		LDB_Reader::ChunkTerms::level_up,
		"level_up",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::skill_learned,
		LDB_Reader::ChunkTerms::skill_learned,
		"skill_learned",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::battle_start,
		LDB_Reader::ChunkTerms::battle_start,
		"battle_start",
		1,
		1
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::miss,
		LDB_Reader::ChunkTerms::miss,
		"miss",
		1,
		1
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_greeting1,
		LDB_Reader::ChunkTerms::shop_greeting1,
		"shop_greeting1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_regreeting1,
		LDB_Reader::ChunkTerms::shop_regreeting1,
		"shop_regreeting1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy1,
		LDB_Reader::ChunkTerms::shop_buy1,
		"shop_buy1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell1,
		LDB_Reader::ChunkTerms::shop_sell1,
		"shop_sell1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_leave1,
		LDB_Reader::ChunkTerms::shop_leave1,
		"shop_leave1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy_select1,
		LDB_Reader::ChunkTerms::shop_buy_select1,
		"shop_buy_select1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy_number1,
		LDB_Reader::ChunkTerms::shop_buy_number1,
		"shop_buy_number1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_purchased1,
		LDB_Reader::ChunkTerms::shop_purchased1,
		"shop_purchased1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell_select1,
		LDB_Reader::ChunkTerms::shop_sell_select1,
		"shop_sell_select1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell_number1,
		LDB_Reader::ChunkTerms::shop_sell_number1,
		"shop_sell_number1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sold1,
		LDB_Reader::ChunkTerms::shop_sold1,
		"shop_sold1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_greeting2,
		LDB_Reader::ChunkTerms::shop_greeting2,
		"shop_greeting2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_regreeting2,
		LDB_Reader::ChunkTerms::shop_regreeting2,
		"shop_regreeting2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy2,
		LDB_Reader::ChunkTerms::shop_buy2,
		"shop_buy2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell2,
		LDB_Reader::ChunkTerms::shop_sell2,
		"shop_sell2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_leave2,
		LDB_Reader::ChunkTerms::shop_leave2,
		"shop_leave2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy_select2,
		LDB_Reader::ChunkTerms::shop_buy_select2,
		"shop_buy_select2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy_number2,
		LDB_Reader::ChunkTerms::shop_buy_number2,
		"shop_buy_number2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_purchased2,
		LDB_Reader::ChunkTerms::shop_purchased2,
		"shop_purchased2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell_select2,
		LDB_Reader::ChunkTerms::shop_sell_select2,
		"shop_sell_select2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell_number2,
		LDB_Reader::ChunkTerms::shop_sell_number2,
		"shop_sell_number2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sold2,
		LDB_Reader::ChunkTerms::shop_sold2,
		"shop_sold2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_greeting3,
		LDB_Reader::ChunkTerms::shop_greeting3,
		"shop_greeting3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_regreeting3,
		LDB_Reader::ChunkTerms::shop_regreeting3,
		"shop_regreeting3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy3,
		LDB_Reader::ChunkTerms::shop_buy3,
		"shop_buy3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell3,
		LDB_Reader::ChunkTerms::shop_sell3,
		"shop_sell3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_leave3,
		LDB_Reader::ChunkTerms::shop_leave3,
		"shop_leave3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy_select3,
		LDB_Reader::ChunkTerms::shop_buy_select3,
		"shop_buy_select3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_buy_number3,
		LDB_Reader::ChunkTerms::shop_buy_number3,
		"shop_buy_number3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_purchased3,
		LDB_Reader::ChunkTerms::shop_purchased3,
		"shop_purchased3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell_select3,
		LDB_Reader::ChunkTerms::shop_sell_select3,
		"shop_sell_select3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sell_number3,
		LDB_Reader::ChunkTerms::shop_sell_number3,
		"shop_sell_number3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shop_sold3,
		LDB_Reader::ChunkTerms::shop_sold3,
		"shop_sold3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_a_greeting_1,
		LDB_Reader::ChunkTerms::inn_a_greeting_1,
		"inn_a_greeting_1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_a_greeting_2,
		LDB_Reader::ChunkTerms::inn_a_greeting_2,
		"inn_a_greeting_2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_a_greeting_3,
		LDB_Reader::ChunkTerms::inn_a_greeting_3,
		"inn_a_greeting_3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_a_accept,
		LDB_Reader::ChunkTerms::inn_a_accept,
		"inn_a_accept",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_a_cancel,
		LDB_Reader::ChunkTerms::inn_a_cancel,
		"inn_a_cancel",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_b_greeting_1,
		LDB_Reader::ChunkTerms::inn_b_greeting_1,
		"inn_b_greeting_1",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_b_greeting_2,
		LDB_Reader::ChunkTerms::inn_b_greeting_2,
		"inn_b_greeting_2",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_b_greeting_3,
		LDB_Reader::ChunkTerms::inn_b_greeting_3,
		"inn_b_greeting_3",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_b_accept,
		LDB_Reader::ChunkTerms::inn_b_accept,
		"inn_b_accept",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::inn_b_cancel,
		LDB_Reader::ChunkTerms::inn_b_cancel,
		"inn_b_cancel",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::possessed_items,
		LDB_Reader::ChunkTerms::possessed_items,
		"possessed_items",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::equipped_items,
		LDB_Reader::ChunkTerms::equipped_items,
		"equipped_items",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::gold,
		LDB_Reader::ChunkTerms::gold,
		"gold",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::battle_fight,
		LDB_Reader::ChunkTerms::battle_fight,
		"battle_fight",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::battle_auto,
		LDB_Reader::ChunkTerms::battle_auto,
		"battle_auto",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::battle_escape,
		LDB_Reader::ChunkTerms::battle_escape,
		"battle_escape",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::command_attack,
		LDB_Reader::ChunkTerms::command_attack,
		"command_attack",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::command_defend,
		LDB_Reader::ChunkTerms::command_defend,
		"command_defend",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::command_item,
		LDB_Reader::ChunkTerms::command_item,
		"command_item",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::command_skill,
		LDB_Reader::ChunkTerms::command_skill,
		"command_skill",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::menu_equipment,
		LDB_Reader::ChunkTerms::menu_equipment,
		"menu_equipment",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::menu_save,
		LDB_Reader::ChunkTerms::menu_save,
		"menu_save",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::menu_quit,
		LDB_Reader::ChunkTerms::menu_quit,
		"menu_quit",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::new_game,
		LDB_Reader::ChunkTerms::new_game,
		"new_game",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::load_game,
		LDB_Reader::ChunkTerms::load_game,
		"load_game",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::exit_game,
		LDB_Reader::ChunkTerms::exit_game,
		"exit_game",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::status,
		LDB_Reader::ChunkTerms::status,
		"status",
		1,
		1
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::row,
		LDB_Reader::ChunkTerms::row,
		"row",
		1,
		1
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::order,
		LDB_Reader::ChunkTerms::order,
		"order",
		1,
		1
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::wait_on,
		LDB_Reader::ChunkTerms::wait_on,
		"wait_on",
		1,
		1
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::wait_off,
		LDB_Reader::ChunkTerms::wait_off,
		"wait_off",
		1,
		1
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::level,
		LDB_Reader::ChunkTerms::level,
		"level",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::health_points,
		LDB_Reader::ChunkTerms::health_points,
		"health_points",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::spirit_points,
		LDB_Reader::ChunkTerms::spirit_points,
		"spirit_points",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::normal_status,
		LDB_Reader::ChunkTerms::normal_status,
		"normal_status",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::exp_short,
		LDB_Reader::ChunkTerms::exp_short,
		"exp_short",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::lvl_short,
		LDB_Reader::ChunkTerms::lvl_short,
		"lvl_short",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::hp_short,
		LDB_Reader::ChunkTerms::hp_short,
		"hp_short",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::sp_short,
		LDB_Reader::ChunkTerms::sp_short,
		"sp_short",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::sp_cost,
		LDB_Reader::ChunkTerms::sp_cost,
		"sp_cost",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::attack,
		LDB_Reader::ChunkTerms::attack,
		"attack",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::defense,
		LDB_Reader::ChunkTerms::defense,
		"defense",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::spirit,
		LDB_Reader::ChunkTerms::spirit,
		"spirit",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::agility,
		LDB_Reader::ChunkTerms::agility,
		"agility",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::weapon,
		LDB_Reader::ChunkTerms::weapon,
		"weapon",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::shield,
		LDB_Reader::ChunkTerms::shield,
		"shield",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::armor,
		LDB_Reader::ChunkTerms::armor,
		"armor",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::helmet,
		LDB_Reader::ChunkTerms::helmet,
		"helmet",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::accessory,
		LDB_Reader::ChunkTerms::accessory,
		"accessory",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::save_game_message,
		LDB_Reader::ChunkTerms::save_game_message,
		"save_game_message",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::load_game_message,
		LDB_Reader::ChunkTerms::load_game_message,
		"load_game_message",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::file,
		LDB_Reader::ChunkTerms::file,
		"file",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::exit_game_message,
		LDB_Reader::ChunkTerms::exit_game_message,
		"exit_game_message",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::yes,
		LDB_Reader::ChunkTerms::yes,
		"yes",
		1,
		0
	),
	new TypedField<RPG::Terms, std::string>(
		&RPG::Terms::no,
		LDB_Reader::ChunkTerms::no,
		"no",
		1,
		0
	),
	NULL
};

template class Struct<RPG::Terms>;
