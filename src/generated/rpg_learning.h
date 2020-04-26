/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_LEARNING_H
#define LCF_RPG_LEARNING_H

// Headers
#include <stdint.h>

/**
 * RPG::Learning class.
 */
namespace RPG {
	class Learning {
	public:
		int ID = 0;
		int32_t level = 1;
		int32_t skill_id = 1;
	};

	inline bool operator==(const Learning& l, const Learning& r) {
		return l.level == r.level
		&& l.skill_id == r.skill_id;
	}

	inline bool operator!=(const Learning& l, const Learning& r) {
		return !(l == r);
	}
}

#endif
