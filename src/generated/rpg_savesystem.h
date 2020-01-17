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
		int32_t message_stretch = 0;
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
		int8_t transition_out = -1;
		int8_t transition_in = -1;
		int8_t battle_start_fadeout = -1;
		int8_t battle_start_fadein = -1;
		int8_t battle_end_fadeout = -1;
		int8_t battle_end_fadein = -1;
		bool teleport_allowed = true;
		bool escape_allowed = true;
		bool save_allowed = true;
		bool menu_allowed = true;
		std::string background;
		int32_t save_count = 0;
		int32_t save_slot = 1;
		int32_t atb_mode = 0;
	};

	inline bool operator==(const SaveSystem& l, const SaveSystem& r) {
		return l.scene == r.scene
		&& l.frame_count == r.frame_count
		&& l.graphics_name == r.graphics_name
		&& l.message_stretch == r.message_stretch
		&& l.font_id == r.font_id
		&& l.switches == r.switches
		&& l.variables == r.variables
		&& l.message_transparent == r.message_transparent
		&& l.message_position == r.message_position
		&& l.message_prevent_overlap == r.message_prevent_overlap
		&& l.message_continue_events == r.message_continue_events
		&& l.face_name == r.face_name
		&& l.face_id == r.face_id
		&& l.face_right == r.face_right
		&& l.face_flip == r.face_flip
		&& l.transparent == r.transparent
		&& l.music_stopping == r.music_stopping
		&& l.title_music == r.title_music
		&& l.battle_music == r.battle_music
		&& l.battle_end_music == r.battle_end_music
		&& l.inn_music == r.inn_music
		&& l.current_music == r.current_music
		&& l.before_vehicle_music == r.before_vehicle_music
		&& l.before_battle_music == r.before_battle_music
		&& l.stored_music == r.stored_music
		&& l.boat_music == r.boat_music
		&& l.ship_music == r.ship_music
		&& l.airship_music == r.airship_music
		&& l.gameover_music == r.gameover_music
		&& l.cursor_se == r.cursor_se
		&& l.decision_se == r.decision_se
		&& l.cancel_se == r.cancel_se
		&& l.buzzer_se == r.buzzer_se
		&& l.battle_se == r.battle_se
		&& l.escape_se == r.escape_se
		&& l.enemy_attack_se == r.enemy_attack_se
		&& l.enemy_damaged_se == r.enemy_damaged_se
		&& l.actor_damaged_se == r.actor_damaged_se
		&& l.dodge_se == r.dodge_se
		&& l.enemy_death_se == r.enemy_death_se
		&& l.item_se == r.item_se
		&& l.transition_out == r.transition_out
		&& l.transition_in == r.transition_in
		&& l.battle_start_fadeout == r.battle_start_fadeout
		&& l.battle_start_fadein == r.battle_start_fadein
		&& l.battle_end_fadeout == r.battle_end_fadeout
		&& l.battle_end_fadein == r.battle_end_fadein
		&& l.teleport_allowed == r.teleport_allowed
		&& l.escape_allowed == r.escape_allowed
		&& l.save_allowed == r.save_allowed
		&& l.menu_allowed == r.menu_allowed
		&& l.background == r.background
		&& l.save_count == r.save_count
		&& l.save_slot == r.save_slot
		&& l.atb_mode == r.atb_mode;
	}

	inline bool operator!=(const SaveSystem& l, const SaveSystem& r) {
		return !(l == r);
	}
}

#endif
