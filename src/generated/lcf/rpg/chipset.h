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
#include <type_traits>

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

		template <typename F>
		void ForEachString(const F& f);
	};
	inline std::ostream& operator<<(std::ostream& os, Chipset::AnimType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

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

	std::ostream& operator<<(std::ostream& os, const Chipset& obj);

	template <typename F>
	inline void Chipset::ForEachString(const F& f) {
		name = f(name, "name");
		chipset_name = f(chipset_name, "chipset_name");
	}
} // namespace rpg
} // namespace lcf

#endif
