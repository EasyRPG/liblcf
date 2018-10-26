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

#ifndef LCF_RPG_START_H
#define LCF_RPG_START_H

// Headers
#include <stdint.h>

/**
 * RPG::Start class.
 */
namespace RPG {
	class Start {
	public:
		int32_t party_map_id = 0;
		int32_t party_x = 0;
		int32_t party_y = 0;
		int32_t boat_map_id = 0;
		int32_t boat_x = 0;
		int32_t boat_y = 0;
		int32_t ship_map_id = 0;
		int32_t ship_x = 0;
		int32_t ship_y = 0;
		int32_t airship_map_id = 0;
		int32_t airship_x = 0;
		int32_t airship_y = 0;
	};
}

#endif
