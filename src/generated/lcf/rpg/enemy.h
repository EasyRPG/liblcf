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

#ifndef LCF_RPG_ENEMY_H
#define LCF_RPG_ENEMY_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/rpg/enemyaction.h"
#include <ostream>

/**
 * rpg::Enemy class.
 */
namespace lcf {
namespace rpg {
	class Enemy {
	public:
		int ID = 0;
		std::string name;
		std::string battler_name;
		int32_t battler_hue = 0;
		int32_t max_hp = 10;
		int32_t max_sp = 10;
		int32_t attack = 10;
		int32_t defense = 10;
		int32_t spirit = 10;
		int32_t agility = 10;
		bool transparent = false;
		int32_t exp = 0;
		int32_t gold = 0;
		int32_t drop_id = 0;
		int32_t drop_prob = 100;
		bool critical_hit = false;
		int32_t critical_hit_chance = 30;
		bool miss = false;
		bool levitate = false;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<EnemyAction> actions;
	};

	inline bool operator==(const Enemy& l, const Enemy& r) {
		return l.name == r.name
		&& l.battler_name == r.battler_name
		&& l.battler_hue == r.battler_hue
		&& l.max_hp == r.max_hp
		&& l.max_sp == r.max_sp
		&& l.attack == r.attack
		&& l.defense == r.defense
		&& l.spirit == r.spirit
		&& l.agility == r.agility
		&& l.transparent == r.transparent
		&& l.exp == r.exp
		&& l.gold == r.gold
		&& l.drop_id == r.drop_id
		&& l.drop_prob == r.drop_prob
		&& l.critical_hit == r.critical_hit
		&& l.critical_hit_chance == r.critical_hit_chance
		&& l.miss == r.miss
		&& l.levitate == r.levitate
		&& l.state_ranks == r.state_ranks
		&& l.attribute_ranks == r.attribute_ranks
		&& l.actions == r.actions;
	}

	inline bool operator!=(const Enemy& l, const Enemy& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const Enemy& obj) {
		os << "Enemy{";
		os << "name="<< obj.name;
		os << " battler_name="<< obj.battler_name;
		os << " battler_hue="<< obj.battler_hue;
		os << " max_hp="<< obj.max_hp;
		os << " max_sp="<< obj.max_sp;
		os << " attack="<< obj.attack;
		os << " defense="<< obj.defense;
		os << " spirit="<< obj.spirit;
		os << " agility="<< obj.agility;
		os << " transparent="<< obj.transparent;
		os << " exp="<< obj.exp;
		os << " gold="<< obj.gold;
		os << " drop_id="<< obj.drop_id;
		os << " drop_prob="<< obj.drop_prob;
		os << " critical_hit="<< obj.critical_hit;
		os << " critical_hit_chance="<< obj.critical_hit_chance;
		os << " miss="<< obj.miss;
		os << " levitate="<< obj.levitate;
		os << " state_ranks=";
		for (size_t i = 0; i < obj.state_ranks.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.state_ranks[i];
		}
		os << "]";
		os << " attribute_ranks=";
		for (size_t i = 0; i < obj.attribute_ranks.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.attribute_ranks[i];
		}
		os << "]";
		os << " actions=";
		for (size_t i = 0; i < obj.actions.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.actions[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
