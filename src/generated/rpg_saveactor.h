/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEACTOR_H
#define LCF_RPG_SAVEACTOR_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"

/**
 * RPG::SaveActor class.
 */
namespace RPG {
	class SaveActor {
	public:
		void Setup(int actor_id);
		void Fixup(int actor_id);

		int ID = 0;
		std::string name;
		std::string title;
		std::string sprite_name;
		int sprite_id = 0;
		int sprite_flags = 0;
		std::string face_name;
		int face_id = 0;
		int level = -1;
		int exp = -1;
		int hp_mod = -1;
		int sp_mod = -1;
		int attack_mod = 0;
		int defense_mod = 0;
		int spirit_mod = 0;
		int agility_mod = 0;
		int skills_size = -1;
		std::vector<int16_t> skills;
		std::vector<int16_t> equipped;
		int current_hp = -1;
		int current_sp = -1;
		std::vector<uint32_t> battle_commands;
		int status_size = 0;
		std::vector<int16_t> status;
		bool changed_class = false;
		int class_id = -1;
		int row = 0;
		bool two_weapon = false;
		bool lock_equipment = false;
		bool auto_battle = false;
		bool super_guard = false;
		int battler_animation = 0;
	};
}

#endif
