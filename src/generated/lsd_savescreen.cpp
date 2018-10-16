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

// Read SaveScreen.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveScreen

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, tint_finish_red, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, tint_finish_green, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, tint_finish_blue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, tint_finish_sat, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, tint_current_red, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, tint_current_green, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, tint_current_blue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, tint_current_sat, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, tint_time_left, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, flash_continuous, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_red, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_green, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_blue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(double, flash_current_level, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_time_left, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, shake_continuous, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, shake_strength, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, shake_speed, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, shake_position, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, shake_position_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, shake_time_left, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, pan_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battleanim_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battleanim_target, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battleanim_frame, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, battleanim_active, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, battleanim_global, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, weather, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, weather_strength, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
