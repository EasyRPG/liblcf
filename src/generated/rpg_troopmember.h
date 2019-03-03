/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_TROOPMEMBER_H
#define LCF_RPG_TROOPMEMBER_H

// Headers
#include <stdint.h>

/**
 * RPG::TroopMember class.
 */
namespace RPG {
	class TroopMember {
	public:
		int ID = 0;
		int32_t enemy_id = 1;
		int32_t x = 0;
		int32_t y = 0;
		bool invisible = false;
	};

	inline bool operator==(const TroopMember& l, const TroopMember& r) {
		return l.enemy_id == r.enemy_id
		&& l.x == r.x
		&& l.y == r.y
		&& l.invisible == r.invisible;
	}

	inline bool operator!=(const TroopMember& l, const TroopMember& r) {
		return !(l == r);
	}
}

#endif
