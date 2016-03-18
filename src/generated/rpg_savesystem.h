/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
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
		enum AtbMode {
			AtbMode_atb_active = 0,
			AtbMode_atb_wait = 1
		};

		void Setup();
		void Fixup();

		int screen = 1;
		int frame_count = 0;
		std::string graphics_name;
		int message_stretch = 0;
		int font_id = 0;
		int switches_size = 0;
		std::vector<bool> switches;
		int variables_size = 0;
		std::vector<uint32_t> variables;
		int message_transparent = 0;
		int message_position = 2;
		int message_prevent_overlap = 1;
		int message_continue_events = 0;
		std::string face_name;
		int face_id = 0;
		bool face_right = false;
		bool face_flip = false;
		bool transparent = false;
		int unknown_3d_music_fadeout = 0;
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
		uint8_t transition_out = 1;
		uint8_t transition_in = 1;
		uint8_t battle_start_fadeout = 1;
		uint8_t battle_start_fadein = 1;
		uint8_t battle_end_fadeout = 1;
		uint8_t battle_end_fadein = 1;
		bool teleport_allowed = true;
		bool escape_allowed = true;
		bool save_allowed = true;
		bool menu_allowed = true;
		std::string background;
		int save_count = 0;
		int save_slot = 1;
		int atb_mode = 0;
	};
}

#endif
