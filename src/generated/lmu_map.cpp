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

// Headers
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct.h"

// Read Map.

#define LCF_CHUNK_SUFFIX LMU_Reader
#define LCF_CURRENT_STRUCT Map

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, chipset_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, width, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, height, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, scroll_type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_flag, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, parallax_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_loop_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_loop_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_auto_loop_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, parallax_sx, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_auto_loop_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, parallax_sy, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, generator_flag, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, generator_mode, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, top_level, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, generator_tiles, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, generator_width, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, generator_height, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, generator_surround, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, generator_upper_wall, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, generator_floor_b, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, generator_floor_c, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, generator_extra_b, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, generator_extra_c, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, generator_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, generator_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, generator_tile_ids, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, lower_layer, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, upper_layer, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Event>, events, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, save_count_2k3e, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, save_count, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
