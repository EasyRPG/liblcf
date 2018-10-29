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

#ifndef LCF_RPG_MAP_H
#define LCF_RPG_MAP_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_event.h"

/**
 * RPG::Map class.
 */
namespace RPG {
	class Map {
	public:
		std::string lmu_header;
		enum ScrollType {
			ScrollType_none = 0,
			ScrollType_vertical = 1,
			ScrollType_horizontal = 2,
			ScrollType_both = 3
		};
		static constexpr auto kScrollTypeTags = makeEnumTags<ScrollType>(
			"none",
			"vertical",
			"horizontal",
			"both"
		);
		enum GeneratorMode {
			GeneratorMode_single_passage = 0,
			GeneratorMode_linked_rooms = 1,
			GeneratorMode_maze_passage = 2,
			GeneratorMode_open_room = 3
		};
		static constexpr auto kGeneratorModeTags = makeEnumTags<GeneratorMode>(
			"single_passage",
			"linked_rooms",
			"maze_passage",
			"open_room"
		);
		enum GeneratorTiles {
			GeneratorTiles_one = 0,
			GeneratorTiles_two = 1
		};
		static constexpr auto kGeneratorTilesTags = makeEnumTags<GeneratorTiles>(
			"one",
			"two"
		);

		int32_t chipset_id = 1;
		int32_t width = 20;
		int32_t height = 15;
		int32_t scroll_type = 0;
		bool parallax_flag = false;
		std::string parallax_name;
		bool parallax_loop_x = false;
		bool parallax_loop_y = false;
		bool parallax_auto_loop_x = false;
		int32_t parallax_sx = 0;
		bool parallax_auto_loop_y = false;
		int32_t parallax_sy = 0;
		bool generator_flag = false;
		int32_t generator_mode = 0;
		bool top_level = false;
		int32_t generator_tiles = 0;
		int32_t generator_width = 4;
		int32_t generator_height = 1;
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
		int32_t save_count_2k3e = 0;
		int32_t save_count = 0;
	};
}

#endif
