/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ACTOR_H
#define LCF_RPG_ACTOR_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_equipment.h"
#include "rpg_learning.h"
#include "rpg_parameters.h"

/**
 * RPG::Actor class.
 */
namespace RPG {
	class Actor {
	public:
		void Setup();

		int ID = 0;
		std::string name;
		std::string title;
		std::string character_name;
		int character_index = 0;
		bool transparent = false;
		int initial_level = 1;
		int final_level = -1;
		bool critical_hit = true;
		int critical_hit_chance = 30;
		std::string face_name;
		int face_index = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		Parameters parameters;
		int exp_base = -1;
		int exp_inflation = -1;
		int exp_correction = 0;
		Equipment initial_equipment;
		int unarmed_animation = 1;
		int class_id = 0;
		int battle_x = 220;
		int battle_y = 120;
		int battler_animation = 1;
		std::vector<Learning> skills;
		bool rename_skill = false;
		std::string skill_name;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<uint32_t> battle_commands;
	};
}

#endif
