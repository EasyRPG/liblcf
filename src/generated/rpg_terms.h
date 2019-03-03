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

#ifndef LCF_RPG_TERMS_H
#define LCF_RPG_TERMS_H

// Headers
#include <string>

/**
 * RPG::Terms class.
 */
namespace RPG {
	class Terms {
	public:
		std::string encounter;
		std::string special_combat;
		std::string escape_success;
		std::string escape_failure;
		std::string victory;
		std::string defeat;
		std::string exp_received;
		std::string gold_recieved_a;
		std::string gold_recieved_b;
		std::string item_recieved;
		std::string attacking;
		std::string enemy_critical;
		std::string actor_critical;
		std::string defending;
		std::string observing;
		std::string focus;
		std::string autodestruction;
		std::string enemy_escape;
		std::string enemy_transform;
		std::string enemy_damaged;
		std::string enemy_undamaged;
		std::string actor_damaged;
		std::string actor_undamaged;
		std::string skill_failure_a;
		std::string skill_failure_b;
		std::string skill_failure_c;
		std::string dodge;
		std::string use_item;
		std::string hp_recovery;
		std::string parameter_increase;
		std::string parameter_decrease;
		std::string enemy_hp_absorbed;
		std::string actor_hp_absorbed;
		std::string resistance_increase;
		std::string resistance_decrease;
		std::string level_up;
		std::string skill_learned;
		std::string battle_start;
		std::string miss;
		std::string shop_greeting1;
		std::string shop_regreeting1;
		std::string shop_buy1;
		std::string shop_sell1;
		std::string shop_leave1;
		std::string shop_buy_select1;
		std::string shop_buy_number1;
		std::string shop_purchased1;
		std::string shop_sell_select1;
		std::string shop_sell_number1;
		std::string shop_sold1;
		std::string shop_greeting2;
		std::string shop_regreeting2;
		std::string shop_buy2;
		std::string shop_sell2;
		std::string shop_leave2;
		std::string shop_buy_select2;
		std::string shop_buy_number2;
		std::string shop_purchased2;
		std::string shop_sell_select2;
		std::string shop_sell_number2;
		std::string shop_sold2;
		std::string shop_greeting3;
		std::string shop_regreeting3;
		std::string shop_buy3;
		std::string shop_sell3;
		std::string shop_leave3;
		std::string shop_buy_select3;
		std::string shop_buy_number3;
		std::string shop_purchased3;
		std::string shop_sell_select3;
		std::string shop_sell_number3;
		std::string shop_sold3;
		std::string inn_a_greeting_1;
		std::string inn_a_greeting_2;
		std::string inn_a_greeting_3;
		std::string inn_a_accept;
		std::string inn_a_cancel;
		std::string inn_b_greeting_1;
		std::string inn_b_greeting_2;
		std::string inn_b_greeting_3;
		std::string inn_b_accept;
		std::string inn_b_cancel;
		std::string possessed_items;
		std::string equipped_items;
		std::string gold;
		std::string battle_fight;
		std::string battle_auto;
		std::string battle_escape;
		std::string command_attack;
		std::string command_defend;
		std::string command_item;
		std::string command_skill;
		std::string menu_equipment;
		std::string menu_save;
		std::string menu_quit;
		std::string new_game;
		std::string load_game;
		std::string exit_game;
		std::string status;
		std::string row;
		std::string order;
		std::string wait_on;
		std::string wait_off;
		std::string level;
		std::string health_points;
		std::string spirit_points;
		std::string normal_status;
		std::string exp_short;
		std::string lvl_short;
		std::string hp_short;
		std::string sp_short;
		std::string sp_cost;
		std::string attack;
		std::string defense;
		std::string spirit;
		std::string agility;
		std::string weapon;
		std::string shield;
		std::string armor;
		std::string helmet;
		std::string accessory;
		std::string save_game_message;
		std::string load_game_message;
		std::string file;
		std::string exit_game_message;
		std::string yes;
		std::string no;
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
}

#endif
