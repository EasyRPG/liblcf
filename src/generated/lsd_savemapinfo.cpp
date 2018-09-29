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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveMapInfo.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveMapInfo

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, position_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, position_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, encounter_rate, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, chipset_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveMapEvent>, events, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, lower_tiles, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint8_t>, upper_tiles, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, parallax_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_horz, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_vert, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_horz_auto, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, parallax_horz_speed, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, parallax_vert_auto, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, parallax_vert_speed, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
