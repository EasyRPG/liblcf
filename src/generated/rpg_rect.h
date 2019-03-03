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

#ifndef LCF_RPG_RECT_H
#define LCF_RPG_RECT_H

// Headers
#include <stdint.h>

/**
 * RPG::Rect class.
 */
namespace RPG {
	class Rect {
	public:
		uint32_t l = 0;
		uint32_t t = 0;
		uint32_t r = 0;
		uint32_t b = 0;
	};

	inline bool operator==(const Rect& l, const Rect& r) {
		return l.l == r.l
		&& l.t == r.t
		&& l.r == r.r
		&& l.b == r.b;
	}

	inline bool operator!=(const Rect& l, const Rect& r) {
		return !(l == r);
	}
}

#endif
