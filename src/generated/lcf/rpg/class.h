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

#ifndef LCF_RPG_CLASS_H
#define LCF_RPG_CLASS_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/rpg/learning.h"
#include "lcf/rpg/parameters.h"
#include <ostream>

/**
 * rpg::Class class.
 */
namespace lcf {
namespace rpg {
	class Class {
	public:
		int ID = 0;
		std::string name;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int32_t exp_base = 300;
		int32_t exp_inflation = 300;
		int32_t exp_correction = 0;
		int32_t battler_animation = 0;
		std::vector<Learning> skills;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<int32_t> battle_commands;
	};

	inline bool operator==(const Class& l, const Class& r) {
		return l.name == r.name
		&& l.two_weapon == r.two_weapon
		&& l.lock_equipment == r.lock_equipment
		&& l.auto_battle == r.auto_battle
		&& l.super_guard == r.super_guard
		&& l.parameters == r.parameters
		&& l.exp_base == r.exp_base
		&& l.exp_inflation == r.exp_inflation
		&& l.exp_correction == r.exp_correction
		&& l.battler_animation == r.battler_animation
		&& l.skills == r.skills
		&& l.state_ranks == r.state_ranks
		&& l.attribute_ranks == r.attribute_ranks
		&& l.battle_commands == r.battle_commands;
	}

	inline bool operator!=(const Class& l, const Class& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const Class& obj) {
		os << "Class{";
		os << "name="<< obj.name;
		os << " two_weapon="<< obj.two_weapon;
		os << " lock_equipment="<< obj.lock_equipment;
		os << " auto_battle="<< obj.auto_battle;
		os << " super_guard="<< obj.super_guard;
		os << " parameters="<< obj.parameters;
		os << " exp_base="<< obj.exp_base;
		os << " exp_inflation="<< obj.exp_inflation;
		os << " exp_correction="<< obj.exp_correction;
		os << " battler_animation="<< obj.battler_animation;
		os << " skills=";
		for (size_t i = 0; i < obj.skills.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.skills[i];
		}
		os << "]";
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
		os << " battle_commands=";
		for (size_t i = 0; i < obj.battle_commands.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.battle_commands[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
