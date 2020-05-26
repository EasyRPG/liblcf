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

#ifndef LCF_RPG_CHIPSET_H
#define LCF_RPG_CHIPSET_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include <ostream>

/**
 * rpg::Chipset class.
 */
namespace lcf {
namespace rpg {
	class Chipset {
	public:
		enum AnimType {
			AnimType_reciprocating = 0,
			AnimType_cyclic = 1
		};
		static constexpr auto kAnimTypeTags = lcf::makeEnumTags<AnimType>(
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

	inline bool operator==(const Chipset& l, const Chipset& r) {
		return l.name == r.name
		&& l.chipset_name == r.chipset_name
		&& l.terrain_data == r.terrain_data
		&& l.passable_data_lower == r.passable_data_lower
		&& l.passable_data_upper == r.passable_data_upper
		&& l.animation_type == r.animation_type
		&& l.animation_speed == r.animation_speed;
	}

	inline bool operator!=(const Chipset& l, const Chipset& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const Chipset& obj) {
		os << "Chipset{";
		os << "name="<< obj.name;
		os << " chipset_name="<< obj.chipset_name;
		os << " terrain_data=";
		for (size_t i = 0; i < obj.terrain_data.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.terrain_data[i];
		}
		os << "]";
		os << " passable_data_lower=";
		for (size_t i = 0; i < obj.passable_data_lower.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.passable_data_lower[i];
		}
		os << "]";
		os << " passable_data_upper=";
		for (size_t i = 0; i < obj.passable_data_upper.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.passable_data_upper[i];
		}
		os << "]";
		os << " animation_type="<< obj.animation_type;
		os << " animation_speed="<< obj.animation_speed;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
