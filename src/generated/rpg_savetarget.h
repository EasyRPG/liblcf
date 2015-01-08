/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVETARGET_H
#define LCF_RPG_SAVETARGET_H

/**
 * RPG::SaveTarget class.
 */
namespace RPG {
	class SaveTarget {
	public:
		SaveTarget();

		int ID;
		int map_id;
		int map_x;
		int map_y;
		bool switch_on;
		int switch_id;
	};
}

#endif
