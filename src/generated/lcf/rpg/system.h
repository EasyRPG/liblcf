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

#ifndef LCF_RPG_SYSTEM_H
#define LCF_RPG_SYSTEM_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/music.h"
#include "lcf/rpg/sound.h"
#include "lcf/rpg/testbattler.h"
#include <ostream>

/**
 * rpg::System class.
 */
namespace lcf {
namespace rpg {
	class System {
	public:
		enum FadeOut {
			FadeOut_default = 0,
			FadeOut_fade_out = 1,
			FadeOut_remove_blocks = 2,
			FadeOut_wipe_downward = 3,
			FadeOut_wipe_upward = 4,
			FadeOut_venetian_blinds = 5,
			FadeOut_vertical_blinds = 6,
			FadeOut_horizontal_blinds = 7,
			FadeOut_receding_square = 8,
			FadeOut_expanding_square = 9,
			FadeOut_screen_moves_up = 10,
			FadeOut_screen_moves_down = 11,
			FadeOut_screen_moves_left = 12,
			FadeOut_screen_moves_right = 13,
			FadeOut_vertical_div = 14,
			FadeOut_horizontal_div = 15,
			FadeOut_quadrasection = 16,
			FadeOut_zoom_in = 17,
			FadeOut_mosaic = 18,
			FadeOut_waver_screen = 19,
			FadeOut_instantaneous = 20,
			FadeOut_none = 21
		};
		static constexpr auto kFadeOutTags = lcf::makeEnumTags<FadeOut>(
			"default",
			"fade_out",
			"remove_blocks",
			"wipe_downward",
			"wipe_upward",
			"venetian_blinds",
			"vertical_blinds",
			"horizontal_blinds",
			"receding_square",
			"expanding_square",
			"screen_moves_up",
			"screen_moves_down",
			"screen_moves_left",
			"screen_moves_right",
			"vertical_div",
			"horizontal_div",
			"quadrasection",
			"zoom_in",
			"mosaic",
			"waver_screen",
			"instantaneous",
			"none"
		);
		enum FadeIn {
			FadeIn_default = 0,
			FadeIn_fade_in = 1,
			FadeIn_reconstitute_blocks = 2,
			FadeIn_unwipe_downward = 3,
			FadeIn_unwipe_upward = 4,
			FadeIn_venetian_blinds = 5,
			FadeIn_vertical_blinds = 6,
			FadeIn_horizontal_blinds = 7,
			FadeIn_receding_square = 8,
			FadeIn_expanding_square = 9,
			FadeIn_screen_moves_down = 10,
			FadeIn_screen_moves_up = 11,
			FadeIn_screen_moves_right = 12,
			FadeIn_screen_moves_left = 13,
			FadeIn_vertical_unify = 14,
			FadeIn_horizontal_unify = 15,
			FadeIn_unify_quadrants = 16,
			FadeIn_zoom_out = 17,
			FadeIn_mosaic = 18,
			FadeIn_waver_screen = 19,
			FadeIn_instantaneous = 20,
			FadeIn_none = 21
		};
		static constexpr auto kFadeInTags = lcf::makeEnumTags<FadeIn>(
			"default",
			"fade_in",
			"reconstitute_blocks",
			"unwipe_downward",
			"unwipe_upward",
			"venetian_blinds",
			"vertical_blinds",
			"horizontal_blinds",
			"receding_square",
			"expanding_square",
			"screen_moves_down",
			"screen_moves_up",
			"screen_moves_right",
			"screen_moves_left",
			"vertical_unify",
			"horizontal_unify",
			"unify_quadrants",
			"zoom_out",
			"mosaic",
			"waver_screen",
			"instantaneous",
			"none"
		);
		enum Stretch {
			Stretch_stretch = 0,
			Stretch_tiled = 1
		};
		static constexpr auto kStretchTags = lcf::makeEnumTags<Stretch>(
			"stretch",
			"tiled"
		);
		enum Font {
			Font_gothic = 0,
			Font_mincho = 1
		};
		static constexpr auto kFontTags = lcf::makeEnumTags<Font>(
			"gothic",
			"mincho"
		);
		enum BattleFormation {
			BattleFormation_terrain = 0,
			BattleFormation_loose = 1,
			BattleFormation_tight = 2
		};
		static constexpr auto kBattleFormationTags = lcf::makeEnumTags<BattleFormation>(
			"terrain",
			"loose",
			"tight"
		);
		enum BattleCondition {
			BattleCondition_none = 0,
			BattleCondition_initiative = 1,
			BattleCondition_back = 2,
			BattleCondition_surround = 3,
			BattleCondition_pincers = 4
		};
		static constexpr auto kBattleConditionTags = lcf::makeEnumTags<BattleCondition>(
			"none",
			"initiative",
			"back",
			"surround",
			"pincers"
		);
		enum EquipmentSetting {
			EquipmentSetting_actor = 0,
			EquipmentSetting_class = 1
		};
		static constexpr auto kEquipmentSettingTags = lcf::makeEnumTags<EquipmentSetting>(
			"actor",
			"class"
		);

