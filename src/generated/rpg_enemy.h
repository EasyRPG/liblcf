/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ENEMY_H
#define LCF_RPG_ENEMY_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_enemyaction.h"

/**
 * RPG::Enemy class.
 */
namespace RPG {
	class Enemy {
	public:
		int ID = 0;
		std::string name;
		std::string battler_name;
		int battler_hue = 0;
		int max_hp = 10;
		int max_sp = 10;
		int attack = 10;
		int defense = 10;
		int spirit = 10;
		int agility = 10;
		bool transparent = false;
		int exp = 0;
		int gold = 0;
		int drop_id = 0;
		int drop_prob = 100;
		bool critical_hit = false;
		int critical_hit_chance = 30;
		bool miss = false;
		bool levitate = false;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<EnemyAction> actions;
	};
}

#endif
