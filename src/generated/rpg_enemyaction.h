/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
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

		int ID = 0;
		int kind = 0;
		int basic = 1;
		int skill_id = 1;
		int enemy_id = 1;
		int condition_type = 0;
		int condition_param1 = 0;
		int condition_param2 = 0;
		int switch_id = 1;
		bool switch_on = false;
		int switch_on_id = 1;
		bool switch_off = false;
		int switch_off_id = 1;
		int rating = 50;
	};
}

#endif
