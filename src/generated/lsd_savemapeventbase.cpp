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

// Read SaveMapEventBase.

template <>
char const* const Struct<RPG::SaveMapEventBase>::name = "SaveMapEventBase";

template <>
Field<RPG::SaveMapEventBase> const* Struct<RPG::SaveMapEventBase>::fields[] = {
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::active,
		LSD_Reader::ChunkSaveMapEventBase::active,
		"active",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::map_id,
		LSD_Reader::ChunkSaveMapEventBase::map_id,
		"map_id",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::position_x,
		LSD_Reader::ChunkSaveMapEventBase::position_x,
		"position_x",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::position_y,
		LSD_Reader::ChunkSaveMapEventBase::position_y,
		"position_y",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::direction,
		LSD_Reader::ChunkSaveMapEventBase::direction,
		"direction",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::sprite_direction,
		LSD_Reader::ChunkSaveMapEventBase::sprite_direction,
		"sprite_direction",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::anim_frame,
		LSD_Reader::ChunkSaveMapEventBase::anim_frame,
		"anim_frame",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::transparency,
		LSD_Reader::ChunkSaveMapEventBase::transparency,
		"transparency",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::remaining_step,
		LSD_Reader::ChunkSaveMapEventBase::remaining_step,
		"remaining_step",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::move_frequency,
		LSD_Reader::ChunkSaveMapEventBase::move_frequency,
		"move_frequency",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::layer,
		LSD_Reader::ChunkSaveMapEventBase::layer,
		"layer",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::overlap_forbidden,
		LSD_Reader::ChunkSaveMapEventBase::overlap_forbidden,
		"overlap_forbidden",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::animation_type,
		LSD_Reader::ChunkSaveMapEventBase::animation_type,
		"animation_type",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::lock_facing,
		LSD_Reader::ChunkSaveMapEventBase::lock_facing,
		"lock_facing",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::move_speed,
		LSD_Reader::ChunkSaveMapEventBase::move_speed,
		"move_speed",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, RPG::MoveRoute>(
		&RPG::SaveMapEventBase::move_route,
		LSD_Reader::ChunkSaveMapEventBase::move_route,
		"move_route",
		1,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::move_route_overwrite,
		LSD_Reader::ChunkSaveMapEventBase::move_route_overwrite,
		"move_route_overwrite",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::move_route_index,
		LSD_Reader::ChunkSaveMapEventBase::move_route_index,
		"move_route_index",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::move_route_repeated,
		LSD_Reader::ChunkSaveMapEventBase::move_route_repeated,
		"move_route_repeated",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::sprite_transparent,
		LSD_Reader::ChunkSaveMapEventBase::sprite_transparent,
		"sprite_transparent",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::route_through,
		LSD_Reader::ChunkSaveMapEventBase::route_through,
		"route_through",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::anim_paused,
		LSD_Reader::ChunkSaveMapEventBase::anim_paused,
		"anim_paused",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::through,
		LSD_Reader::ChunkSaveMapEventBase::through,
		"through",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::stop_count,
		LSD_Reader::ChunkSaveMapEventBase::stop_count,
		"stop_count",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::anim_count,
		LSD_Reader::ChunkSaveMapEventBase::anim_count,
		"anim_count",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::max_stop_count,
		LSD_Reader::ChunkSaveMapEventBase::max_stop_count,
		"max_stop_count",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::jumping,
		LSD_Reader::ChunkSaveMapEventBase::jumping,
		"jumping",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::begin_jump_x,
		LSD_Reader::ChunkSaveMapEventBase::begin_jump_x,
		"begin_jump_x",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::begin_jump_y,
		LSD_Reader::ChunkSaveMapEventBase::begin_jump_y,
		"begin_jump_y",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::pause,
		LSD_Reader::ChunkSaveMapEventBase::pause,
		"pause",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::flying,
		LSD_Reader::ChunkSaveMapEventBase::flying,
		"flying",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, std::string>(
		&RPG::SaveMapEventBase::sprite_name,
		LSD_Reader::ChunkSaveMapEventBase::sprite_name,
		"sprite_name",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::sprite_id,
		LSD_Reader::ChunkSaveMapEventBase::sprite_id,
		"sprite_id",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, bool>(
		&RPG::SaveMapEventBase::processed,
		LSD_Reader::ChunkSaveMapEventBase::processed,
		"processed",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::flash_red,
		LSD_Reader::ChunkSaveMapEventBase::flash_red,
		"flash_red",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::flash_green,
		LSD_Reader::ChunkSaveMapEventBase::flash_green,
		"flash_green",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::flash_blue,
		LSD_Reader::ChunkSaveMapEventBase::flash_blue,
		"flash_blue",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, double>(
		&RPG::SaveMapEventBase::flash_current_level,
		LSD_Reader::ChunkSaveMapEventBase::flash_current_level,
		"flash_current_level",
		0,
		0
	),
	new TypedField<RPG::SaveMapEventBase, int32_t>(
		&RPG::SaveMapEventBase::flash_time_left,
		LSD_Reader::ChunkSaveMapEventBase::flash_time_left,
		"flash_time_left",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SaveMapEventBase>;
