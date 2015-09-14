/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVESYSTEM_H
#define LCF_RPG_SAVESYSTEM_H

// Headers
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_music.h"
#include "rpg_sound.h"

/**
 * RPG::SaveSystem class.
 */
namespace RPG {
	class SaveSystem {
	public:
		SaveSystem();
		void Setup();
		void Fixup();

		int screen;
		int frame_count;
		std::string graphics_name;
		int message_stretch;
		int font_id;
		int switches_size;
		std::vector<bool> switches;
		int variables_size;
		std::vector<uint32_t> variables;
		int message_transparent;
		int message_position;
		int message_prevent_overlap;
		int message_continue_events;
		std::string face_name;
		int face_id;
		bool face_right;
		bool face_flip;
		bool transparent;
		int unknown_3d_music_fadeout;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
		Music current_music;
		Music before_vehicle_music;
		Music before_battle_music;
		Music stored_music;
		Music boat_music;
		Music ship_music;
		Music airship_music;
		Music gameover_music;
		Sound cursor_se;
		Sound decision_se;
		Sound cancel_se;
		Sound buzzer_se;
		Sound battle_se;
		Sound escape_se;
		Sound enemy_attack_se;
		Sound enemy_damaged_se;
		Sound actor_damaged_se;
		Sound dodge_se;
		Sound enemy_death_se;
		Sound item_se;
		uint8_t transition_out;
		uint8_t transition_in;
		uint8_t battle_start_fadeout;
		uint8_t battle_start_fadein;
		uint8_t battle_end_fadeout;
		uint8_t battle_end_fadein;
		bool teleport_allowed;
		bool escape_allowed;
		bool save_allowed;
		bool menu_allowed;
		std::string background;
		int save_count;
		int save_slot;
		int unknown_8c_active_wait_atb;
	};
}

#endif
