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

	inline std::ostream& operator<<(std::ostream& os, const Terms& obj) {
		os << "Terms{";
		os << "encounter="<< obj.encounter;
		os << " special_combat="<< obj.special_combat;
		os << " escape_success="<< obj.escape_success;
		os << " escape_failure="<< obj.escape_failure;
		os << " victory="<< obj.victory;
		os << " defeat="<< obj.defeat;
		os << " exp_received="<< obj.exp_received;
		os << " gold_recieved_a="<< obj.gold_recieved_a;
		os << " gold_recieved_b="<< obj.gold_recieved_b;
		os << " item_recieved="<< obj.item_recieved;
		os << " attacking="<< obj.attacking;
		os << " enemy_critical="<< obj.enemy_critical;
		os << " actor_critical="<< obj.actor_critical;
		os << " defending="<< obj.defending;
		os << " observing="<< obj.observing;
		os << " focus="<< obj.focus;
		os << " autodestruction="<< obj.autodestruction;
		os << " enemy_escape="<< obj.enemy_escape;
		os << " enemy_transform="<< obj.enemy_transform;
		os << " enemy_damaged="<< obj.enemy_damaged;
		os << " enemy_undamaged="<< obj.enemy_undamaged;
		os << " actor_damaged="<< obj.actor_damaged;
		os << " actor_undamaged="<< obj.actor_undamaged;
		os << " skill_failure_a="<< obj.skill_failure_a;
		os << " skill_failure_b="<< obj.skill_failure_b;
		os << " skill_failure_c="<< obj.skill_failure_c;
		os << " dodge="<< obj.dodge;
		os << " use_item="<< obj.use_item;
		os << " hp_recovery="<< obj.hp_recovery;
		os << " parameter_increase="<< obj.parameter_increase;
		os << " parameter_decrease="<< obj.parameter_decrease;
		os << " enemy_hp_absorbed="<< obj.enemy_hp_absorbed;
		os << " actor_hp_absorbed="<< obj.actor_hp_absorbed;
		os << " resistance_increase="<< obj.resistance_increase;
		os << " resistance_decrease="<< obj.resistance_decrease;
		os << " level_up="<< obj.level_up;
		os << " skill_learned="<< obj.skill_learned;
		os << " battle_start="<< obj.battle_start;
		os << " miss="<< obj.miss;
		os << " shop_greeting1="<< obj.shop_greeting1;
		os << " shop_regreeting1="<< obj.shop_regreeting1;
		os << " shop_buy1="<< obj.shop_buy1;
		os << " shop_sell1="<< obj.shop_sell1;
		os << " shop_leave1="<< obj.shop_leave1;
		os << " shop_buy_select1="<< obj.shop_buy_select1;
		os << " shop_buy_number1="<< obj.shop_buy_number1;
		os << " shop_purchased1="<< obj.shop_purchased1;
		os << " shop_sell_select1="<< obj.shop_sell_select1;
		os << " shop_sell_number1="<< obj.shop_sell_number1;
		os << " shop_sold1="<< obj.shop_sold1;
		os << " shop_greeting2="<< obj.shop_greeting2;
		os << " shop_regreeting2="<< obj.shop_regreeting2;
		os << " shop_buy2="<< obj.shop_buy2;
		os << " shop_sell2="<< obj.shop_sell2;
		os << " shop_leave2="<< obj.shop_leave2;
		os << " shop_buy_select2="<< obj.shop_buy_select2;
		os << " shop_buy_number2="<< obj.shop_buy_number2;
		os << " shop_purchased2="<< obj.shop_purchased2;
		os << " shop_sell_select2="<< obj.shop_sell_select2;
		os << " shop_sell_number2="<< obj.shop_sell_number2;
		os << " shop_sold2="<< obj.shop_sold2;
		os << " shop_greeting3="<< obj.shop_greeting3;
		os << " shop_regreeting3="<< obj.shop_regreeting3;
		os << " shop_buy3="<< obj.shop_buy3;
		os << " shop_sell3="<< obj.shop_sell3;
		os << " shop_leave3="<< obj.shop_leave3;
		os << " shop_buy_select3="<< obj.shop_buy_select3;
		os << " shop_buy_number3="<< obj.shop_buy_number3;
		os << " shop_purchased3="<< obj.shop_purchased3;
		os << " shop_sell_select3="<< obj.shop_sell_select3;
		os << " shop_sell_number3="<< obj.shop_sell_number3;
		os << " shop_sold3="<< obj.shop_sold3;
		os << " inn_a_greeting_1="<< obj.inn_a_greeting_1;
		os << " inn_a_greeting_2="<< obj.inn_a_greeting_2;
		os << " inn_a_greeting_3="<< obj.inn_a_greeting_3;
		os << " inn_a_accept="<< obj.inn_a_accept;
		os << " inn_a_cancel="<< obj.inn_a_cancel;
		os << " inn_b_greeting_1="<< obj.inn_b_greeting_1;
		os << " inn_b_greeting_2="<< obj.inn_b_greeting_2;
		os << " inn_b_greeting_3="<< obj.inn_b_greeting_3;
		os << " inn_b_accept="<< obj.inn_b_accept;
		os << " inn_b_cancel="<< obj.inn_b_cancel;
		os << " possessed_items="<< obj.possessed_items;
		os << " equipped_items="<< obj.equipped_items;
		os << " gold="<< obj.gold;
		os << " battle_fight="<< obj.battle_fight;
		os << " battle_auto="<< obj.battle_auto;
		os << " battle_escape="<< obj.battle_escape;
		os << " command_attack="<< obj.command_attack;
		os << " command_defend="<< obj.command_defend;
		os << " command_item="<< obj.command_item;
		os << " command_skill="<< obj.command_skill;
		os << " menu_equipment="<< obj.menu_equipment;
		os << " menu_save="<< obj.menu_save;
		os << " menu_quit="<< obj.menu_quit;
		os << " new_game="<< obj.new_game;
		os << " load_game="<< obj.load_game;
		os << " exit_game="<< obj.exit_game;
		os << " status="<< obj.status;
		os << " row="<< obj.row;
		os << " order="<< obj.order;
		os << " wait_on="<< obj.wait_on;
		os << " wait_off="<< obj.wait_off;
		os << " level="<< obj.level;
		os << " health_points="<< obj.health_points;
		os << " spirit_points="<< obj.spirit_points;
		os << " normal_status="<< obj.normal_status;
		os << " exp_short="<< obj.exp_short;
		os << " lvl_short="<< obj.lvl_short;
		os << " hp_short="<< obj.hp_short;
		os << " sp_short="<< obj.sp_short;
		os << " sp_cost="<< obj.sp_cost;
		os << " attack="<< obj.attack;
		os << " defense="<< obj.defense;
		os << " spirit="<< obj.spirit;
		os << " agility="<< obj.agility;
		os << " weapon="<< obj.weapon;
		os << " shield="<< obj.shield;
		os << " armor="<< obj.armor;
		os << " helmet="<< obj.helmet;
		os << " accessory="<< obj.accessory;
		os << " save_game_message="<< obj.save_game_message;
		os << " load_game_message="<< obj.load_game_message;
		os << " file="<< obj.file;
		os << " exit_game_message="<< obj.exit_game_message;
		os << " yes="<< obj.yes;
		os << " no="<< obj.no;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
