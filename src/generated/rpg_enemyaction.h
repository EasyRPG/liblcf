/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ENEMYACTION_H
#define LCF_RPG_ENEMYACTION_H

/**
 * RPG::EnemyAction class.
 */
namespace RPG {
	class EnemyAction {
	public:
		enum Kind {
			Kind_basic = 0,
			Kind_skill = 1,
			Kind_transformation = 2
		};
		enum Basic {
			Basic_attack = 0,
			Basic_dual_attack = 1,
			Basic_defense = 2,
			Basic_observe = 3,
			Basic_charge = 4,
			Basic_autodestruction = 5,
			Basic_escape = 6,
			Basic_nothing = 7
		};
		enum ConditionType {
			ConditionType_always = 0,
			ConditionType_switch = 1,
			ConditionType_turn = 2,
			ConditionType_actors = 3,
			ConditionType_hp = 4,
			ConditionType_sp = 5,
			ConditionType_party_lvl = 6,
			ConditionType_party_fatigue = 7
		};

		EnemyAction();

		int ID;
		int kind;
		int basic;
		int skill_id;
		int enemy_id;
		int condition_type;
		int condition_param1;
		int condition_param2;
		int switch_id;
		bool switch_on;
		int switch_on_id;
		bool switch_off;
		int switch_off_id;
		int rating;
	};
}

#endif
