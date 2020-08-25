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
#include <string>
#include <ostream>
#include <type_traits>

/**
 * rpg::Terms class.
 */
namespace lcf {
namespace rpg {
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

		template <typename F>
		void ForEachString(const F& f);
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

	template <typename F>
	inline void Terms::ForEachString(const F& f) {
		encounter = f(encounter, "encounter");
		special_combat = f(special_combat, "special_combat");
		escape_success = f(escape_success, "escape_success");
		escape_failure = f(escape_failure, "escape_failure");
		victory = f(victory, "victory");
		defeat = f(defeat, "defeat");
		exp_received = f(exp_received, "exp_received");
		gold_recieved_a = f(gold_recieved_a, "gold_recieved_a");
		gold_recieved_b = f(gold_recieved_b, "gold_recieved_b");
		item_recieved = f(item_recieved, "item_recieved");
		attacking = f(attacking, "attacking");
		enemy_critical = f(enemy_critical, "enemy_critical");
		actor_critical = f(actor_critical, "actor_critical");
		defending = f(defending, "defending");
		observing = f(observing, "observing");
		focus = f(focus, "focus");
		autodestruction = f(autodestruction, "autodestruction");
		enemy_escape = f(enemy_escape, "enemy_escape");
		enemy_transform = f(enemy_transform, "enemy_transform");
		enemy_damaged = f(enemy_damaged, "enemy_damaged");
		enemy_undamaged = f(enemy_undamaged, "enemy_undamaged");
		actor_damaged = f(actor_damaged, "actor_damaged");
		actor_undamaged = f(actor_undamaged, "actor_undamaged");
		skill_failure_a = f(skill_failure_a, "skill_failure_a");
		skill_failure_b = f(skill_failure_b, "skill_failure_b");
		skill_failure_c = f(skill_failure_c, "skill_failure_c");
		dodge = f(dodge, "dodge");
		use_item = f(use_item, "use_item");
		hp_recovery = f(hp_recovery, "hp_recovery");
		parameter_increase = f(parameter_increase, "parameter_increase");
		parameter_decrease = f(parameter_decrease, "parameter_decrease");
		enemy_hp_absorbed = f(enemy_hp_absorbed, "enemy_hp_absorbed");
		actor_hp_absorbed = f(actor_hp_absorbed, "actor_hp_absorbed");
		resistance_increase = f(resistance_increase, "resistance_increase");
		resistance_decrease = f(resistance_decrease, "resistance_decrease");
		level_up = f(level_up, "level_up");
		skill_learned = f(skill_learned, "skill_learned");
		battle_start = f(battle_start, "battle_start");
		miss = f(miss, "miss");
		shop_greeting1 = f(shop_greeting1, "shop_greeting1");
		shop_regreeting1 = f(shop_regreeting1, "shop_regreeting1");
		shop_buy1 = f(shop_buy1, "shop_buy1");
		shop_sell1 = f(shop_sell1, "shop_sell1");
		shop_leave1 = f(shop_leave1, "shop_leave1");
		shop_buy_select1 = f(shop_buy_select1, "shop_buy_select1");
		shop_buy_number1 = f(shop_buy_number1, "shop_buy_number1");
		shop_purchased1 = f(shop_purchased1, "shop_purchased1");
		shop_sell_select1 = f(shop_sell_select1, "shop_sell_select1");
		shop_sell_number1 = f(shop_sell_number1, "shop_sell_number1");
		shop_sold1 = f(shop_sold1, "shop_sold1");
		shop_greeting2 = f(shop_greeting2, "shop_greeting2");
		shop_regreeting2 = f(shop_regreeting2, "shop_regreeting2");
		shop_buy2 = f(shop_buy2, "shop_buy2");
		shop_sell2 = f(shop_sell2, "shop_sell2");
		shop_leave2 = f(shop_leave2, "shop_leave2");
		shop_buy_select2 = f(shop_buy_select2, "shop_buy_select2");
		shop_buy_number2 = f(shop_buy_number2, "shop_buy_number2");
		shop_purchased2 = f(shop_purchased2, "shop_purchased2");
		shop_sell_select2 = f(shop_sell_select2, "shop_sell_select2");
		shop_sell_number2 = f(shop_sell_number2, "shop_sell_number2");
		shop_sold2 = f(shop_sold2, "shop_sold2");
		shop_greeting3 = f(shop_greeting3, "shop_greeting3");
		shop_regreeting3 = f(shop_regreeting3, "shop_regreeting3");
		shop_buy3 = f(shop_buy3, "shop_buy3");
		shop_sell3 = f(shop_sell3, "shop_sell3");
		shop_leave3 = f(shop_leave3, "shop_leave3");
		shop_buy_select3 = f(shop_buy_select3, "shop_buy_select3");
		shop_buy_number3 = f(shop_buy_number3, "shop_buy_number3");
		shop_purchased3 = f(shop_purchased3, "shop_purchased3");
		shop_sell_select3 = f(shop_sell_select3, "shop_sell_select3");
		shop_sell_number3 = f(shop_sell_number3, "shop_sell_number3");
		shop_sold3 = f(shop_sold3, "shop_sold3");
		inn_a_greeting_1 = f(inn_a_greeting_1, "inn_a_greeting_1");
		inn_a_greeting_2 = f(inn_a_greeting_2, "inn_a_greeting_2");
		inn_a_greeting_3 = f(inn_a_greeting_3, "inn_a_greeting_3");
		inn_a_accept = f(inn_a_accept, "inn_a_accept");
		inn_a_cancel = f(inn_a_cancel, "inn_a_cancel");
		inn_b_greeting_1 = f(inn_b_greeting_1, "inn_b_greeting_1");
		inn_b_greeting_2 = f(inn_b_greeting_2, "inn_b_greeting_2");
		inn_b_greeting_3 = f(inn_b_greeting_3, "inn_b_greeting_3");
		inn_b_accept = f(inn_b_accept, "inn_b_accept");
		inn_b_cancel = f(inn_b_cancel, "inn_b_cancel");
		possessed_items = f(possessed_items, "possessed_items");
		equipped_items = f(equipped_items, "equipped_items");
		gold = f(gold, "gold");
		battle_fight = f(battle_fight, "battle_fight");
		battle_auto = f(battle_auto, "battle_auto");
		battle_escape = f(battle_escape, "battle_escape");
		command_attack = f(command_attack, "command_attack");
		command_defend = f(command_defend, "command_defend");
		command_item = f(command_item, "command_item");
		command_skill = f(command_skill, "command_skill");
		menu_equipment = f(menu_equipment, "menu_equipment");
		menu_save = f(menu_save, "menu_save");
		menu_quit = f(menu_quit, "menu_quit");
		new_game = f(new_game, "new_game");
		load_game = f(load_game, "load_game");
		exit_game = f(exit_game, "exit_game");
		status = f(status, "status");
		row = f(row, "row");
		order = f(order, "order");
		wait_on = f(wait_on, "wait_on");
		wait_off = f(wait_off, "wait_off");
		level = f(level, "level");
		health_points = f(health_points, "health_points");
		spirit_points = f(spirit_points, "spirit_points");
		normal_status = f(normal_status, "normal_status");
		exp_short = f(exp_short, "exp_short");
		lvl_short = f(lvl_short, "lvl_short");
		hp_short = f(hp_short, "hp_short");
		sp_short = f(sp_short, "sp_short");
		sp_cost = f(sp_cost, "sp_cost");
		attack = f(attack, "attack");
		defense = f(defense, "defense");
		spirit = f(spirit, "spirit");
		agility = f(agility, "agility");
		weapon = f(weapon, "weapon");
		shield = f(shield, "shield");
		armor = f(armor, "armor");
		helmet = f(helmet, "helmet");
		accessory = f(accessory, "accessory");
		save_game_message = f(save_game_message, "save_game_message");
		load_game_message = f(load_game_message, "load_game_message");
		file = f(file, "file");
		exit_game_message = f(exit_game_message, "exit_game_message");
		yes = f(yes, "yes");
		no = f(no, "no");
	}
} // namespace rpg
} // namespace lcf

#endif
