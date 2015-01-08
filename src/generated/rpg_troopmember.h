/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_TROOPMEMBER_H
#define LCF_RPG_TROOPMEMBER_H

/**
 * RPG::TroopMember class.
 */
namespace RPG {
	class TroopMember {
	public:
		TroopMember();

		int ID;
		int enemy_id;
		int x;
		int y;
		bool invisible;
	};
}

#endif
