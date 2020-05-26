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

#ifndef LCF_RPG_START_H
#define LCF_RPG_START_H

// Headers
#include <stdint.h>
#include <ostream>

/**
 * rpg::Start class.
 */
namespace lcf {
namespace rpg {
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

	inline bool operator==(const Start& l, const Start& r) {
		return l.party_map_id == r.party_map_id
		&& l.party_x == r.party_x
		&& l.party_y == r.party_y
		&& l.boat_map_id == r.boat_map_id
		&& l.boat_x == r.boat_x
		&& l.boat_y == r.boat_y
		&& l.ship_map_id == r.ship_map_id
		&& l.ship_x == r.ship_x
		&& l.ship_y == r.ship_y
		&& l.airship_map_id == r.airship_map_id
		&& l.airship_x == r.airship_x
		&& l.airship_y == r.airship_y;
	}

	inline bool operator!=(const Start& l, const Start& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const Start& obj) {
		os << "Start{";
		os << "party_map_id="<< obj.party_map_id;
		os << " party_x="<< obj.party_x;
		os << " party_y="<< obj.party_y;
		os << " boat_map_id="<< obj.boat_map_id;
		os << " boat_x="<< obj.boat_x;
		os << " boat_y="<< obj.boat_y;
		os << " ship_map_id="<< obj.ship_map_id;
		os << " ship_x="<< obj.ship_x;
		os << " ship_y="<< obj.ship_y;
		os << " airship_map_id="<< obj.airship_map_id;
		os << " airship_x="<< obj.airship_x;
		os << " airship_y="<< obj.airship_y;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
