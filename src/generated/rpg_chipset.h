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

#ifndef LCF_RPG_CHIPSET_H
#define LCF_RPG_CHIPSET_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "enum_tags.h"

/**
 * RPG::Chipset class.
 */
namespace RPG {
	class Chipset {
	public:
		enum AnimType {
			AnimType_reciprocating = 0,
			AnimType_cyclic = 1
		};
		static constexpr auto kAnimTypeTags = makeEnumTags<AnimType>(
			"reciprocating",
			"cyclic"
		);

		Chipset();
		void Init();
		int ID = 0;
		std::string name;
		std::string chipset_name;
		std::vector<int16_t> terrain_data;
		std::vector<uint8_t> passable_data_lower;
		std::vector<uint8_t> passable_data_upper;
		int32_t animation_type = 0;
		int32_t animation_speed = 0;
	};
}

#endif
