/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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

		Map();

		int ID;
		int chipset_id;
		int width;
		int height;
		int scroll_type;
		bool parallax_flag;
		std::string parallax_name;
		bool parallax_loop_x;
		bool parallax_loop_y;
		bool parallax_auto_loop_x;
		int parallax_sx;
		bool parallax_auto_loop_y;
		int parallax_sy;
		bool generator_flag;
		int generator_mode;
		bool top_level;
		int generator_tiles;
		int generator_width;
		int generator_height;
		bool generator_surround;
		bool generator_upper_wall;
		bool generator_floor_b;
		bool generator_floor_c;
		bool generator_extra_b;
		bool generator_extra_c;
		std::vector<uint32_t> generator_x;
		std::vector<uint32_t> generator_y;
		std::vector<int16_t> generator_tile_ids;
		std::vector<int16_t> lower_layer;
		std::vector<int16_t> upper_layer;
		std::vector<Event> events;
		int save_count;
	};
}

#endif
