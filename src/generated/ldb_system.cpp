/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read System.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT System

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, ldb_id),
	LCF_STRUCT_TYPED_FIELD(std::string, boat_name),
	LCF_STRUCT_TYPED_FIELD(std::string, ship_name),
	LCF_STRUCT_TYPED_FIELD(std::string, airship_name),
	LCF_STRUCT_TYPED_FIELD(int, boat_index),
	LCF_STRUCT_TYPED_FIELD(int, ship_index),
	LCF_STRUCT_TYPED_FIELD(int, airship_index),
	LCF_STRUCT_TYPED_FIELD(std::string, title_name),
	LCF_STRUCT_TYPED_FIELD(std::string, gameover_name),
	LCF_STRUCT_TYPED_FIELD(std::string, system_name),
	LCF_STRUCT_TYPED_FIELD(std::string, system2_name),
	LCF_STRUCT_SIZE_FIELD(int16_t, party),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, party),
	LCF_STRUCT_SIZE_FIELD(int16_t, menu_commands),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, menu_commands),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, title_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, battle_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, battle_end_music),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, inn_music),
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
	LCF_STRUCT_TYPED_FIELD(int, transition_out),
	LCF_STRUCT_TYPED_FIELD(int, transition_in),
	LCF_STRUCT_TYPED_FIELD(int, battle_start_fadeout),
	LCF_STRUCT_TYPED_FIELD(int, battle_start_fadein),
	LCF_STRUCT_TYPED_FIELD(int, battle_end_fadeout),
	LCF_STRUCT_TYPED_FIELD(int, battle_end_fadein),
	LCF_STRUCT_TYPED_FIELD(int, message_stretch),
	LCF_STRUCT_TYPED_FIELD(int, font_id),
	LCF_STRUCT_TYPED_FIELD(int, selected_condition),
	LCF_STRUCT_TYPED_FIELD(int, selected_hero),
	LCF_STRUCT_TYPED_FIELD(std::string, battletest_background),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::TestBattler>, battletest_data),
	LCF_STRUCT_TYPED_FIELD(int, save_count),
	LCF_STRUCT_TYPED_FIELD(int, battletest_terrain),
	LCF_STRUCT_TYPED_FIELD(int, battletest_formation),
	LCF_STRUCT_TYPED_FIELD(int, battletest_condition),
	LCF_STRUCT_TYPED_FIELD(int, unknown_61),
	LCF_STRUCT_TYPED_FIELD(bool, show_frame),
	LCF_STRUCT_TYPED_FIELD(std::string, frame_name),
	LCF_STRUCT_TYPED_FIELD(bool, invert_animations),
	LCF_STRUCT_TYPED_FIELD(bool, show_title),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
