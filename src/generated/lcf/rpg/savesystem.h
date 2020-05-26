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

#ifndef LCF_RPG_SAVESYSTEM_H
#define LCF_RPG_SAVESYSTEM_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/music.h"
#include "lcf/rpg/sound.h"
#include <ostream>

/**
 * rpg::SaveSystem class.
 */
namespace lcf {
namespace rpg {
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
		static constexpr auto kSceneTags = lcf::makeEnumTags<Scene>(
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
		static constexpr auto kAtbModeTags = lcf::makeEnumTags<AtbMode>(
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
		bool message_active = false;
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
		&& l.message_active == r.message_active
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

	inline std::ostream& operator<<(std::ostream& os, const SaveSystem& obj) {
		os << "SaveSystem{";
		os << "scene="<< obj.scene;
		os << " frame_count="<< obj.frame_count;
		os << " graphics_name="<< obj.graphics_name;
		os << " message_stretch="<< obj.message_stretch;
		os << " font_id="<< obj.font_id;
		os << " switches=";
		for (size_t i = 0; i < obj.switches.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.switches[i];
		}
		os << "]";
		os << " variables=";
		for (size_t i = 0; i < obj.variables.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.variables[i];
		}
		os << "]";
		os << " message_transparent="<< obj.message_transparent;
		os << " message_position="<< obj.message_position;
		os << " message_prevent_overlap="<< obj.message_prevent_overlap;
		os << " message_continue_events="<< obj.message_continue_events;
		os << " face_name="<< obj.face_name;
		os << " face_id="<< obj.face_id;
		os << " face_right="<< obj.face_right;
		os << " face_flip="<< obj.face_flip;
		os << " message_active="<< obj.message_active;
		os << " music_stopping="<< obj.music_stopping;
		os << " title_music="<< obj.title_music;
		os << " battle_music="<< obj.battle_music;
		os << " battle_end_music="<< obj.battle_end_music;
		os << " inn_music="<< obj.inn_music;
		os << " current_music="<< obj.current_music;
		os << " before_vehicle_music="<< obj.before_vehicle_music;
		os << " before_battle_music="<< obj.before_battle_music;
		os << " stored_music="<< obj.stored_music;
		os << " boat_music="<< obj.boat_music;
		os << " ship_music="<< obj.ship_music;
		os << " airship_music="<< obj.airship_music;
		os << " gameover_music="<< obj.gameover_music;
		os << " cursor_se="<< obj.cursor_se;
		os << " decision_se="<< obj.decision_se;
		os << " cancel_se="<< obj.cancel_se;
		os << " buzzer_se="<< obj.buzzer_se;
		os << " battle_se="<< obj.battle_se;
		os << " escape_se="<< obj.escape_se;
		os << " enemy_attack_se="<< obj.enemy_attack_se;
		os << " enemy_damaged_se="<< obj.enemy_damaged_se;
		os << " actor_damaged_se="<< obj.actor_damaged_se;
		os << " dodge_se="<< obj.dodge_se;
		os << " enemy_death_se="<< obj.enemy_death_se;
		os << " item_se="<< obj.item_se;
		os << " transition_out="<< obj.transition_out;
		os << " transition_in="<< obj.transition_in;
		os << " battle_start_fadeout="<< obj.battle_start_fadeout;
		os << " battle_start_fadein="<< obj.battle_start_fadein;
		os << " battle_end_fadeout="<< obj.battle_end_fadeout;
		os << " battle_end_fadein="<< obj.battle_end_fadein;
		os << " teleport_allowed="<< obj.teleport_allowed;
		os << " escape_allowed="<< obj.escape_allowed;
		os << " save_allowed="<< obj.save_allowed;
		os << " menu_allowed="<< obj.menu_allowed;
		os << " background="<< obj.background;
		os << " save_count="<< obj.save_count;
		os << " save_slot="<< obj.save_slot;
		os << " atb_mode="<< obj.atb_mode;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
