/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
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

// Read SaveScreen.

template <>
char const* const Struct<RPG::SaveScreen>::name = "SaveScreen";
static TypedField<RPG::SaveScreen, int32_t> static_tint_finish_red(
	&RPG::SaveScreen::tint_finish_red,
	LSD_Reader::ChunkSaveScreen::tint_finish_red,
	"tint_finish_red",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_tint_finish_green(
	&RPG::SaveScreen::tint_finish_green,
	LSD_Reader::ChunkSaveScreen::tint_finish_green,
	"tint_finish_green",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_tint_finish_blue(
	&RPG::SaveScreen::tint_finish_blue,
	LSD_Reader::ChunkSaveScreen::tint_finish_blue,
	"tint_finish_blue",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_tint_finish_sat(
	&RPG::SaveScreen::tint_finish_sat,
	LSD_Reader::ChunkSaveScreen::tint_finish_sat,
	"tint_finish_sat",
	0,
	0
);
static TypedField<RPG::SaveScreen, double> static_tint_current_red(
	&RPG::SaveScreen::tint_current_red,
	LSD_Reader::ChunkSaveScreen::tint_current_red,
	"tint_current_red",
	0,
	0
);
static TypedField<RPG::SaveScreen, double> static_tint_current_green(
	&RPG::SaveScreen::tint_current_green,
	LSD_Reader::ChunkSaveScreen::tint_current_green,
	"tint_current_green",
	0,
	0
);
static TypedField<RPG::SaveScreen, double> static_tint_current_blue(
	&RPG::SaveScreen::tint_current_blue,
	LSD_Reader::ChunkSaveScreen::tint_current_blue,
	"tint_current_blue",
	0,
	0
);
static TypedField<RPG::SaveScreen, double> static_tint_current_sat(
	&RPG::SaveScreen::tint_current_sat,
	LSD_Reader::ChunkSaveScreen::tint_current_sat,
	"tint_current_sat",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_tint_time_left(
	&RPG::SaveScreen::tint_time_left,
	LSD_Reader::ChunkSaveScreen::tint_time_left,
	"tint_time_left",
	0,
	0
);
static TypedField<RPG::SaveScreen, bool> static_flash_continuous(
	&RPG::SaveScreen::flash_continuous,
	LSD_Reader::ChunkSaveScreen::flash_continuous,
	"flash_continuous",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_flash_red(
	&RPG::SaveScreen::flash_red,
	LSD_Reader::ChunkSaveScreen::flash_red,
	"flash_red",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_flash_green(
	&RPG::SaveScreen::flash_green,
	LSD_Reader::ChunkSaveScreen::flash_green,
	"flash_green",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_flash_blue(
	&RPG::SaveScreen::flash_blue,
	LSD_Reader::ChunkSaveScreen::flash_blue,
	"flash_blue",
	0,
	0
);
static TypedField<RPG::SaveScreen, double> static_flash_current_level(
	&RPG::SaveScreen::flash_current_level,
	LSD_Reader::ChunkSaveScreen::flash_current_level,
	"flash_current_level",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_flash_time_left(
	&RPG::SaveScreen::flash_time_left,
	LSD_Reader::ChunkSaveScreen::flash_time_left,
	"flash_time_left",
	0,
	0
);
static TypedField<RPG::SaveScreen, bool> static_shake_continuous(
	&RPG::SaveScreen::shake_continuous,
	LSD_Reader::ChunkSaveScreen::shake_continuous,
	"shake_continuous",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_shake_strength(
	&RPG::SaveScreen::shake_strength,
	LSD_Reader::ChunkSaveScreen::shake_strength,
	"shake_strength",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_shake_speed(
	&RPG::SaveScreen::shake_speed,
	LSD_Reader::ChunkSaveScreen::shake_speed,
	"shake_speed",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_shake_position(
	&RPG::SaveScreen::shake_position,
	LSD_Reader::ChunkSaveScreen::shake_position,
	"shake_position",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_shake_position_y(
	&RPG::SaveScreen::shake_position_y,
	LSD_Reader::ChunkSaveScreen::shake_position_y,
	"shake_position_y",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_shake_time_left(
	&RPG::SaveScreen::shake_time_left,
	LSD_Reader::ChunkSaveScreen::shake_time_left,
	"shake_time_left",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_pan_x(
	&RPG::SaveScreen::pan_x,
	LSD_Reader::ChunkSaveScreen::pan_x,
	"pan_x",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_pan_y(
	&RPG::SaveScreen::pan_y,
	LSD_Reader::ChunkSaveScreen::pan_y,
	"pan_y",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_battleanim_id(
	&RPG::SaveScreen::battleanim_id,
	LSD_Reader::ChunkSaveScreen::battleanim_id,
	"battleanim_id",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_battleanim_target(
	&RPG::SaveScreen::battleanim_target,
	LSD_Reader::ChunkSaveScreen::battleanim_target,
	"battleanim_target",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_battleanim_frame(
	&RPG::SaveScreen::battleanim_frame,
	LSD_Reader::ChunkSaveScreen::battleanim_frame,
	"battleanim_frame",
	0,
	0
);
static TypedField<RPG::SaveScreen, bool> static_battleanim_active(
	&RPG::SaveScreen::battleanim_active,
	LSD_Reader::ChunkSaveScreen::battleanim_active,
	"battleanim_active",
	0,
	0
);
static TypedField<RPG::SaveScreen, bool> static_battleanim_global(
	&RPG::SaveScreen::battleanim_global,
	LSD_Reader::ChunkSaveScreen::battleanim_global,
	"battleanim_global",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_weather(
	&RPG::SaveScreen::weather,
	LSD_Reader::ChunkSaveScreen::weather,
	"weather",
	0,
	0
);
static TypedField<RPG::SaveScreen, int32_t> static_weather_strength(
	&RPG::SaveScreen::weather_strength,
	LSD_Reader::ChunkSaveScreen::weather_strength,
	"weather_strength",
	0,
	0
);


template <>
Field<RPG::SaveScreen> const* Struct<RPG::SaveScreen>::fields[] = {
	&static_tint_finish_red,
	&static_tint_finish_green,
	&static_tint_finish_blue,
	&static_tint_finish_sat,
	&static_tint_current_red,
	&static_tint_current_green,
	&static_tint_current_blue,
	&static_tint_current_sat,
	&static_tint_time_left,
	&static_flash_continuous,
	&static_flash_red,
	&static_flash_green,
	&static_flash_blue,
	&static_flash_current_level,
	&static_flash_time_left,
	&static_shake_continuous,
	&static_shake_strength,
	&static_shake_speed,
	&static_shake_position,
	&static_shake_position_y,
	&static_shake_time_left,
	&static_pan_x,
	&static_pan_y,
	&static_battleanim_id,
	&static_battleanim_target,
	&static_battleanim_frame,
	&static_battleanim_active,
	&static_battleanim_global,
	&static_weather,
	&static_weather_strength,
	NULL
};

template class Struct<RPG::SaveScreen>;
