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

#ifndef LCF_RPG_TESTBATTLER_H
#define LCF_RPG_TESTBATTLER_H

// Headers
#include <stdint.h>

/**
 * RPG::TestBattler class.
 */
namespace RPG {
	class TestBattler {
	public:
		int ID = 0;
		int32_t actor_id = 1;
		int32_t level = 1;
		int32_t weapon_id = 0;
		int32_t shield_id = 0;
		int32_t armor_id = 0;
		int32_t helmet_id = 0;
		int32_t accessory_id = 0;
	};
}

#endif
