/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_TERMS_H
#define LCF_RPG_TERMS_H

// Headers
#include "lcf/dbstring.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Terms class.
 */
namespace lcf {
namespace rpg {
	class Terms {
	public:
		DBString encounter;
		DBString special_combat;
		DBString escape_success;
		DBString escape_failure;
		DBString victory;
		DBString defeat;
		DBString exp_received;
		DBString gold_recieved_a;
		DBString gold_recieved_b;
		DBString item_recieved;
		DBString attacking;
		DBString enemy_critical;
		DBString actor_critical;
		DBString defending;
		DBString observing;
		DBString focus;
		DBString autodestruction;
		DBString enemy_escape;
		DBString enemy_transform;
		DBString enemy_damaged;
		DBString enemy_undamaged;
		DBString actor_damaged;
		DBString actor_undamaged;
		DBString skill_failure_a;
		DBString skill_failure_b;
		DBString skill_failure_c;
		DBString dodge;
		DBString use_item;
		DBString hp_recovery;
		DBString parameter_increase;
		DBString parameter_decrease;
		DBString enemy_hp_absorbed;
		DBString actor_hp_absorbed;
		DBString resistance_increase;
		DBString resistance_decrease;
		DBString level_up;
		DBString skill_learned;
		DBString battle_start;
		DBString miss;
		DBString shop_greeting1;
		DBString shop_regreeting1;
		DBString shop_buy1;
		DBString shop_sell1;
		DBString shop_leave1;
		DBString shop_buy_select1;
		DBString shop_buy_number1;
		DBString shop_purchased1;
		DBString shop_sell_select1;
		DBString shop_sell_number1;
		DBString shop_sold1;
		DBString shop_greeting2;
		DBString shop_regreeting2;
		DBString shop_buy2;
		DBString shop_sell2;
		DBString shop_leave2;
		DBString shop_buy_select2;
		DBString shop_buy_number2;
		DBString shop_purchased2;
		DBString shop_sell_select2;
		DBString shop_sell_number2;
		DBString shop_sold2;
		DBString shop_greeting3;
		DBString shop_regreeting3;
		DBString shop_buy3;
		DBString shop_sell3;
		DBString shop_leave3;
		DBString shop_buy_select3;
		DBString shop_buy_number3;
		DBString shop_purchased3;
		DBString shop_sell_select3;
		DBString shop_sell_number3;
		DBString shop_sold3;
		DBString inn_a_greeting_1;
		DBString inn_a_greeting_2;
		DBString inn_a_greeting_3;
		DBString inn_a_accept;
		DBString inn_a_cancel;
		DBString inn_b_greeting_1;
		DBString inn_b_greeting_2;
		DBString inn_b_greeting_3;
		DBString inn_b_accept;
		DBString inn_b_cancel;
		DBString possessed_items;
		DBString equipped_items;
		DBString gold;
		DBString battle_fight;
		DBString battle_auto;
		DBString battle_escape;
		DBString command_attack;
		DBString command_defend;
		DBString command_item;
		DBString command_skill;
		DBString menu_equipment;
		DBString menu_save;
		DBString menu_quit;
		DBString new_game;
		DBString load_game;
		DBString exit_game;
		DBString status;
		DBString row;
		DBString order;
		DBString wait_on;
		DBString wait_off;
		DBString level;
		DBString health_points;
		DBString spirit_points;
		DBString normal_status;
		DBString exp_short;
		DBString lvl_short;
		DBString hp_short;
		DBString sp_short;
		DBString sp_cost;
		DBString attack;
		DBString defense;
		DBString spirit;
		DBString agility;
		DBString weapon;
		DBString shield;
		DBString armor;
		DBString helmet;
		DBString accessory;
		DBString save_game_message;
		DBString load_game_message;
		DBString file;
		DBString exit_game_message;
		DBString yes;
		DBString no;
	};

