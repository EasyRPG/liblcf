/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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
		Actor();
		void Init();

		int ID;
		std::string name;
		std::string title;
		std::string character_name;
		int character_index;
		bool transparent;
		int initial_level;
		int final_level;
		bool critical_hit;
		int critical_hit_chance;
		std::string face_name;
		int face_index;
		bool two_swords_style;
		bool fix_equipment;
		bool auto_battle;
		bool super_guard;
		Parameters parameters;
		int exp_base;
		int exp_inflation;
		int exp_correction;
		Equipment initial_equipment;
		int unarmed_animation;
		int class_id;
		int battle_x;
		int battle_y;
		int battler_animation;
		std::vector<Learning> skills;
		bool rename_skill;
		std::string skill_name;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		std::vector<uint32_t> battle_commands;
	};
}

#endif
