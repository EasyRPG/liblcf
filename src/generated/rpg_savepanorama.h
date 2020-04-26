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

#ifndef LCF_RPG_SAVEPANORAMA_H
#define LCF_RPG_SAVEPANORAMA_H

// Headers
#include <stdint.h>

/**
 * RPG::SavePanorama class.
 */
namespace RPG {
	class SavePanorama {
	public:
		int32_t pan_x = 0;
		int32_t pan_y = 0;
	};

	inline bool operator==(const SavePanorama& l, const SavePanorama& r) {
		return l.pan_x == r.pan_x
		&& l.pan_y == r.pan_y;
	}

	inline bool operator!=(const SavePanorama& l, const SavePanorama& r) {
		return !(l == r);
	}
}

#endif
