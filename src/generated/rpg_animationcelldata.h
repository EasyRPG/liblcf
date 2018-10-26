/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_ANIMATIONCELLDATA_H
#define LCF_RPG_ANIMATIONCELLDATA_H

// Headers
#include <stdint.h>

/**
 * RPG::AnimationCellData class.
 */
namespace RPG {
	class AnimationCellData {
	public:
		int ID = 0;
		int32_t valid = 1;
		int32_t cell_id = 0;
		int32_t x = 0;
		int32_t y = 0;
		int32_t zoom = 100;
		int32_t tone_red = 100;
		int32_t tone_green = 100;
		int32_t tone_blue = 100;
		int32_t tone_gray = 100;
		int32_t transparency = 0;
	};
}

#endif
