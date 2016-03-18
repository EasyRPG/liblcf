/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_BATTLERANIMATIONDATA_H
#define LCF_RPG_BATTLERANIMATIONDATA_H

/**
 * RPG::BattlerAnimationData class.
 */
namespace RPG {
	class BattlerAnimationData {
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

		int ID = 0;
		int move = 0;
		int after_image = 0;
		int pose = 0;
	};
}

#endif
