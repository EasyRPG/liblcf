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

// Read SavePicture.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SavePicture

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::string, name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, start_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, start_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, fixed_to_map, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_magnify, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_top_trans, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, transparency, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_red, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_green, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_blue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_sat, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, effect_mode, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_effect, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_bot_trans, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, spritesheet_cols, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, spritesheet_rows, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, spritesheet_frame, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, spritesheet_speed, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, frames, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, spritesheet_play_once, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, map_layer, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_layer, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SavePicture::Flags, flags, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, finish_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, finish_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, finish_magnify, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, finish_top_trans, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, finish_bot_trans, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, finish_red, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, finish_green, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, finish_blue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, finish_sat, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, finish_effect, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, time_left, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, current_rotation, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, current_waver, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
