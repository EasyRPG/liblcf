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

#ifndef LCF_RPG_SAVETARGET_H
#define LCF_RPG_SAVETARGET_H

// Headers
#include <stdint.h>

/**
 * RPG::SaveTarget class.
 */
namespace RPG {
	class SaveTarget {
	public:
		int ID = 0;
		int32_t map_id = 0;
		int32_t map_x = 0;
		int32_t map_y = 0;
		bool switch_on = false;
		int32_t switch_id = 0;
	};

	inline bool operator==(const SaveTarget& l, const SaveTarget& r) {
		return l.map_id == r.map_id
		&& l.map_x == r.map_x
		&& l.map_y == r.map_y
		&& l.switch_on == r.switch_on
		&& l.switch_id == r.switch_id;
	}

	inline bool operator!=(const SaveTarget& l, const SaveTarget& r) {
		return !(l == r);
	}
}

#endif
