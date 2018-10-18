/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read System.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT System

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, ldb_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, boat_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, ship_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, airship_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, boat_index, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, ship_index, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, airship_index, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, title_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, gameover_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, system_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, system2_name, 0, 1),
	LCF_STRUCT_COUNT_FIELD(int16_t, party, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, party, 1, 0),
	LCF_STRUCT_COUNT_FIELD(int16_t, menu_commands, 0, 1),
	LCF_STRUCT_TYPED_FIELD(std::vector<int16_t>, menu_commands, 1, 1),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, title_music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, battle_music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, battle_end_music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, inn_music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, boat_music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, ship_music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, airship_music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Music, gameover_music, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, cursor_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, decision_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, cancel_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, buzzer_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, battle_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, escape_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_attack_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_damaged_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, actor_damaged_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, dodge_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, enemy_death_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, item_se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, transition_out, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, transition_in, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_start_fadeout, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_start_fadein, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_end_fadeout, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_end_fadein, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, message_stretch, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, font_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, selected_condition, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, selected_hero, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, battletest_background, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::TestBattler>, battletest_data, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, save_count, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battletest_terrain, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battletest_formation, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battletest_condition, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, equipment_setting, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, battletest_alt_terrain, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, show_frame, 0, 1),
	LCF_STRUCT_TYPED_FIELD(std::string, frame_name, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, invert_animations, 0, 1),
	LCF_STRUCT_TYPED_FIELD(bool, show_title, 0, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