		System();
		void Init();
		int32_t ldb_id = 0;
		std::string boat_name;
		std::string ship_name;
		std::string airship_name;
		int32_t boat_index = 0;
		int32_t ship_index = 0;
		int32_t airship_index = 0;
		std::string title_name;
		std::string gameover_name;
		std::string system_name;
		std::string system2_name;
		std::vector<int16_t> party;
		std::vector<int16_t> menu_commands;
		Music title_music;
		Music battle_music;
		Music battle_end_music;
		Music inn_music;
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
		int32_t transition_out = 0;
		int32_t transition_in = 0;
		int32_t battle_start_fadeout = 0;
		int32_t battle_start_fadein = 0;
		int32_t battle_end_fadeout = 0;
		int32_t battle_end_fadein = 0;
		int32_t message_stretch = 0;
		int32_t font_id = 0;
		int32_t selected_condition = 0;
		int32_t selected_hero = 0;
		std::string battletest_background;
		std::vector<TestBattler> battletest_data;
		int32_t save_count = 0;
		int32_t battletest_terrain = 0;
		int32_t battletest_formation = 0;
		int32_t battletest_condition = 0;
		int32_t equipment_setting = 0;
		int32_t battletest_alt_terrain = -1;
		bool show_frame = false;
		std::string frame_name;
		bool invert_animations = false;
		bool show_title = true;
	};

	inline bool operator==(const System& l, const System& r) {
		return l.ldb_id == r.ldb_id
		&& l.boat_name == r.boat_name
		&& l.ship_name == r.ship_name
		&& l.airship_name == r.airship_name
		&& l.boat_index == r.boat_index
		&& l.ship_index == r.ship_index
		&& l.airship_index == r.airship_index
		&& l.title_name == r.title_name
		&& l.gameover_name == r.gameover_name
		&& l.system_name == r.system_name
		&& l.system2_name == r.system2_name
		&& l.party == r.party
		&& l.menu_commands == r.menu_commands
		&& l.title_music == r.title_music
		&& l.battle_music == r.battle_music
		&& l.battle_end_music == r.battle_end_music
		&& l.inn_music == r.inn_music
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
		&& l.message_stretch == r.message_stretch
		&& l.font_id == r.font_id
		&& l.selected_condition == r.selected_condition
		&& l.selected_hero == r.selected_hero
		&& l.battletest_background == r.battletest_background
		&& l.battletest_data == r.battletest_data
		&& l.save_count == r.save_count
		&& l.battletest_terrain == r.battletest_terrain
		&& l.battletest_formation == r.battletest_formation
		&& l.battletest_condition == r.battletest_condition
		&& l.equipment_setting == r.equipment_setting
		&& l.battletest_alt_terrain == r.battletest_alt_terrain
		&& l.show_frame == r.show_frame
		&& l.frame_name == r.frame_name
		&& l.invert_animations == r.invert_animations
		&& l.show_title == r.show_title;
	}

	inline bool operator!=(const System& l, const System& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const System& obj) {
		os << "System{";
		os << "ldb_id="<< obj.ldb_id;
		os << " boat_name="<< obj.boat_name;
		os << " ship_name="<< obj.ship_name;
		os << " airship_name="<< obj.airship_name;
		os << " boat_index="<< obj.boat_index;
		os << " ship_index="<< obj.ship_index;
		os << " airship_index="<< obj.airship_index;
		os << " title_name="<< obj.title_name;
		os << " gameover_name="<< obj.gameover_name;
		os << " system_name="<< obj.system_name;
		os << " system2_name="<< obj.system2_name;
		os << " party=";
		for (size_t i = 0; i < obj.party.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.party[i];
		}
		os << "]";
		os << " menu_commands=";
		for (size_t i = 0; i < obj.menu_commands.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.menu_commands[i];
		}
		os << "]";
		os << " title_music="<< obj.title_music;
		os << " battle_music="<< obj.battle_music;
		os << " battle_end_music="<< obj.battle_end_music;
		os << " inn_music="<< obj.inn_music;
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
		os << " message_stretch="<< obj.message_stretch;
		os << " font_id="<< obj.font_id;
		os << " selected_condition="<< obj.selected_condition;
		os << " selected_hero="<< obj.selected_hero;
		os << " battletest_background="<< obj.battletest_background;
		os << " battletest_data=";
		for (size_t i = 0; i < obj.battletest_data.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.battletest_data[i];
		}
		os << "]";
		os << " save_count="<< obj.save_count;
		os << " battletest_terrain="<< obj.battletest_terrain;
		os << " battletest_formation="<< obj.battletest_formation;
		os << " battletest_condition="<< obj.battletest_condition;
		os << " equipment_setting="<< obj.equipment_setting;
		os << " battletest_alt_terrain="<< obj.battletest_alt_terrain;
		os << " show_frame="<< obj.show_frame;
		os << " frame_name="<< obj.frame_name;
		os << " invert_animations="<< obj.invert_animations;
		os << " show_title="<< obj.show_title;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
