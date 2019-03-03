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

// Read SaveSystem.

template <>
char const* const Struct<RPG::SaveSystem>::name = "SaveSystem";

template <>
Field<RPG::SaveSystem> const* Struct<RPG::SaveSystem>::fields[] = {
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::scene,
		LSD_Reader::ChunkSaveSystem::scene,
		"scene",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::frame_count,
		LSD_Reader::ChunkSaveSystem::frame_count,
		"frame_count",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, std::string>(
		&RPG::SaveSystem::graphics_name,
		LSD_Reader::ChunkSaveSystem::graphics_name,
		"graphics_name",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::message_stretch,
		LSD_Reader::ChunkSaveSystem::message_stretch,
		"message_stretch",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::font_id,
		LSD_Reader::ChunkSaveSystem::font_id,
		"font_id",
		0,
		0
	),
	new CountField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::switches,
		LSD_Reader::ChunkSaveSystem::switches_size,
		0,
		0
	),
	new TypedField<RPG::SaveSystem, std::vector<bool>>(
		&RPG::SaveSystem::switches,
		LSD_Reader::ChunkSaveSystem::switches,
		"switches",
		1,
		0
	),
	new CountField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::variables,
		LSD_Reader::ChunkSaveSystem::variables_size,
		0,
		0
	),
	new TypedField<RPG::SaveSystem, std::vector<int32_t>>(
		&RPG::SaveSystem::variables,
		LSD_Reader::ChunkSaveSystem::variables,
		"variables",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::message_transparent,
		LSD_Reader::ChunkSaveSystem::message_transparent,
		"message_transparent",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::message_position,
		LSD_Reader::ChunkSaveSystem::message_position,
		"message_position",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::message_prevent_overlap,
		LSD_Reader::ChunkSaveSystem::message_prevent_overlap,
		"message_prevent_overlap",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::message_continue_events,
		LSD_Reader::ChunkSaveSystem::message_continue_events,
		"message_continue_events",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, std::string>(
		&RPG::SaveSystem::face_name,
		LSD_Reader::ChunkSaveSystem::face_name,
		"face_name",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::face_id,
		LSD_Reader::ChunkSaveSystem::face_id,
		"face_id",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::face_right,
		LSD_Reader::ChunkSaveSystem::face_right,
		"face_right",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::face_flip,
		LSD_Reader::ChunkSaveSystem::face_flip,
		"face_flip",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::transparent,
		LSD_Reader::ChunkSaveSystem::transparent,
		"transparent",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::music_stopping,
		LSD_Reader::ChunkSaveSystem::music_stopping,
		"music_stopping",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::title_music,
		LSD_Reader::ChunkSaveSystem::title_music,
		"title_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::battle_music,
		LSD_Reader::ChunkSaveSystem::battle_music,
		"battle_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::battle_end_music,
		LSD_Reader::ChunkSaveSystem::battle_end_music,
		"battle_end_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::inn_music,
		LSD_Reader::ChunkSaveSystem::inn_music,
		"inn_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::current_music,
		LSD_Reader::ChunkSaveSystem::current_music,
		"current_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::before_vehicle_music,
		LSD_Reader::ChunkSaveSystem::before_vehicle_music,
		"before_vehicle_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::before_battle_music,
		LSD_Reader::ChunkSaveSystem::before_battle_music,
		"before_battle_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::stored_music,
		LSD_Reader::ChunkSaveSystem::stored_music,
		"stored_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::boat_music,
		LSD_Reader::ChunkSaveSystem::boat_music,
		"boat_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::ship_music,
		LSD_Reader::ChunkSaveSystem::ship_music,
		"ship_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::airship_music,
		LSD_Reader::ChunkSaveSystem::airship_music,
		"airship_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Music>(
		&RPG::SaveSystem::gameover_music,
		LSD_Reader::ChunkSaveSystem::gameover_music,
		"gameover_music",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::cursor_se,
		LSD_Reader::ChunkSaveSystem::cursor_se,
		"cursor_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::decision_se,
		LSD_Reader::ChunkSaveSystem::decision_se,
		"decision_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::cancel_se,
		LSD_Reader::ChunkSaveSystem::cancel_se,
		"cancel_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::buzzer_se,
		LSD_Reader::ChunkSaveSystem::buzzer_se,
		"buzzer_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::battle_se,
		LSD_Reader::ChunkSaveSystem::battle_se,
		"battle_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::escape_se,
		LSD_Reader::ChunkSaveSystem::escape_se,
		"escape_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::enemy_attack_se,
		LSD_Reader::ChunkSaveSystem::enemy_attack_se,
		"enemy_attack_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::enemy_damaged_se,
		LSD_Reader::ChunkSaveSystem::enemy_damaged_se,
		"enemy_damaged_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::actor_damaged_se,
		LSD_Reader::ChunkSaveSystem::actor_damaged_se,
		"actor_damaged_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::dodge_se,
		LSD_Reader::ChunkSaveSystem::dodge_se,
		"dodge_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::enemy_death_se,
		LSD_Reader::ChunkSaveSystem::enemy_death_se,
		"enemy_death_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, RPG::Sound>(
		&RPG::SaveSystem::item_se,
		LSD_Reader::ChunkSaveSystem::item_se,
		"item_se",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, int8_t>(
		&RPG::SaveSystem::transition_out,
		LSD_Reader::ChunkSaveSystem::transition_out,
		"transition_out",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, int8_t>(
		&RPG::SaveSystem::transition_in,
		LSD_Reader::ChunkSaveSystem::transition_in,
		"transition_in",
		1,
		0
	),
	new TypedField<RPG::SaveSystem, int8_t>(
		&RPG::SaveSystem::battle_start_fadeout,
		LSD_Reader::ChunkSaveSystem::battle_start_fadeout,
		"battle_start_fadeout",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int8_t>(
		&RPG::SaveSystem::battle_start_fadein,
		LSD_Reader::ChunkSaveSystem::battle_start_fadein,
		"battle_start_fadein",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int8_t>(
		&RPG::SaveSystem::battle_end_fadeout,
		LSD_Reader::ChunkSaveSystem::battle_end_fadeout,
		"battle_end_fadeout",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int8_t>(
		&RPG::SaveSystem::battle_end_fadein,
		LSD_Reader::ChunkSaveSystem::battle_end_fadein,
		"battle_end_fadein",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::teleport_allowed,
		LSD_Reader::ChunkSaveSystem::teleport_allowed,
		"teleport_allowed",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::escape_allowed,
		LSD_Reader::ChunkSaveSystem::escape_allowed,
		"escape_allowed",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::save_allowed,
		LSD_Reader::ChunkSaveSystem::save_allowed,
		"save_allowed",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, bool>(
		&RPG::SaveSystem::menu_allowed,
		LSD_Reader::ChunkSaveSystem::menu_allowed,
		"menu_allowed",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, std::string>(
		&RPG::SaveSystem::background,
		LSD_Reader::ChunkSaveSystem::background,
		"background",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::save_count,
		LSD_Reader::ChunkSaveSystem::save_count,
		"save_count",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::save_slot,
		LSD_Reader::ChunkSaveSystem::save_slot,
		"save_slot",
		0,
		0
	),
	new TypedField<RPG::SaveSystem, int32_t>(
		&RPG::SaveSystem::atb_mode,
		LSD_Reader::ChunkSaveSystem::atb_mode,
		"atb_mode",
		0,
		1
	),
	NULL
};

template class Struct<RPG::SaveSystem>;
