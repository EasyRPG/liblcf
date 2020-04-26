/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read SavePicture.

template <>
char const* const Struct<RPG::SavePicture>::name = "SavePicture";
static TypedField<RPG::SavePicture, std::string> static_name(
	&RPG::SavePicture::name,
	LSD_Reader::ChunkSavePicture::name,
	"name",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_start_x(
	&RPG::SavePicture::start_x,
	LSD_Reader::ChunkSavePicture::start_x,
	"start_x",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_start_y(
	&RPG::SavePicture::start_y,
	LSD_Reader::ChunkSavePicture::start_y,
	"start_y",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_x(
	&RPG::SavePicture::current_x,
	LSD_Reader::ChunkSavePicture::current_x,
	"current_x",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_y(
	&RPG::SavePicture::current_y,
	LSD_Reader::ChunkSavePicture::current_y,
	"current_y",
	0,
	0
);
static TypedField<RPG::SavePicture, bool> static_fixed_to_map(
	&RPG::SavePicture::fixed_to_map,
	LSD_Reader::ChunkSavePicture::fixed_to_map,
	"fixed_to_map",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_magnify(
	&RPG::SavePicture::current_magnify,
	LSD_Reader::ChunkSavePicture::current_magnify,
	"current_magnify",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_top_trans(
	&RPG::SavePicture::current_top_trans,
	LSD_Reader::ChunkSavePicture::current_top_trans,
	"current_top_trans",
	0,
	0
);
static TypedField<RPG::SavePicture, bool> static_use_transparent_color(
	&RPG::SavePicture::use_transparent_color,
	LSD_Reader::ChunkSavePicture::use_transparent_color,
	"use_transparent_color",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_red(
	&RPG::SavePicture::current_red,
	LSD_Reader::ChunkSavePicture::current_red,
	"current_red",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_green(
	&RPG::SavePicture::current_green,
	LSD_Reader::ChunkSavePicture::current_green,
	"current_green",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_blue(
	&RPG::SavePicture::current_blue,
	LSD_Reader::ChunkSavePicture::current_blue,
	"current_blue",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_sat(
	&RPG::SavePicture::current_sat,
	LSD_Reader::ChunkSavePicture::current_sat,
	"current_sat",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_effect_mode(
	&RPG::SavePicture::effect_mode,
	LSD_Reader::ChunkSavePicture::effect_mode,
	"effect_mode",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_effect_power(
	&RPG::SavePicture::current_effect_power,
	LSD_Reader::ChunkSavePicture::current_effect_power,
	"current_effect_power",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_bot_trans(
	&RPG::SavePicture::current_bot_trans,
	LSD_Reader::ChunkSavePicture::current_bot_trans,
	"current_bot_trans",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_spritesheet_cols(
	&RPG::SavePicture::spritesheet_cols,
	LSD_Reader::ChunkSavePicture::spritesheet_cols,
	"spritesheet_cols",
	0,
	1
);
static TypedField<RPG::SavePicture, int32_t> static_spritesheet_rows(
	&RPG::SavePicture::spritesheet_rows,
	LSD_Reader::ChunkSavePicture::spritesheet_rows,
	"spritesheet_rows",
	0,
	1
);
static TypedField<RPG::SavePicture, int32_t> static_spritesheet_frame(
	&RPG::SavePicture::spritesheet_frame,
	LSD_Reader::ChunkSavePicture::spritesheet_frame,
	"spritesheet_frame",
	0,
	1
);
static TypedField<RPG::SavePicture, int32_t> static_spritesheet_speed(
	&RPG::SavePicture::spritesheet_speed,
	LSD_Reader::ChunkSavePicture::spritesheet_speed,
	"spritesheet_speed",
	0,
	1
);
static TypedField<RPG::SavePicture, int32_t> static_frames(
	&RPG::SavePicture::frames,
	LSD_Reader::ChunkSavePicture::frames,
	"frames",
	0,
	1
);
static TypedField<RPG::SavePicture, bool> static_spritesheet_play_once(
	&RPG::SavePicture::spritesheet_play_once,
	LSD_Reader::ChunkSavePicture::spritesheet_play_once,
	"spritesheet_play_once",
	0,
	1
);
static TypedField<RPG::SavePicture, int32_t> static_map_layer(
	&RPG::SavePicture::map_layer,
	LSD_Reader::ChunkSavePicture::map_layer,
	"map_layer",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_battle_layer(
	&RPG::SavePicture::battle_layer,
	LSD_Reader::ChunkSavePicture::battle_layer,
	"battle_layer",
	0,
	0
);
static TypedField<RPG::SavePicture, RPG::SavePicture::Flags> static_flags(
	&RPG::SavePicture::flags,
	LSD_Reader::ChunkSavePicture::flags,
	"flags",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_finish_x(
	&RPG::SavePicture::finish_x,
	LSD_Reader::ChunkSavePicture::finish_x,
	"finish_x",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_finish_y(
	&RPG::SavePicture::finish_y,
	LSD_Reader::ChunkSavePicture::finish_y,
	"finish_y",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_finish_magnify(
	&RPG::SavePicture::finish_magnify,
	LSD_Reader::ChunkSavePicture::finish_magnify,
	"finish_magnify",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_finish_top_trans(
	&RPG::SavePicture::finish_top_trans,
	LSD_Reader::ChunkSavePicture::finish_top_trans,
	"finish_top_trans",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_finish_bot_trans(
	&RPG::SavePicture::finish_bot_trans,
	LSD_Reader::ChunkSavePicture::finish_bot_trans,
	"finish_bot_trans",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_finish_red(
	&RPG::SavePicture::finish_red,
	LSD_Reader::ChunkSavePicture::finish_red,
	"finish_red",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_finish_green(
	&RPG::SavePicture::finish_green,
	LSD_Reader::ChunkSavePicture::finish_green,
	"finish_green",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_finish_blue(
	&RPG::SavePicture::finish_blue,
	LSD_Reader::ChunkSavePicture::finish_blue,
	"finish_blue",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_finish_sat(
	&RPG::SavePicture::finish_sat,
	LSD_Reader::ChunkSavePicture::finish_sat,
	"finish_sat",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_finish_effect_power(
	&RPG::SavePicture::finish_effect_power,
	LSD_Reader::ChunkSavePicture::finish_effect_power,
	"finish_effect_power",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_time_left(
	&RPG::SavePicture::time_left,
	LSD_Reader::ChunkSavePicture::time_left,
	"time_left",
	0,
	0
);
static TypedField<RPG::SavePicture, double> static_current_rotation(
	&RPG::SavePicture::current_rotation,
	LSD_Reader::ChunkSavePicture::current_rotation,
	"current_rotation",
	0,
	0
);
static TypedField<RPG::SavePicture, int32_t> static_current_waver(
	&RPG::SavePicture::current_waver,
	LSD_Reader::ChunkSavePicture::current_waver,
	"current_waver",
	0,
	0
);


template <>
Field<RPG::SavePicture> const* Struct<RPG::SavePicture>::fields[] = {
	&static_name,
	&static_start_x,
	&static_start_y,
	&static_current_x,
	&static_current_y,
	&static_fixed_to_map,
	&static_current_magnify,
	&static_current_top_trans,
	&static_use_transparent_color,
	&static_current_red,
	&static_current_green,
	&static_current_blue,
	&static_current_sat,
	&static_effect_mode,
	&static_current_effect_power,
	&static_current_bot_trans,
	&static_spritesheet_cols,
	&static_spritesheet_rows,
	&static_spritesheet_frame,
	&static_spritesheet_speed,
	&static_frames,
	&static_spritesheet_play_once,
	&static_map_layer,
	&static_battle_layer,
	&static_flags,
	&static_finish_x,
	&static_finish_y,
	&static_finish_magnify,
	&static_finish_top_trans,
	&static_finish_bot_trans,
	&static_finish_red,
	&static_finish_green,
	&static_finish_blue,
	&static_finish_sat,
	&static_finish_effect_power,
	&static_time_left,
	&static_current_rotation,
	&static_current_waver,
	NULL
};

template class Struct<RPG::SavePicture>;
