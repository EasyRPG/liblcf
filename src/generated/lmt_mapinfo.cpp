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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_struct.h"

// Read MapInfo.

#define LCF_CHUNK_SUFFIX LMT_Reader
#define LCF_CURRENT_STRUCT MapInfo

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, parent_map, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, indentation, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, type, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, scrollbar_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, scrollbar_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, expanded_node, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, music_type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, background_type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, background_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, teleport, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, escape, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, save, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Encounter>, encounters, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, encounter_steps, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Rect, area_rect, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