	inline bool operator==(const Terms& l, const Terms& r) {
		return l.encounter == r.encounter
		&& l.special_combat == r.special_combat
		&& l.escape_success == r.escape_success
		&& l.escape_failure == r.escape_failure
		&& l.victory == r.victory
		&& l.defeat == r.defeat
		&& l.exp_received == r.exp_received
		&& l.gold_recieved_a == r.gold_recieved_a
		&& l.gold_recieved_b == r.gold_recieved_b
		&& l.item_recieved == r.item_recieved
		&& l.attacking == r.attacking
		&& l.enemy_critical == r.enemy_critical
		&& l.actor_critical == r.actor_critical
		&& l.defending == r.defending
		&& l.observing == r.observing
		&& l.focus == r.focus
		&& l.autodestruction == r.autodestruction
		&& l.enemy_escape == r.enemy_escape
		&& l.enemy_transform == r.enemy_transform
		&& l.enemy_damaged == r.enemy_damaged
		&& l.enemy_undamaged == r.enemy_undamaged
		&& l.actor_damaged == r.actor_damaged
		&& l.actor_undamaged == r.actor_undamaged
		&& l.skill_failure_a == r.skill_failure_a
		&& l.skill_failure_b == r.skill_failure_b
		&& l.skill_failure_c == r.skill_failure_c
		&& l.dodge == r.dodge
		&& l.use_item == r.use_item
		&& l.hp_recovery == r.hp_recovery
		&& l.parameter_increase == r.parameter_increase
		&& l.parameter_decrease == r.parameter_decrease
		&& l.enemy_hp_absorbed == r.enemy_hp_absorbed
		&& l.actor_hp_absorbed == r.actor_hp_absorbed
		&& l.resistance_increase == r.resistance_increase
		&& l.resistance_decrease == r.resistance_decrease
		&& l.level_up == r.level_up
		&& l.skill_learned == r.skill_learned
		&& l.battle_start == r.battle_start
		&& l.miss == r.miss
		&& l.shop_greeting1 == r.shop_greeting1
		&& l.shop_regreeting1 == r.shop_regreeting1
		&& l.shop_buy1 == r.shop_buy1
		&& l.shop_sell1 == r.shop_sell1
		&& l.shop_leave1 == r.shop_leave1
		&& l.shop_buy_select1 == r.shop_buy_select1
		&& l.shop_buy_number1 == r.shop_buy_number1
		&& l.shop_purchased1 == r.shop_purchased1
		&& l.shop_sell_select1 == r.shop_sell_select1
		&& l.shop_sell_number1 == r.shop_sell_number1
		&& l.shop_sold1 == r.shop_sold1
		&& l.shop_greeting2 == r.shop_greeting2
		&& l.shop_regreeting2 == r.shop_regreeting2
		&& l.shop_buy2 == r.shop_buy2
		&& l.shop_sell2 == r.shop_sell2
		&& l.shop_leave2 == r.shop_leave2
		&& l.shop_buy_select2 == r.shop_buy_select2
		&& l.shop_buy_number2 == r.shop_buy_number2
		&& l.shop_purchased2 == r.shop_purchased2
		&& l.shop_sell_select2 == r.shop_sell_select2
		&& l.shop_sell_number2 == r.shop_sell_number2
		&& l.shop_sold2 == r.shop_sold2
		&& l.shop_greeting3 == r.shop_greeting3
		&& l.shop_regreeting3 == r.shop_regreeting3
		&& l.shop_buy3 == r.shop_buy3
		&& l.shop_sell3 == r.shop_sell3
		&& l.shop_leave3 == r.shop_leave3
		&& l.shop_buy_select3 == r.shop_buy_select3
		&& l.shop_buy_number3 == r.shop_buy_number3
		&& l.shop_purchased3 == r.shop_purchased3
		&& l.shop_sell_select3 == r.shop_sell_select3
		&& l.shop_sell_number3 == r.shop_sell_number3
		&& l.shop_sold3 == r.shop_sold3
		&& l.inn_a_greeting_1 == r.inn_a_greeting_1
		&& l.inn_a_greeting_2 == r.inn_a_greeting_2
		&& l.inn_a_greeting_3 == r.inn_a_greeting_3
		&& l.inn_a_accept == r.inn_a_accept
		&& l.inn_a_cancel == r.inn_a_cancel
		&& l.inn_b_greeting_1 == r.inn_b_greeting_1
		&& l.inn_b_greeting_2 == r.inn_b_greeting_2
		&& l.inn_b_greeting_3 == r.inn_b_greeting_3
		&& l.inn_b_accept == r.inn_b_accept
		&& l.inn_b_cancel == r.inn_b_cancel
		&& l.possessed_items == r.possessed_items
		&& l.equipped_items == r.equipped_items
		&& l.gold == r.gold
		&& l.battle_fight == r.battle_fight
		&& l.battle_auto == r.battle_auto
		&& l.battle_escape == r.battle_escape
		&& l.command_attack == r.command_attack
		&& l.command_defend == r.command_defend
		&& l.command_item == r.command_item
		&& l.command_skill == r.command_skill
		&& l.menu_equipment == r.menu_equipment
		&& l.menu_save == r.menu_save
		&& l.menu_quit == r.menu_quit
		&& l.new_game == r.new_game
		&& l.load_game == r.load_game
		&& l.exit_game == r.exit_game
		&& l.status == r.status
		&& l.row == r.row
		&& l.order == r.order
		&& l.wait_on == r.wait_on
		&& l.wait_off == r.wait_off
		&& l.level == r.level
		&& l.health_points == r.health_points
		&& l.spirit_points == r.spirit_points
		&& l.normal_status == r.normal_status
		&& l.exp_short == r.exp_short
		&& l.lvl_short == r.lvl_short
		&& l.hp_short == r.hp_short
		&& l.sp_short == r.sp_short
		&& l.sp_cost == r.sp_cost
		&& l.attack == r.attack
		&& l.defense == r.defense
		&& l.spirit == r.spirit
		&& l.agility == r.agility
		&& l.weapon == r.weapon
		&& l.shield == r.shield
		&& l.armor == r.armor
		&& l.helmet == r.helmet
		&& l.accessory == r.accessory
		&& l.save_game_message == r.save_game_message
		&& l.load_game_message == r.load_game_message
		&& l.file == r.file
		&& l.exit_game_message == r.exit_game_message
		&& l.yes == r.yes
		&& l.no == r.no;
	}

	inline bool operator!=(const Terms& l, const Terms& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Terms& obj);
} // namespace rpg
} // namespace lcf

#endif
