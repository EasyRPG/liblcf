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

#ifndef LCF_RPG_SAVETITLE_H
#define LCF_RPG_SAVETITLE_H

// Headers
#include <stdint.h>
#include <string>
#include <ostream>

/**
 * rpg::SaveTitle class.
 */
namespace lcf {
namespace rpg {
	class SaveTitle {
	public:
		double timestamp = 0.0;
		std::string hero_name;
		int32_t hero_level = 0;
		int32_t hero_hp = 0;
		std::string face1_name;
		int32_t face1_id = 0;
		std::string face2_name;
		int32_t face2_id = 0;
		std::string face3_name;
		int32_t face3_id = 0;
		std::string face4_name;
		int32_t face4_id = 0;
	};

	inline bool operator==(const SaveTitle& l, const SaveTitle& r) {
		return l.timestamp == r.timestamp
		&& l.hero_name == r.hero_name
		&& l.hero_level == r.hero_level
		&& l.hero_hp == r.hero_hp
		&& l.face1_name == r.face1_name
		&& l.face1_id == r.face1_id
		&& l.face2_name == r.face2_name
		&& l.face2_id == r.face2_id
		&& l.face3_name == r.face3_name
		&& l.face3_id == r.face3_id
		&& l.face4_name == r.face4_name
		&& l.face4_id == r.face4_id;
	}

	inline bool operator!=(const SaveTitle& l, const SaveTitle& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const SaveTitle& obj) {
		os << "SaveTitle{";
		os << "timestamp="<< obj.timestamp;
		os << " hero_name="<< obj.hero_name;
		os << " hero_level="<< obj.hero_level;
		os << " hero_hp="<< obj.hero_hp;
		os << " face1_name="<< obj.face1_name;
		os << " face1_id="<< obj.face1_id;
		os << " face2_name="<< obj.face2_name;
		os << " face2_id="<< obj.face2_id;
		os << " face3_name="<< obj.face3_name;
		os << " face3_id="<< obj.face3_id;
		os << " face4_name="<< obj.face4_name;
		os << " face4_id="<< obj.face4_id;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
