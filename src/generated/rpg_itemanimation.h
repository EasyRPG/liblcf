/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_ITEMANIMATION_H
#define LCF_RPG_ITEMANIMATION_H

/**
 * RPG::ItemAnimation class.
 */
namespace RPG {
	class ItemAnimation {
	public:
		enum Movement {
			Movement_none = 0,
			Movement_step = 1,
			Movement_jump = 2,
			Movement_move = 3
		};
		enum AfterImage {
			AfterImage_none = 0,
			AfterImage_add = 1
		};
		enum Speed {
			Speed_fast = 0,
			Speed_medium = 1,
			Speed_slow = 2
		};

		int ID = 0;
		int type = 0;
		int weapon_anim = 0;
		int movement = 0;
		int after_image = 0;
		int attacks = 0;
		bool ranged = false;
		int ranged_anim = 0;
		int ranged_speed = 0;
		int battle_anim = 0;
	};
}

#endif
