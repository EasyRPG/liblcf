/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
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
	LCF_STRUCT_TYPED_FIELD(int, chipset_id),
	LCF_STRUCT_TYPED_FIELD(int, width),
	LCF_STRUCT_TYPED_FIELD(int, height),
	LCF_STRUCT_TYPED_FIELD(int, scroll_type),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_flag),
	LCF_STRUCT_TYPED_FIELD(std::string, parallax_name),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_loop_x),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_loop_y),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_auto_loop_x),
	LCF_STRUCT_TYPED_FIELD(int, parallax_sx),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_auto_loop_y),
	LCF_STRUCT_TYPED_FIELD(int, parallax_sy),
	LCF_STRUCT_TYPED_FIELD(bool, generator_flag),
	LCF_STRUCT_TYPED_FIELD(int, generator_mode),
	LCF_STRUCT_TYPED_FIELD(bool, top_level),
	LCF_STRUCT_TYPED_FIELD(int, generator_tiles),
	LCF_STRUCT_TYPED_FIELD(int, generator_width),
	LCF_STRUCT_TYPED_FIELD(int, generator_height),
	LCF_STRUCT_TYPED_FIELD(bool, generator_surround),
	LCF_STRUCT_TYPED_FIELD(bool, generator_upper_wall),
	LCF_STRUCT_TYPED_FIELD(bool, generator_floor_b),
	LCF_STRUCT_TYPED_FIELD(bool, generator_floor_c),
	LCF_STRUCT_TYPED_FIELD(bool, generator_extra_b),
	LCF_STRUCT_TYPED_FIELD(bool, generator_extra_c),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, generator_x),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, generator_y),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, generator_tile_ids),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, lower_layer),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, upper_layer),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Event>, events),
	LCF_STRUCT_TYPED_FIELD(int, save_count),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
