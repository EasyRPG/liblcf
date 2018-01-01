/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_TROOPPAGECONDITION_H
#define LCF_RPG_TROOPPAGECONDITION_H

// Headers
#include <stdint.h>

/**
 * RPG::TroopPageCondition class.
 */
namespace RPG {
	class TroopPageCondition {
	public:
		struct Flags {
			bool switch_a = false;
			bool switch_b = false;
			bool variable = false;
			bool turn = false;
			bool fatigue = false;
			bool enemy_hp = false;
			bool actor_hp = false;
			bool turn_enemy = false;
			bool turn_actor = false;
			bool command_actor = false;
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
}

#endif
