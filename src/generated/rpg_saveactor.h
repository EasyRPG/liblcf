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

#ifndef LCF_RPG_SAVEACTOR_H
#define LCF_RPG_SAVEACTOR_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>

/**
 * RPG::SaveActor class.
 */
namespace RPG {
	class SaveActor {
	public:
		void Setup(int actor_id);
		void Fixup(int actor_id);
		void UnFixup();
		int ID = 0;
		std::string name;
		std::string title;
		std::string sprite_name;
		int32_t sprite_id = 0;
		int32_t sprite_flags = 0;
		std::string face_name;
		int32_t face_id = 0;
		int32_t level = -1;
		int32_t exp = -1;
		int32_t hp_mod = -1;
		int32_t sp_mod = -1;
		int32_t attack_mod = 0;
		int32_t defense_mod = 0;
		int32_t spirit_mod = 0;
		int32_t agility_mod = 0;
		int32_t skills_size = -1;
		std::vector<int16_t> skills;
		std::vector<int16_t> equipped;
		int32_t current_hp = -1;
		int32_t current_sp = -1;
		std::vector<int32_t> battle_commands;
		std::vector<int16_t> status;
		bool changed_battle_commands = false;
		int32_t class_id = -1;
		int32_t row = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		int32_t battler_animation = 0;
	};
}

#endif
