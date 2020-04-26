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

// Read SaveMapEvent.

template <>
char const* const Struct<RPG::SaveMapEvent>::name = "SaveMapEvent";
static TypedField<RPG::SaveMapEvent, bool> static_active(
	&RPG::SaveMapEvent::active,
	LSD_Reader::ChunkSaveMapEvent::active,
	"active",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_map_id(
	&RPG::SaveMapEvent::map_id,
	LSD_Reader::ChunkSaveMapEvent::map_id,
	"map_id",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_position_x(
	&RPG::SaveMapEvent::position_x,
	LSD_Reader::ChunkSaveMapEvent::position_x,
	"position_x",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_position_y(
	&RPG::SaveMapEvent::position_y,
	LSD_Reader::ChunkSaveMapEvent::position_y,
	"position_y",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_direction(
	&RPG::SaveMapEvent::direction,
	LSD_Reader::ChunkSaveMapEvent::direction,
	"direction",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_sprite_direction(
	&RPG::SaveMapEvent::sprite_direction,
	LSD_Reader::ChunkSaveMapEvent::sprite_direction,
	"sprite_direction",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_anim_frame(
	&RPG::SaveMapEvent::anim_frame,
	LSD_Reader::ChunkSaveMapEvent::anim_frame,
	"anim_frame",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_transparency(
	&RPG::SaveMapEvent::transparency,
	LSD_Reader::ChunkSaveMapEvent::transparency,
	"transparency",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_remaining_step(
	&RPG::SaveMapEvent::remaining_step,
	LSD_Reader::ChunkSaveMapEvent::remaining_step,
	"remaining_step",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_move_frequency(
	&RPG::SaveMapEvent::move_frequency,
	LSD_Reader::ChunkSaveMapEvent::move_frequency,
	"move_frequency",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_layer(
	&RPG::SaveMapEvent::layer,
	LSD_Reader::ChunkSaveMapEvent::layer,
	"layer",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_overlap_forbidden(
	&RPG::SaveMapEvent::overlap_forbidden,
	LSD_Reader::ChunkSaveMapEvent::overlap_forbidden,
	"overlap_forbidden",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_animation_type(
	&RPG::SaveMapEvent::animation_type,
	LSD_Reader::ChunkSaveMapEvent::animation_type,
	"animation_type",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_lock_facing(
	&RPG::SaveMapEvent::lock_facing,
	LSD_Reader::ChunkSaveMapEvent::lock_facing,
	"lock_facing",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_move_speed(
	&RPG::SaveMapEvent::move_speed,
	LSD_Reader::ChunkSaveMapEvent::move_speed,
	"move_speed",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, RPG::MoveRoute> static_move_route(
	&RPG::SaveMapEvent::move_route,
	LSD_Reader::ChunkSaveMapEvent::move_route,
	"move_route",
	1,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_move_route_overwrite(
	&RPG::SaveMapEvent::move_route_overwrite,
	LSD_Reader::ChunkSaveMapEvent::move_route_overwrite,
	"move_route_overwrite",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_move_route_index(
	&RPG::SaveMapEvent::move_route_index,
	LSD_Reader::ChunkSaveMapEvent::move_route_index,
	"move_route_index",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_move_route_repeated(
	&RPG::SaveMapEvent::move_route_repeated,
	LSD_Reader::ChunkSaveMapEvent::move_route_repeated,
	"move_route_repeated",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_sprite_transparent(
	&RPG::SaveMapEvent::sprite_transparent,
	LSD_Reader::ChunkSaveMapEvent::sprite_transparent,
	"sprite_transparent",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_route_through(
	&RPG::SaveMapEvent::route_through,
	LSD_Reader::ChunkSaveMapEvent::route_through,
	"route_through",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_anim_paused(
	&RPG::SaveMapEvent::anim_paused,
	LSD_Reader::ChunkSaveMapEvent::anim_paused,
	"anim_paused",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_through(
	&RPG::SaveMapEvent::through,
	LSD_Reader::ChunkSaveMapEvent::through,
	"through",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_stop_count(
	&RPG::SaveMapEvent::stop_count,
	LSD_Reader::ChunkSaveMapEvent::stop_count,
	"stop_count",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_anim_count(
	&RPG::SaveMapEvent::anim_count,
	LSD_Reader::ChunkSaveMapEvent::anim_count,
	"anim_count",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_max_stop_count(
	&RPG::SaveMapEvent::max_stop_count,
	LSD_Reader::ChunkSaveMapEvent::max_stop_count,
	"max_stop_count",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_jumping(
	&RPG::SaveMapEvent::jumping,
	LSD_Reader::ChunkSaveMapEvent::jumping,
	"jumping",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_begin_jump_x(
	&RPG::SaveMapEvent::begin_jump_x,
	LSD_Reader::ChunkSaveMapEvent::begin_jump_x,
	"begin_jump_x",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_begin_jump_y(
	&RPG::SaveMapEvent::begin_jump_y,
	LSD_Reader::ChunkSaveMapEvent::begin_jump_y,
	"begin_jump_y",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_pause(
	&RPG::SaveMapEvent::pause,
	LSD_Reader::ChunkSaveMapEvent::pause,
	"pause",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_flying(
	&RPG::SaveMapEvent::flying,
	LSD_Reader::ChunkSaveMapEvent::flying,
	"flying",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, std::string> static_sprite_name(
	&RPG::SaveMapEvent::sprite_name,
	LSD_Reader::ChunkSaveMapEvent::sprite_name,
	"sprite_name",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_sprite_id(
	&RPG::SaveMapEvent::sprite_id,
	LSD_Reader::ChunkSaveMapEvent::sprite_id,
	"sprite_id",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_processed(
	&RPG::SaveMapEvent::processed,
	LSD_Reader::ChunkSaveMapEvent::processed,
	"processed",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_flash_red(
	&RPG::SaveMapEvent::flash_red,
	LSD_Reader::ChunkSaveMapEvent::flash_red,
	"flash_red",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_flash_green(
	&RPG::SaveMapEvent::flash_green,
	LSD_Reader::ChunkSaveMapEvent::flash_green,
	"flash_green",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_flash_blue(
	&RPG::SaveMapEvent::flash_blue,
	LSD_Reader::ChunkSaveMapEvent::flash_blue,
	"flash_blue",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, double> static_flash_current_level(
	&RPG::SaveMapEvent::flash_current_level,
	LSD_Reader::ChunkSaveMapEvent::flash_current_level,
	"flash_current_level",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_flash_time_left(
	&RPG::SaveMapEvent::flash_time_left,
	LSD_Reader::ChunkSaveMapEvent::flash_time_left,
	"flash_time_left",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_waiting_execution(
	&RPG::SaveMapEvent::waiting_execution,
	LSD_Reader::ChunkSaveMapEvent::waiting_execution,
	"waiting_execution",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, int32_t> static_original_move_route_index(
	&RPG::SaveMapEvent::original_move_route_index,
	LSD_Reader::ChunkSaveMapEvent::original_move_route_index,
	"original_move_route_index",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, bool> static_triggered_by_decision_key(
	&RPG::SaveMapEvent::triggered_by_decision_key,
	LSD_Reader::ChunkSaveMapEvent::triggered_by_decision_key,
	"triggered_by_decision_key",
	0,
	0
);
static TypedField<RPG::SaveMapEvent, RPG::SaveEventExecState> static_parallel_event_execstate(
	&RPG::SaveMapEvent::parallel_event_execstate,
	LSD_Reader::ChunkSaveMapEvent::parallel_event_execstate,
	"parallel_event_execstate",
	1,
	0
);


template <>
Field<RPG::SaveMapEvent> const* Struct<RPG::SaveMapEvent>::fields[] = {
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
	&static_waiting_execution,
	&static_original_move_route_index,
	&static_triggered_by_decision_key,
	&static_parallel_event_execstate,
	NULL
};

template class Struct<RPG::SaveMapEvent>;
