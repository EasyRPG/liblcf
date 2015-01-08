/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
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
		SaveActor();
		void Setup(int actor_id);
		void Fixup();

		int ID;
		std::string name;
		std::string title;
		std::string sprite_name;
		int sprite_id;
		int sprite_flags;
		std::string face_name;
		int face_id;
		int level;
		int exp;
		int hp_mod;
		int sp_mod;
		int attack_mod;
		int defense_mod;
		int spirit_mod;
		int agility_mod;
		int skills_size;
		std::vector<int16_t> skills;
		std::vector<int16_t> equipped;
		int current_hp;
		int current_sp;
		std::vector<uint32_t> battle_commands;
		int status_size;
		std::vector<int16_t> status;
		bool changed_class;
		int class_id;
		int row;
		bool two_weapon;
		bool lock_equipment;
		bool auto_battle;
		bool mighty_guard;
		int unknown_60;
	};
}

#endif
