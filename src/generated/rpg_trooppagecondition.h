/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_TROOPPAGECONDITION_H
#define LCF_RPG_TROOPPAGECONDITION_H

// Headers
#include <array>
#include <stdint.h>

/**
 * RPG::TroopPageCondition class.
 */
namespace RPG {
	class TroopPageCondition {
	public:
		struct Flags {
			union {
				struct {
					bool switch_a;
					bool switch_b;
					bool variable;
					bool turn;
					bool fatigue;
					bool enemy_hp;
					bool actor_hp;
					bool turn_enemy;
					bool turn_actor;
					bool command_actor;
				};
				std::array<bool, 10> flags;
			};
			//TODO: Should try to switch to member initializers when we upgrade to VS2017.
			Flags() noexcept: switch_a(false), switch_b(false), variable(false), turn(false), fatigue(false), enemy_hp(false), actor_hp(false), turn_enemy(false), turn_actor(false), command_actor(false)
			{}
		} flags;
		int32_t switch_a_id = 1;
		int32_t switch_b_id = 1;
		int32_t variable_id = 1;
		int32_t variable_value = 0;
		int32_t turn_a = 0;
		int32_t turn_b = 0;
		int32_t fatigue_min = 0;
		int32_t fatigue_max = 100;
		int32_t enemy_id = 0;
		int32_t enemy_hp_min = 0;
		int32_t enemy_hp_max = 100;
		int32_t actor_id = 1;
		int32_t actor_hp_min = 0;
		int32_t actor_hp_max = 100;
		int32_t turn_enemy_id = 0;
		int32_t turn_enemy_a = 0;
		int32_t turn_enemy_b = 0;
		int32_t turn_actor_id = 1;
		int32_t turn_actor_a = 0;
		int32_t turn_actor_b = 0;
		int32_t command_actor_id = 1;
		int32_t command_id = 1;
	};

	inline bool operator==(const TroopPageCondition::Flags& l, const TroopPageCondition::Flags& r) {
		return l.flags == r.flags;
	}

	inline bool operator!=(const TroopPageCondition::Flags& l, const TroopPageCondition::Flags& r) {
		return !(l == r);
	}
}

#endif
