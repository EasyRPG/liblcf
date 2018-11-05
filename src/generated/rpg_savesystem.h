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

#ifndef LCF_RPG_SAVESYSTEM_H
#define LCF_RPG_SAVESYSTEM_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_music.h"
#include "rpg_sound.h"

/**
 * RPG::SaveSystem class.
 */
namespace RPG {
	class SaveSystem {
	public:
		enum Scene {
			Scene_map = 0,
			Scene_menu = 1,
			Scene_battle = 2,
			Scene_shop = 3,
			Scene_name = 4,
			Scene_file = 5,
			Scene_title = 6,
			Scene_game_over = 7,
			Scene_debug = 8
		};
		static constexpr auto kSceneTags = makeEnumTags<Scene>(
			"map",
			"menu",
			"battle",
			"shop",
			"name",
			"file",
			"title",
			"game_over",
			"debug"
		);
		enum AtbMode {
			AtbMode_atb_active = 0,
			AtbMode_atb_wait = 1
		};
		static constexpr auto kAtbModeTags = makeEnumTags<AtbMode>(
			"atb_active",
			"atb_wait"
		);

		void Setup();
		void Fixup();
		void UnFixup();
		int32_t scene = 0;
		int32_t frame_count = 0;
		std::string graphics_name;
		int32_t message_stretch = -1;
		int32_t font_id = 0;
		std::vector<bool> switches;
		std::vector<int32_t> variables;
		int32_t message_transparent = 0;
		int32_t message_position = 2;
		int32_t message_prevent_overlap = 1;
		int32_t message_continue_events = 0;
		std::string face_name;
		int32_t face_id = 0;
		bool face_right = false;
		bool face_flip = false;
		bool transparent = false;
		bool music_stopping = false;
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
		int8_t transition_out = 1;
		int8_t transition_in = 1;
		int8_t battle_start_fadeout = 1;
		int8_t battle_start_fadein = 1;
		int8_t battle_end_fadeout = 1;
		int8_t battle_end_fadein = 1;
		bool teleport_allowed = true;
		bool escape_allowed = true;
		bool save_allowed = true;
		bool menu_allowed = true;
		std::string background;
		int32_t save_count = 0;
		int32_t save_slot = 1;
		int32_t atb_mode = 0;
	};
}

#endif
