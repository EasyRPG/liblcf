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

// Read SaveMapEvent.

template <>
char const* const Struct<RPG::SaveMapEvent>::name = "SaveMapEvent";

template <>
Field<RPG::SaveMapEvent> const* Struct<RPG::SaveMapEvent>::fields[] = {
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::active,
		LSD_Reader::ChunkSaveMapEvent::active,
		"active",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::map_id,
		LSD_Reader::ChunkSaveMapEvent::map_id,
		"map_id",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::position_x,
		LSD_Reader::ChunkSaveMapEvent::position_x,
		"position_x",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::position_y,
		LSD_Reader::ChunkSaveMapEvent::position_y,
		"position_y",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::direction,
		LSD_Reader::ChunkSaveMapEvent::direction,
		"direction",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::sprite_direction,
		LSD_Reader::ChunkSaveMapEvent::sprite_direction,
		"sprite_direction",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::anim_frame,
		LSD_Reader::ChunkSaveMapEvent::anim_frame,
		"anim_frame",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::transparency,
		LSD_Reader::ChunkSaveMapEvent::transparency,
		"transparency",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::remaining_step,
		LSD_Reader::ChunkSaveMapEvent::remaining_step,
		"remaining_step",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::move_frequency,
		LSD_Reader::ChunkSaveMapEvent::move_frequency,
		"move_frequency",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::layer,
		LSD_Reader::ChunkSaveMapEvent::layer,
		"layer",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::overlap_forbidden,
		LSD_Reader::ChunkSaveMapEvent::overlap_forbidden,
		"overlap_forbidden",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::animation_type,
		LSD_Reader::ChunkSaveMapEvent::animation_type,
		"animation_type",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::lock_facing,
		LSD_Reader::ChunkSaveMapEvent::lock_facing,
		"lock_facing",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::move_speed,
		LSD_Reader::ChunkSaveMapEvent::move_speed,
		"move_speed",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, RPG::MoveRoute>(
		&RPG::SaveMapEvent::move_route,
		LSD_Reader::ChunkSaveMapEvent::move_route,
		"move_route",
		1,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::move_route_overwrite,
		LSD_Reader::ChunkSaveMapEvent::move_route_overwrite,
		"move_route_overwrite",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::move_route_index,
		LSD_Reader::ChunkSaveMapEvent::move_route_index,
		"move_route_index",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::move_route_repeated,
		LSD_Reader::ChunkSaveMapEvent::move_route_repeated,
		"move_route_repeated",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::sprite_transparent,
		LSD_Reader::ChunkSaveMapEvent::sprite_transparent,
		"sprite_transparent",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::route_through,
		LSD_Reader::ChunkSaveMapEvent::route_through,
		"route_through",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::anim_paused,
		LSD_Reader::ChunkSaveMapEvent::anim_paused,
		"anim_paused",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::through,
		LSD_Reader::ChunkSaveMapEvent::through,
		"through",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::stop_count,
		LSD_Reader::ChunkSaveMapEvent::stop_count,
		"stop_count",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::anim_count,
		LSD_Reader::ChunkSaveMapEvent::anim_count,
		"anim_count",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::max_stop_count,
		LSD_Reader::ChunkSaveMapEvent::max_stop_count,
		"max_stop_count",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::jumping,
		LSD_Reader::ChunkSaveMapEvent::jumping,
		"jumping",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::begin_jump_x,
		LSD_Reader::ChunkSaveMapEvent::begin_jump_x,
		"begin_jump_x",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::begin_jump_y,
		LSD_Reader::ChunkSaveMapEvent::begin_jump_y,
		"begin_jump_y",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::pause,
		LSD_Reader::ChunkSaveMapEvent::pause,
		"pause",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::flying,
		LSD_Reader::ChunkSaveMapEvent::flying,
		"flying",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, std::string>(
		&RPG::SaveMapEvent::sprite_name,
		LSD_Reader::ChunkSaveMapEvent::sprite_name,
		"sprite_name",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::sprite_id,
		LSD_Reader::ChunkSaveMapEvent::sprite_id,
		"sprite_id",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::processed,
		LSD_Reader::ChunkSaveMapEvent::processed,
		"processed",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::flash_red,
		LSD_Reader::ChunkSaveMapEvent::flash_red,
		"flash_red",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::flash_green,
		LSD_Reader::ChunkSaveMapEvent::flash_green,
		"flash_green",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::flash_blue,
		LSD_Reader::ChunkSaveMapEvent::flash_blue,
		"flash_blue",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, double>(
		&RPG::SaveMapEvent::flash_current_level,
		LSD_Reader::ChunkSaveMapEvent::flash_current_level,
		"flash_current_level",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::flash_time_left,
		LSD_Reader::ChunkSaveMapEvent::flash_time_left,
		"flash_time_left",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::waiting_execution,
		LSD_Reader::ChunkSaveMapEvent::waiting_execution,
		"waiting_execution",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, int32_t>(
		&RPG::SaveMapEvent::original_move_route_index,
		LSD_Reader::ChunkSaveMapEvent::original_move_route_index,
		"original_move_route_index",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, bool>(
		&RPG::SaveMapEvent::triggered_by_decision_key,
		LSD_Reader::ChunkSaveMapEvent::triggered_by_decision_key,
		"triggered_by_decision_key",
		0,
		0
	),
	new TypedField<RPG::SaveMapEvent, RPG::SaveEventExecState>(
		&RPG::SaveMapEvent::parallel_event_execstate,
		LSD_Reader::ChunkSaveMapEvent::parallel_event_execstate,
		"parallel_event_execstate",
		1,
		0
	),
	NULL
};

template class Struct<RPG::SaveMapEvent>;
