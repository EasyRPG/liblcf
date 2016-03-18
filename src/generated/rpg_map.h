/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_MAP_H
#define LCF_RPG_MAP_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_event.h"

/**
 * RPG::Map class.
 */
namespace RPG {
	class Map {
	public:
		enum ScrollType {
			ScrollType_none = 0,
			ScrollType_vertical = 1,
			ScrollType_horizontal = 2,
			ScrollType_both = 3
		};
		enum GeneratorMode {
			GeneratorMode_single_passage = 0,
			GeneratorMode_linked_rooms = 1,
			GeneratorMode_maze_passage = 2,
			GeneratorMode_open_room = 3
		};
		enum GeneratorTiles {
			GeneratorTiles_one = 0,
			GeneratorTiles_two = 1
		};

		int ID = 0;
		int chipset_id = 1;
		int width = 20;
		int height = 15;
		int scroll_type = 0;
		bool parallax_flag = false;
		std::string parallax_name;
		bool parallax_loop_x = false;
		bool parallax_loop_y = false;
		bool parallax_auto_loop_x = false;
		int parallax_sx = 0;
		bool parallax_auto_loop_y = false;
		int parallax_sy = 0;
		bool generator_flag = false;
		int generator_mode = 0;
		bool top_level = false;
		int generator_tiles = 0;
		int generator_width = 4;
		int generator_height = 1;
		bool generator_surround = true;
		bool generator_upper_wall = true;
		bool generator_floor_b = true;
		bool generator_floor_c = true;
		bool generator_extra_b = true;
		bool generator_extra_c = true;
		std::vector<uint32_t> generator_x;
		std::vector<uint32_t> generator_y;
		std::vector<int16_t> generator_tile_ids;
		std::vector<int16_t> lower_layer;
		std::vector<int16_t> upper_layer;
		std::vector<Event> events;
		int save_count = 0;
	};
}

#endif
