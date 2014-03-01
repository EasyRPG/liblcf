/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_TROOPPAGECONDITION_H
#define LCF_RPG_TROOPPAGECONDITION_H

/**
 * RPG::TroopPageCondition class.
 */
namespace RPG {
	class TroopPageCondition {
	public:
		TroopPageCondition();

		struct Flags {
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
		} flags;
		int switch_a_id;
		int switch_b_id;
		int variable_id;
		int variable_value;
		int turn_a;
		int turn_b;
		int fatigue_min;
		int fatigue_max;
		int enemy_id;
		int enemy_hp_min;
		int enemy_hp_max;
		int actor_id;
		int actor_hp_min;
		int actor_hp_max;
		int turn_enemy_id;
		int turn_enemy_a;
		int turn_enemy_b;
		int turn_actor_id;
		int turn_actor_a;
		int turn_actor_b;
		int command_actor_id;
		int command_id;
	};
}

#endif
