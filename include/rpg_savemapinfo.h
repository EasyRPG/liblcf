/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEMAPINFO_H
#define LCF_RPG_SAVEMAPINFO_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_map.h"
#include "rpg_mapinfo.h"
#include "rpg_savemapevent.h"

/**
 * RPG::SaveMapInfo class.
 */
namespace RPG {
	class SaveMapInfo {
	public:
		SaveMapInfo();
		void Setup();
		void Setup(const RPG::Map& map);
		void Setup(const RPG::MapInfo& map_info);
		void Fixup(const RPG::Map& map);

		int position_x;
		int position_y;
		int encounter_rate;
		int chipset_id;
		std::vector<SaveMapEvent> events;
		std::vector<uint8_t> lower_tiles;
		std::vector<uint8_t> upper_tiles;
		std::string parallax_name;
		bool parallax_horz;
		bool parallax_vert;
		bool parallax_horz_auto;
		int parallax_horz_speed;
		bool parallax_vert_auto;
		int parallax_vert_speed;
	};
}

#endif
