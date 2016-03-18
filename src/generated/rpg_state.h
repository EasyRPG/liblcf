/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_STATE_H
#define LCF_RPG_STATE_H

// Headers
#include <string>

/**
 * RPG::State class.
 */
namespace RPG {
	class State {
	public:
		enum Persistence {
			Persistence_ends = 0,
			Persistence_persists = 1
		};
		enum Restriction {
			Restriction_normal = 0,
			Restriction_do_nothing = 1,
			Restriction_attack_enemy = 2,
			Restriction_attack_ally = 3
		};
		enum AffectType {
			AffectType_half = 0,
			AffectType_double = 1,
			AffectType_nothing = 2
		};
		enum ChangeType {
			ChangeType_lose = 0,
			ChangeType_gain = 1,
			ChangeType_nothing = 2
		};

		int ID = 0;
		std::string name;
		int type = 0;
		int color = 6;
		int priority = 50;
		int restriction = 0;
		int a_rate = 100;
		int b_rate = 80;
		int c_rate = 60;
		int d_rate = 30;
		int e_rate = 0;
		int hold_turn = 0;
		int auto_release_prob = 0;
		int release_by_damage = 0;
		int affect_type = 0;
		bool affect_attack = false;
		bool affect_defense = false;
		bool affect_spirit = false;
		bool affect_agility = false;
		int reduce_hit_ratio = 100;
		bool avoid_attacks = false;
		bool reflect_magic = false;
		bool cursed = false;
		int battler_animation_id = 100;
		bool restrict_skill = false;
		int restrict_skill_level = 0;
		bool restrict_magic = false;
		int restrict_magic_level = 0;
		int hp_change_type = 0;
		int sp_change_type = 0;
		std::string message_actor;
		std::string message_enemy;
		std::string message_already;
		std::string message_affected;
		std::string message_recovery;
		int hp_change_max = 0;
		int hp_change_val = 0;
		int hp_change_map_val = 0;
		int hp_change_map_steps = 0;
		int sp_change_max = 0;
		int sp_change_val = 0;
		int sp_change_map_val = 0;
		int sp_change_map_steps = 0;
	};
}

#endif
