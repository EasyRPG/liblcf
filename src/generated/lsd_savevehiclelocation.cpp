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

// Read SaveVehicleLocation.

template <>
char const* const Struct<RPG::SaveVehicleLocation>::name = "SaveVehicleLocation";

template <>
Field<RPG::SaveVehicleLocation> const* Struct<RPG::SaveVehicleLocation>::fields[] = {
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::active,
		LSD_Reader::ChunkSaveVehicleLocation::active,
		"active",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::map_id,
		LSD_Reader::ChunkSaveVehicleLocation::map_id,
		"map_id",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::position_x,
		LSD_Reader::ChunkSaveVehicleLocation::position_x,
		"position_x",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::position_y,
		LSD_Reader::ChunkSaveVehicleLocation::position_y,
		"position_y",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::direction,
		LSD_Reader::ChunkSaveVehicleLocation::direction,
		"direction",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::sprite_direction,
		LSD_Reader::ChunkSaveVehicleLocation::sprite_direction,
		"sprite_direction",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::anim_frame,
		LSD_Reader::ChunkSaveVehicleLocation::anim_frame,
		"anim_frame",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::transparency,
		LSD_Reader::ChunkSaveVehicleLocation::transparency,
		"transparency",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::remaining_step,
		LSD_Reader::ChunkSaveVehicleLocation::remaining_step,
		"remaining_step",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::move_frequency,
		LSD_Reader::ChunkSaveVehicleLocation::move_frequency,
		"move_frequency",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::layer,
		LSD_Reader::ChunkSaveVehicleLocation::layer,
		"layer",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::overlap_forbidden,
		LSD_Reader::ChunkSaveVehicleLocation::overlap_forbidden,
		"overlap_forbidden",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::animation_type,
		LSD_Reader::ChunkSaveVehicleLocation::animation_type,
		"animation_type",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::lock_facing,
		LSD_Reader::ChunkSaveVehicleLocation::lock_facing,
		"lock_facing",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::move_speed,
		LSD_Reader::ChunkSaveVehicleLocation::move_speed,
		"move_speed",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, RPG::MoveRoute>(
		&RPG::SaveVehicleLocation::move_route,
		LSD_Reader::ChunkSaveVehicleLocation::move_route,
		"move_route",
		1,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::move_route_overwrite,
		LSD_Reader::ChunkSaveVehicleLocation::move_route_overwrite,
		"move_route_overwrite",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::move_route_index,
		LSD_Reader::ChunkSaveVehicleLocation::move_route_index,
		"move_route_index",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::move_route_repeated,
		LSD_Reader::ChunkSaveVehicleLocation::move_route_repeated,
		"move_route_repeated",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::sprite_transparent,
		LSD_Reader::ChunkSaveVehicleLocation::sprite_transparent,
		"sprite_transparent",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::route_through,
		LSD_Reader::ChunkSaveVehicleLocation::route_through,
		"route_through",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::anim_paused,
		LSD_Reader::ChunkSaveVehicleLocation::anim_paused,
		"anim_paused",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::through,
		LSD_Reader::ChunkSaveVehicleLocation::through,
		"through",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::stop_count,
		LSD_Reader::ChunkSaveVehicleLocation::stop_count,
		"stop_count",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::anim_count,
		LSD_Reader::ChunkSaveVehicleLocation::anim_count,
		"anim_count",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::max_stop_count,
		LSD_Reader::ChunkSaveVehicleLocation::max_stop_count,
		"max_stop_count",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::jumping,
		LSD_Reader::ChunkSaveVehicleLocation::jumping,
		"jumping",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::begin_jump_x,
		LSD_Reader::ChunkSaveVehicleLocation::begin_jump_x,
		"begin_jump_x",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::begin_jump_y,
		LSD_Reader::ChunkSaveVehicleLocation::begin_jump_y,
		"begin_jump_y",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::pause,
		LSD_Reader::ChunkSaveVehicleLocation::pause,
		"pause",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::flying,
		LSD_Reader::ChunkSaveVehicleLocation::flying,
		"flying",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, std::string>(
		&RPG::SaveVehicleLocation::sprite_name,
		LSD_Reader::ChunkSaveVehicleLocation::sprite_name,
		"sprite_name",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::sprite_id,
		LSD_Reader::ChunkSaveVehicleLocation::sprite_id,
		"sprite_id",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, bool>(
		&RPG::SaveVehicleLocation::processed,
		LSD_Reader::ChunkSaveVehicleLocation::processed,
		"processed",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::flash_red,
		LSD_Reader::ChunkSaveVehicleLocation::flash_red,
		"flash_red",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::flash_green,
		LSD_Reader::ChunkSaveVehicleLocation::flash_green,
		"flash_green",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::flash_blue,
		LSD_Reader::ChunkSaveVehicleLocation::flash_blue,
		"flash_blue",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, double>(
		&RPG::SaveVehicleLocation::flash_current_level,
		LSD_Reader::ChunkSaveVehicleLocation::flash_current_level,
		"flash_current_level",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::flash_time_left,
		LSD_Reader::ChunkSaveVehicleLocation::flash_time_left,
		"flash_time_left",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::vehicle,
		LSD_Reader::ChunkSaveVehicleLocation::vehicle,
		"vehicle",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::remaining_ascent,
		LSD_Reader::ChunkSaveVehicleLocation::remaining_ascent,
		"remaining_ascent",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::remaining_descent,
		LSD_Reader::ChunkSaveVehicleLocation::remaining_descent,
		"remaining_descent",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, std::string>(
		&RPG::SaveVehicleLocation::sprite2_name,
		LSD_Reader::ChunkSaveVehicleLocation::sprite2_name,
		"sprite2_name",
		0,
		0
	),
	new TypedField<RPG::SaveVehicleLocation, int32_t>(
		&RPG::SaveVehicleLocation::sprite2_id,
		LSD_Reader::ChunkSaveVehicleLocation::sprite2_id,
		"sprite2_id",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SaveVehicleLocation>;
