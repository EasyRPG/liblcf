/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ITEM_H
#define LCF_RPG_ITEM_H

// Headers
#include <string>
#include <vector>
#include "rpg_itemanimation.h"

/**
 * RPG::Item class.
 */
namespace RPG {
	class Item {
	public:
		enum Type {
			Type_normal = 0,
			Type_weapon = 1,
			Type_shield = 2,
			Type_armor = 3,
			Type_helmet = 4,
			Type_accessory = 5,
			Type_medicine = 6,
			Type_book = 7,
			Type_material = 8,
			Type_special = 9,
			Type_switch = 10
		};
		enum Trajectory {
			Trajectory_straight = 0,
			Trajectory_return = 1
		};
		enum Target {
			Target_single = 0,
			Target_center = 1,
			Target_simultaneous = 2,
			Target_sequential = 3
		};

		int ID = 0;
		std::string name;
		std::string description;
		int type = 0;
		int price = 0;
		int uses = 1;
		int atk_points1 = 0;
		int def_points1 = 0;
		int spi_points1 = 0;
		int agi_points1 = 0;
		bool two_handed = false;
		int sp_cost = 0;
		int hit = 90;
		int critical_hit = 0;
		int animation_id = 1;
		bool preemptive = false;
		bool dual_attack = false;
		bool attack_all = false;
		bool ignore_evasion = false;
		bool prevent_critical = false;
		bool raise_evasion = false;
		bool half_sp_cost = false;
		bool no_terrain_damage = false;
		bool cursed = false;
		bool entire_party = false;
		int recover_hp_rate = 0;
		int recover_hp = 0;
		int recover_sp_rate = 0;
		int recover_sp = 0;
		bool occasion_field1 = false;
		bool ko_only = false;
		int max_hp_points = 0;
		int max_sp_points = 0;
		int atk_points2 = 0;
		int def_points2 = 0;
		int spi_points2 = 0;
		int agi_points2 = 0;
		int using_message = 0;
		int skill_id = 1;
		int switch_id = 1;
		bool occasion_field2 = true;
		bool occasion_battle = false;
		std::vector<bool> actor_set;
		std::vector<bool> state_set;
		std::vector<bool> attribute_set;
		int state_chance = 0;
		bool state_effect = false;
		int weapon_animation = 1;
		std::vector<ItemAnimation> animation_data;
		bool use_skill = false;
		std::vector<bool> class_set;
		int ranged_trajectory = 0;
		int ranged_target = 0;
	};
}

#endif
