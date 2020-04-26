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

// Read SavePartyLocation.

template <>
char const* const Struct<RPG::SavePartyLocation>::name = "SavePartyLocation";
static TypedField<RPG::SavePartyLocation, bool> static_active(
	&RPG::SavePartyLocation::active,
	LSD_Reader::ChunkSavePartyLocation::active,
	"active",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_map_id(
	&RPG::SavePartyLocation::map_id,
	LSD_Reader::ChunkSavePartyLocation::map_id,
	"map_id",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_position_x(
	&RPG::SavePartyLocation::position_x,
	LSD_Reader::ChunkSavePartyLocation::position_x,
	"position_x",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_position_y(
	&RPG::SavePartyLocation::position_y,
	LSD_Reader::ChunkSavePartyLocation::position_y,
	"position_y",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_direction(
	&RPG::SavePartyLocation::direction,
	LSD_Reader::ChunkSavePartyLocation::direction,
	"direction",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_sprite_direction(
	&RPG::SavePartyLocation::sprite_direction,
	LSD_Reader::ChunkSavePartyLocation::sprite_direction,
	"sprite_direction",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_anim_frame(
	&RPG::SavePartyLocation::anim_frame,
	LSD_Reader::ChunkSavePartyLocation::anim_frame,
	"anim_frame",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_transparency(
	&RPG::SavePartyLocation::transparency,
	LSD_Reader::ChunkSavePartyLocation::transparency,
	"transparency",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_remaining_step(
	&RPG::SavePartyLocation::remaining_step,
	LSD_Reader::ChunkSavePartyLocation::remaining_step,
	"remaining_step",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_move_frequency(
	&RPG::SavePartyLocation::move_frequency,
	LSD_Reader::ChunkSavePartyLocation::move_frequency,
	"move_frequency",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_layer(
	&RPG::SavePartyLocation::layer,
	LSD_Reader::ChunkSavePartyLocation::layer,
	"layer",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_overlap_forbidden(
	&RPG::SavePartyLocation::overlap_forbidden,
	LSD_Reader::ChunkSavePartyLocation::overlap_forbidden,
	"overlap_forbidden",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_animation_type(
	&RPG::SavePartyLocation::animation_type,
	LSD_Reader::ChunkSavePartyLocation::animation_type,
	"animation_type",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_lock_facing(
	&RPG::SavePartyLocation::lock_facing,
	LSD_Reader::ChunkSavePartyLocation::lock_facing,
	"lock_facing",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_move_speed(
	&RPG::SavePartyLocation::move_speed,
	LSD_Reader::ChunkSavePartyLocation::move_speed,
	"move_speed",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, RPG::MoveRoute> static_move_route(
	&RPG::SavePartyLocation::move_route,
	LSD_Reader::ChunkSavePartyLocation::move_route,
	"move_route",
	1,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_move_route_overwrite(
	&RPG::SavePartyLocation::move_route_overwrite,
	LSD_Reader::ChunkSavePartyLocation::move_route_overwrite,
	"move_route_overwrite",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_move_route_index(
	&RPG::SavePartyLocation::move_route_index,
	LSD_Reader::ChunkSavePartyLocation::move_route_index,
	"move_route_index",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_move_route_repeated(
	&RPG::SavePartyLocation::move_route_repeated,
	LSD_Reader::ChunkSavePartyLocation::move_route_repeated,
	"move_route_repeated",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_sprite_transparent(
	&RPG::SavePartyLocation::sprite_transparent,
	LSD_Reader::ChunkSavePartyLocation::sprite_transparent,
	"sprite_transparent",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_route_through(
	&RPG::SavePartyLocation::route_through,
	LSD_Reader::ChunkSavePartyLocation::route_through,
	"route_through",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_anim_paused(
	&RPG::SavePartyLocation::anim_paused,
	LSD_Reader::ChunkSavePartyLocation::anim_paused,
	"anim_paused",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_through(
	&RPG::SavePartyLocation::through,
	LSD_Reader::ChunkSavePartyLocation::through,
	"through",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_stop_count(
	&RPG::SavePartyLocation::stop_count,
	LSD_Reader::ChunkSavePartyLocation::stop_count,
	"stop_count",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_anim_count(
	&RPG::SavePartyLocation::anim_count,
	LSD_Reader::ChunkSavePartyLocation::anim_count,
	"anim_count",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_max_stop_count(
	&RPG::SavePartyLocation::max_stop_count,
	LSD_Reader::ChunkSavePartyLocation::max_stop_count,
	"max_stop_count",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_jumping(
	&RPG::SavePartyLocation::jumping,
	LSD_Reader::ChunkSavePartyLocation::jumping,
	"jumping",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_begin_jump_x(
	&RPG::SavePartyLocation::begin_jump_x,
	LSD_Reader::ChunkSavePartyLocation::begin_jump_x,
	"begin_jump_x",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_begin_jump_y(
	&RPG::SavePartyLocation::begin_jump_y,
	LSD_Reader::ChunkSavePartyLocation::begin_jump_y,
	"begin_jump_y",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_pause(
	&RPG::SavePartyLocation::pause,
	LSD_Reader::ChunkSavePartyLocation::pause,
	"pause",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_flying(
	&RPG::SavePartyLocation::flying,
	LSD_Reader::ChunkSavePartyLocation::flying,
	"flying",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, std::string> static_sprite_name(
	&RPG::SavePartyLocation::sprite_name,
	LSD_Reader::ChunkSavePartyLocation::sprite_name,
	"sprite_name",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_sprite_id(
	&RPG::SavePartyLocation::sprite_id,
	LSD_Reader::ChunkSavePartyLocation::sprite_id,
	"sprite_id",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_processed(
	&RPG::SavePartyLocation::processed,
	LSD_Reader::ChunkSavePartyLocation::processed,
	"processed",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_flash_red(
	&RPG::SavePartyLocation::flash_red,
	LSD_Reader::ChunkSavePartyLocation::flash_red,
	"flash_red",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_flash_green(
	&RPG::SavePartyLocation::flash_green,
	LSD_Reader::ChunkSavePartyLocation::flash_green,
	"flash_green",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_flash_blue(
	&RPG::SavePartyLocation::flash_blue,
	LSD_Reader::ChunkSavePartyLocation::flash_blue,
	"flash_blue",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, double> static_flash_current_level(
	&RPG::SavePartyLocation::flash_current_level,
	LSD_Reader::ChunkSavePartyLocation::flash_current_level,
	"flash_current_level",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_flash_time_left(
	&RPG::SavePartyLocation::flash_time_left,
	LSD_Reader::ChunkSavePartyLocation::flash_time_left,
	"flash_time_left",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_boarding(
	&RPG::SavePartyLocation::boarding,
	LSD_Reader::ChunkSavePartyLocation::boarding,
	"boarding",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_aboard(
	&RPG::SavePartyLocation::aboard,
	LSD_Reader::ChunkSavePartyLocation::aboard,
	"aboard",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_vehicle(
	&RPG::SavePartyLocation::vehicle,
	LSD_Reader::ChunkSavePartyLocation::vehicle,
	"vehicle",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_unboarding(
	&RPG::SavePartyLocation::unboarding,
	LSD_Reader::ChunkSavePartyLocation::unboarding,
	"unboarding",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_preboard_move_speed(
	&RPG::SavePartyLocation::preboard_move_speed,
	LSD_Reader::ChunkSavePartyLocation::preboard_move_speed,
	"preboard_move_speed",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_menu_calling(
	&RPG::SavePartyLocation::menu_calling,
	LSD_Reader::ChunkSavePartyLocation::menu_calling,
	"menu_calling",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_pan_state(
	&RPG::SavePartyLocation::pan_state,
	LSD_Reader::ChunkSavePartyLocation::pan_state,
	"pan_state",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_pan_current_x(
	&RPG::SavePartyLocation::pan_current_x,
	LSD_Reader::ChunkSavePartyLocation::pan_current_x,
	"pan_current_x",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_pan_current_y(
	&RPG::SavePartyLocation::pan_current_y,
	LSD_Reader::ChunkSavePartyLocation::pan_current_y,
	"pan_current_y",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_pan_finish_x(
	&RPG::SavePartyLocation::pan_finish_x,
	LSD_Reader::ChunkSavePartyLocation::pan_finish_x,
	"pan_finish_x",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_pan_finish_y(
	&RPG::SavePartyLocation::pan_finish_y,
	LSD_Reader::ChunkSavePartyLocation::pan_finish_y,
	"pan_finish_y",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_pan_speed(
	&RPG::SavePartyLocation::pan_speed,
	LSD_Reader::ChunkSavePartyLocation::pan_speed,
	"pan_speed",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_encounter_steps(
	&RPG::SavePartyLocation::encounter_steps,
	LSD_Reader::ChunkSavePartyLocation::encounter_steps,
	"encounter_steps",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, bool> static_encounter_calling(
	&RPG::SavePartyLocation::encounter_calling,
	LSD_Reader::ChunkSavePartyLocation::encounter_calling,
	"encounter_calling",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_map_save_count(
	&RPG::SavePartyLocation::map_save_count,
	LSD_Reader::ChunkSavePartyLocation::map_save_count,
	"map_save_count",
	0,
	0
);
static TypedField<RPG::SavePartyLocation, int32_t> static_database_save_count(
	&RPG::SavePartyLocation::database_save_count,
	LSD_Reader::ChunkSavePartyLocation::database_save_count,
	"database_save_count",
	0,
	0
);


template <>
Field<RPG::SavePartyLocation> const* Struct<RPG::SavePartyLocation>::fields[] = {
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
	&static_boarding,
	&static_aboard,
	&static_vehicle,
	&static_unboarding,
	&static_preboard_move_speed,
	&static_menu_calling,
	&static_pan_state,
	&static_pan_current_x,
	&static_pan_current_y,
	&static_pan_finish_x,
	&static_pan_finish_y,
	&static_pan_speed,
	&static_encounter_steps,
	&static_encounter_calling,
	&static_map_save_count,
	&static_database_save_count,
	NULL
};

template class Struct<RPG::SavePartyLocation>;
