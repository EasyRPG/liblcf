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

#ifndef LCF_RPG_PARAMETERS_H
#define LCF_RPG_PARAMETERS_H

// Headers
#include <stdint.h>
#include <vector>
#include <ostream>

/**
 * rpg::Parameters class.
 */
namespace lcf {
namespace rpg {
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

	inline bool operator==(const Parameters& l, const Parameters& r) {
		return l.maxhp == r.maxhp
		&& l.maxsp == r.maxsp
		&& l.attack == r.attack
		&& l.defense == r.defense
		&& l.spirit == r.spirit
		&& l.agility == r.agility;
	}

	inline bool operator!=(const Parameters& l, const Parameters& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const Parameters& obj) {
		os << "Parameters{";
		os << "maxhp=";
		for (size_t i = 0; i < obj.maxhp.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.maxhp[i];
		}
		os << "]";
		os << " maxsp=";
		for (size_t i = 0; i < obj.maxsp.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.maxsp[i];
		}
		os << "]";
		os << " attack=";
		for (size_t i = 0; i < obj.attack.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.attack[i];
		}
		os << "]";
		os << " defense=";
		for (size_t i = 0; i < obj.defense.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.defense[i];
		}
		os << "]";
		os << " spirit=";
		for (size_t i = 0; i < obj.spirit.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.spirit[i];
		}
		os << "]";
		os << " agility=";
		for (size_t i = 0; i < obj.agility.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.agility[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
