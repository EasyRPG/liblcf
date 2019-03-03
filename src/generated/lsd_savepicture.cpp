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

// Read SavePicture.

template <>
char const* const Struct<RPG::SavePicture>::name = "SavePicture";

template <>
Field<RPG::SavePicture> const* Struct<RPG::SavePicture>::fields[] = {
	new TypedField<RPG::SavePicture, std::string>(
		&RPG::SavePicture::name,
		LSD_Reader::ChunkSavePicture::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::start_x,
		LSD_Reader::ChunkSavePicture::start_x,
		"start_x",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::start_y,
		LSD_Reader::ChunkSavePicture::start_y,
		"start_y",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_x,
		LSD_Reader::ChunkSavePicture::current_x,
		"current_x",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_y,
		LSD_Reader::ChunkSavePicture::current_y,
		"current_y",
		0,
		0
	),
	new TypedField<RPG::SavePicture, bool>(
		&RPG::SavePicture::fixed_to_map,
		LSD_Reader::ChunkSavePicture::fixed_to_map,
		"fixed_to_map",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_magnify,
		LSD_Reader::ChunkSavePicture::current_magnify,
		"current_magnify",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_top_trans,
		LSD_Reader::ChunkSavePicture::current_top_trans,
		"current_top_trans",
		0,
		0
	),
	new TypedField<RPG::SavePicture, bool>(
		&RPG::SavePicture::transparency,
		LSD_Reader::ChunkSavePicture::transparency,
		"transparency",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_red,
		LSD_Reader::ChunkSavePicture::current_red,
		"current_red",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_green,
		LSD_Reader::ChunkSavePicture::current_green,
		"current_green",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_blue,
		LSD_Reader::ChunkSavePicture::current_blue,
		"current_blue",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_sat,
		LSD_Reader::ChunkSavePicture::current_sat,
		"current_sat",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::effect_mode,
		LSD_Reader::ChunkSavePicture::effect_mode,
		"effect_mode",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_effect,
		LSD_Reader::ChunkSavePicture::current_effect,
		"current_effect",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_bot_trans,
		LSD_Reader::ChunkSavePicture::current_bot_trans,
		"current_bot_trans",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::spritesheet_cols,
		LSD_Reader::ChunkSavePicture::spritesheet_cols,
		"spritesheet_cols",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::spritesheet_rows,
		LSD_Reader::ChunkSavePicture::spritesheet_rows,
		"spritesheet_rows",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::spritesheet_frame,
		LSD_Reader::ChunkSavePicture::spritesheet_frame,
		"spritesheet_frame",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::spritesheet_speed,
		LSD_Reader::ChunkSavePicture::spritesheet_speed,
		"spritesheet_speed",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::frames,
		LSD_Reader::ChunkSavePicture::frames,
		"frames",
		0,
		0
	),
	new TypedField<RPG::SavePicture, bool>(
		&RPG::SavePicture::spritesheet_play_once,
		LSD_Reader::ChunkSavePicture::spritesheet_play_once,
		"spritesheet_play_once",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::map_layer,
		LSD_Reader::ChunkSavePicture::map_layer,
		"map_layer",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::battle_layer,
		LSD_Reader::ChunkSavePicture::battle_layer,
		"battle_layer",
		0,
		0
	),
	new TypedField<RPG::SavePicture, RPG::SavePicture::Flags>(
		&RPG::SavePicture::flags,
		LSD_Reader::ChunkSavePicture::flags,
		"flags",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::finish_x,
		LSD_Reader::ChunkSavePicture::finish_x,
		"finish_x",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::finish_y,
		LSD_Reader::ChunkSavePicture::finish_y,
		"finish_y",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::finish_magnify,
		LSD_Reader::ChunkSavePicture::finish_magnify,
		"finish_magnify",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::finish_top_trans,
		LSD_Reader::ChunkSavePicture::finish_top_trans,
		"finish_top_trans",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::finish_bot_trans,
		LSD_Reader::ChunkSavePicture::finish_bot_trans,
		"finish_bot_trans",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::finish_red,
		LSD_Reader::ChunkSavePicture::finish_red,
		"finish_red",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::finish_green,
		LSD_Reader::ChunkSavePicture::finish_green,
		"finish_green",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::finish_blue,
		LSD_Reader::ChunkSavePicture::finish_blue,
		"finish_blue",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::finish_sat,
		LSD_Reader::ChunkSavePicture::finish_sat,
		"finish_sat",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::finish_effect,
		LSD_Reader::ChunkSavePicture::finish_effect,
		"finish_effect",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::time_left,
		LSD_Reader::ChunkSavePicture::time_left,
		"time_left",
		0,
		0
	),
	new TypedField<RPG::SavePicture, double>(
		&RPG::SavePicture::current_rotation,
		LSD_Reader::ChunkSavePicture::current_rotation,
		"current_rotation",
		0,
		0
	),
	new TypedField<RPG::SavePicture, int32_t>(
		&RPG::SavePicture::current_waver,
		LSD_Reader::ChunkSavePicture::current_waver,
		"current_waver",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SavePicture>;
