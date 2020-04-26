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

// Read SaveMapEventBase.

template <>
char const* const Struct<RPG::SaveMapEventBase>::name = "SaveMapEventBase";
static TypedField<RPG::SaveMapEventBase, bool> static_active(
	&RPG::SaveMapEventBase::active,
	LSD_Reader::ChunkSaveMapEventBase::active,
	"active",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_map_id(
	&RPG::SaveMapEventBase::map_id,
	LSD_Reader::ChunkSaveMapEventBase::map_id,
	"map_id",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_position_x(
	&RPG::SaveMapEventBase::position_x,
	LSD_Reader::ChunkSaveMapEventBase::position_x,
	"position_x",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_position_y(
	&RPG::SaveMapEventBase::position_y,
	LSD_Reader::ChunkSaveMapEventBase::position_y,
	"position_y",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_direction(
	&RPG::SaveMapEventBase::direction,
	LSD_Reader::ChunkSaveMapEventBase::direction,
	"direction",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_sprite_direction(
	&RPG::SaveMapEventBase::sprite_direction,
	LSD_Reader::ChunkSaveMapEventBase::sprite_direction,
	"sprite_direction",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_anim_frame(
	&RPG::SaveMapEventBase::anim_frame,
	LSD_Reader::ChunkSaveMapEventBase::anim_frame,
	"anim_frame",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_transparency(
	&RPG::SaveMapEventBase::transparency,
	LSD_Reader::ChunkSaveMapEventBase::transparency,
	"transparency",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_remaining_step(
	&RPG::SaveMapEventBase::remaining_step,
	LSD_Reader::ChunkSaveMapEventBase::remaining_step,
	"remaining_step",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_move_frequency(
	&RPG::SaveMapEventBase::move_frequency,
	LSD_Reader::ChunkSaveMapEventBase::move_frequency,
	"move_frequency",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_layer(
	&RPG::SaveMapEventBase::layer,
	LSD_Reader::ChunkSaveMapEventBase::layer,
	"layer",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_overlap_forbidden(
	&RPG::SaveMapEventBase::overlap_forbidden,
	LSD_Reader::ChunkSaveMapEventBase::overlap_forbidden,
	"overlap_forbidden",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_animation_type(
	&RPG::SaveMapEventBase::animation_type,
	LSD_Reader::ChunkSaveMapEventBase::animation_type,
	"animation_type",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_lock_facing(
	&RPG::SaveMapEventBase::lock_facing,
	LSD_Reader::ChunkSaveMapEventBase::lock_facing,
	"lock_facing",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_move_speed(
	&RPG::SaveMapEventBase::move_speed,
	LSD_Reader::ChunkSaveMapEventBase::move_speed,
	"move_speed",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, RPG::MoveRoute> static_move_route(
	&RPG::SaveMapEventBase::move_route,
	LSD_Reader::ChunkSaveMapEventBase::move_route,
	"move_route",
	1,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_move_route_overwrite(
	&RPG::SaveMapEventBase::move_route_overwrite,
	LSD_Reader::ChunkSaveMapEventBase::move_route_overwrite,
	"move_route_overwrite",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_move_route_index(
	&RPG::SaveMapEventBase::move_route_index,
	LSD_Reader::ChunkSaveMapEventBase::move_route_index,
	"move_route_index",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_move_route_repeated(
	&RPG::SaveMapEventBase::move_route_repeated,
	LSD_Reader::ChunkSaveMapEventBase::move_route_repeated,
	"move_route_repeated",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_sprite_transparent(
	&RPG::SaveMapEventBase::sprite_transparent,
	LSD_Reader::ChunkSaveMapEventBase::sprite_transparent,
	"sprite_transparent",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_route_through(
	&RPG::SaveMapEventBase::route_through,
	LSD_Reader::ChunkSaveMapEventBase::route_through,
	"route_through",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_anim_paused(
	&RPG::SaveMapEventBase::anim_paused,
	LSD_Reader::ChunkSaveMapEventBase::anim_paused,
	"anim_paused",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_through(
	&RPG::SaveMapEventBase::through,
	LSD_Reader::ChunkSaveMapEventBase::through,
	"through",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_stop_count(
	&RPG::SaveMapEventBase::stop_count,
	LSD_Reader::ChunkSaveMapEventBase::stop_count,
	"stop_count",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_anim_count(
	&RPG::SaveMapEventBase::anim_count,
	LSD_Reader::ChunkSaveMapEventBase::anim_count,
	"anim_count",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_max_stop_count(
	&RPG::SaveMapEventBase::max_stop_count,
	LSD_Reader::ChunkSaveMapEventBase::max_stop_count,
	"max_stop_count",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_jumping(
	&RPG::SaveMapEventBase::jumping,
	LSD_Reader::ChunkSaveMapEventBase::jumping,
	"jumping",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_begin_jump_x(
	&RPG::SaveMapEventBase::begin_jump_x,
	LSD_Reader::ChunkSaveMapEventBase::begin_jump_x,
	"begin_jump_x",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_begin_jump_y(
	&RPG::SaveMapEventBase::begin_jump_y,
	LSD_Reader::ChunkSaveMapEventBase::begin_jump_y,
	"begin_jump_y",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_pause(
	&RPG::SaveMapEventBase::pause,
	LSD_Reader::ChunkSaveMapEventBase::pause,
	"pause",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_flying(
	&RPG::SaveMapEventBase::flying,
	LSD_Reader::ChunkSaveMapEventBase::flying,
	"flying",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, std::string> static_sprite_name(
	&RPG::SaveMapEventBase::sprite_name,
	LSD_Reader::ChunkSaveMapEventBase::sprite_name,
	"sprite_name",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_sprite_id(
	&RPG::SaveMapEventBase::sprite_id,
	LSD_Reader::ChunkSaveMapEventBase::sprite_id,
	"sprite_id",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, bool> static_processed(
	&RPG::SaveMapEventBase::processed,
	LSD_Reader::ChunkSaveMapEventBase::processed,
	"processed",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_flash_red(
	&RPG::SaveMapEventBase::flash_red,
	LSD_Reader::ChunkSaveMapEventBase::flash_red,
	"flash_red",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_flash_green(
	&RPG::SaveMapEventBase::flash_green,
	LSD_Reader::ChunkSaveMapEventBase::flash_green,
	"flash_green",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_flash_blue(
	&RPG::SaveMapEventBase::flash_blue,
	LSD_Reader::ChunkSaveMapEventBase::flash_blue,
	"flash_blue",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, double> static_flash_current_level(
	&RPG::SaveMapEventBase::flash_current_level,
	LSD_Reader::ChunkSaveMapEventBase::flash_current_level,
	"flash_current_level",
	0,
	0
);
static TypedField<RPG::SaveMapEventBase, int32_t> static_flash_time_left(
	&RPG::SaveMapEventBase::flash_time_left,
	LSD_Reader::ChunkSaveMapEventBase::flash_time_left,
	"flash_time_left",
	0,
	0
);


template <>
Field<RPG::SaveMapEventBase> const* Struct<RPG::SaveMapEventBase>::fields[] = {
	&static_active,
	&static_map_id,
	&static_position_x,
	&static_position_y,
	&static_direction,
	&static_sprite_direction,
	&static_anim_frame,
	&static_transparency,
	&static_remaining_step,
	&static_move_frequency,
	&static_layer,
	&static_overlap_forbidden,
	&static_animation_type,
	&static_lock_facing,
	&static_move_speed,
	&static_move_route,
	&static_move_route_overwrite,
	&static_move_route_index,
	&static_move_route_repeated,
	&static_sprite_transparent,
	&static_route_through,
	&static_anim_paused,
	&static_through,
	&static_stop_count,
	&static_anim_count,
	&static_max_stop_count,
	&static_jumping,
	&static_begin_jump_x,
	&static_begin_jump_y,
	&static_pause,
	&static_flying,
	&static_sprite_name,
	&static_sprite_id,
	&static_processed,
	&static_flash_red,
	&static_flash_green,
	&static_flash_blue,
	&static_flash_current_level,
	&static_flash_time_left,
	NULL
};

template class Struct<RPG::SaveMapEventBase>;
