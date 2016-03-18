/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SaveSystem.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT SaveSystem

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, screen),
	LCF_STRUCT_TYPED_FIELD(int, frame_count),
	LCF_STRUCT_TYPED_FIELD(std::string, graphics_name),
	LCF_STRUCT_TYPED_FIELD(int, message_stretch),
	LCF_STRUCT_TYPED_FIELD(int, font_id),
	LCF_STRUCT_TYPED_FIELD(int, switches_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<bool>, switches),
	LCF_STRUCT_TYPED_FIELD(int, variables_size),
	LCF_STRUCT_TYPED_FIELD(std::vector<uint32_t>, variables),
	LCF_STRUCT_TYPED_FIELD(int, message_transparent),
	LCF_STRUCT_TYPED_FIELD(int, message_position),
	LCF_STRUCT_TYPED_FIELD(int, message_prevent_overlap),
	LCF_STRUCT_TYPED_FIELD(int, message_continue_events),
	LCF_STRUCT_TYPED_FIELD(std::string, face_name),
	LCF_STRUCT_TYPED_FIELD(int, face_id),
	LCF_STRUCT_TYPED_FIELD(bool, face_right),
	LCF_STRUCT_TYPED_FIELD(bool, face_flip),
	LCF_STRUCT_TYPED_FIELD(bool, transparent),
	LCF_STRUCT_TYPED_FIELD(int, unknown_3d_music_fadeout),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, title_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, battle_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, battle_end_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, inn_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, current_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, before_vehicle_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, before_battle_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, stored_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, boat_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, ship_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, airship_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, gameover_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, cursor_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, decision_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, cancel_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, buzzer_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, battle_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, escape_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_attack_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_damaged_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, actor_damaged_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, dodge_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_death_se),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, item_se),
	LCF_STRUCT_TYPED_FIELD(uint8_t, transition_out),
	LCF_STRUCT_TYPED_FIELD(uint8_t, transition_in),
	LCF_STRUCT_TYPED_FIELD(uint8_t, battle_start_fadeout),
	LCF_STRUCT_TYPED_FIELD(uint8_t, battle_start_fadein),
	LCF_STRUCT_TYPED_FIELD(uint8_t, battle_end_fadeout),
	LCF_STRUCT_TYPED_FIELD(uint8_t, battle_end_fadein),
	LCF_STRUCT_TYPED_FIELD(bool, teleport_allowed),
	LCF_STRUCT_TYPED_FIELD(bool, escape_allowed),
	LCF_STRUCT_TYPED_FIELD(bool, save_allowed),
	LCF_STRUCT_TYPED_FIELD(bool, menu_allowed),
	LCF_STRUCT_TYPED_FIELD(std::string, background),
	LCF_STRUCT_TYPED_FIELD(int, save_count),
	LCF_STRUCT_TYPED_FIELD(int, save_slot),
	LCF_STRUCT_TYPED_FIELD(int, atb_mode),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
