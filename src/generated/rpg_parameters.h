/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_PARAMETERS_H
#define LCF_RPG_PARAMETERS_H

// Headers
#include <vector>
#include "reader_types.h"

/**
 * RPG::Parameters class.
 */
namespace RPG {
	class Parameters {
	public:
		void Setup(int final_level);

		std::vector<int16_t> maxhp;
		std::vector<int16_t> maxsp;
		std::vector<int16_t> attack;
		std::vector<int16_t> defense;
		std::vector<int16_t> spirit;
		std::vector<int16_t> agility;
	};
}

#endif
