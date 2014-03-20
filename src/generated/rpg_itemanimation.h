/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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

		ItemAnimation();

		int ID;
		int type;
		int weapon_anim;
		int movement;
		int after_image;
		int attacks;
		bool ranged;
		int ranged_anim;
		int ranged_speed;
		int battle_anim;
	};
}

#endif
