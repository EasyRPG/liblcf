/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEMAPINFO_H
#define LCF_RPG_SAVEMAPINFO_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "rpg_map.h"
#include "rpg_mapinfo.h"
#include "rpg_savemapevent.h"

/**
 * RPG::SaveMapInfo class.
 */
namespace RPG {
	class SaveMapInfo {
	public:
		void Setup();
		void Setup(const RPG::Map& map);
		void Fixup(const RPG::Map& map);
		void Fixup(const RPG::MapInfo& map);
		void UnFixup(const RPG::Map& map);
		void UnFixup(const RPG::MapInfo& map);
		int32_t position_x = 0;
		int32_t position_y = 0;
		int32_t encounter_rate = -1;
		int32_t chipset_id = -1;
		std::vector<SaveMapEvent> events;
		std::vector<uint8_t> lower_tiles;
		std::vector<uint8_t> upper_tiles;
		std::string parallax_name;
		bool parallax_horz = false;
		bool parallax_vert = false;
		bool parallax_horz_auto = false;
		int32_t parallax_horz_speed = 0;
		bool parallax_vert_auto = false;
		int32_t parallax_vert_speed = 0;
	};

	inline bool operator==(const SaveMapInfo& l, const SaveMapInfo& r) {
		return l.position_x == r.position_x
		&& l.position_y == r.position_y
		&& l.encounter_rate == r.encounter_rate
		&& l.chipset_id == r.chipset_id
		&& l.events == r.events
		&& l.lower_tiles == r.lower_tiles
		&& l.upper_tiles == r.upper_tiles
		&& l.parallax_name == r.parallax_name
		&& l.parallax_horz == r.parallax_horz
		&& l.parallax_vert == r.parallax_vert
		&& l.parallax_horz_auto == r.parallax_horz_auto
		&& l.parallax_horz_speed == r.parallax_horz_speed
		&& l.parallax_vert_auto == r.parallax_vert_auto
		&& l.parallax_vert_speed == r.parallax_vert_speed;
	}

	inline bool operator!=(const SaveMapInfo& l, const SaveMapInfo& r) {
		return !(l == r);
	}
}

#endif
