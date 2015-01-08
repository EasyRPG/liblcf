/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
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
		Enemy();

		int ID;
		std::string name;
		std::string battler_name;
		int battler_hue;
		int max_hp;
		int max_sp;
		int attack;
		int defense;
		int spirit;
		int agility;
		bool transparent;
		int exp;
		int gold;
		int drop_id;
		int drop_prob;
		bool critical_hit;
		int critical_hit_chance;
		bool miss;
		bool levitate;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<EnemyAction> actions;
	};
}

#endif
