/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_EVENTPAGECONDITION_H
#define LCF_RPG_EVENTPAGECONDITION_H

/**
 * RPG::EventPageCondition class.
 */
namespace RPG {
	class EventPageCondition {
	public:
		enum Comparison {
			Comparison_equal = 0,
			Comparison_greater_equal = 1,
			Comparison_less_equal = 2,
			Comparison_greater = 3,
			Comparison_less = 4,
			Comparison_not_equal = 5
		};

		struct Flags {
			bool switch_a;
			bool switch_b;
			bool variable;
			bool item;
			bool actor;
			bool timer;
			bool timer2;
		} flags;
		int switch_a_id = 1;
		int switch_b_id = 1;
		int variable_id = 1;
		int variable_value = 0;
		int item_id = 1;
		int actor_id = 1;
		int timer_sec = 0;
		int timer2_sec = 0;
		int compare_operator = 1;
	};
}

#endif
