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

#ifndef LCF_RPG_SYSTEM_H
#define LCF_RPG_SYSTEM_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "enum_tags.h"
#include "rpg_music.h"
#include "rpg_sound.h"
#include "rpg_testbattler.h"

/**
 * RPG::System class.
 */
namespace RPG {
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
		static constexpr auto kFadeOutTags = makeEnumTags<FadeOut>(
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
		static constexpr auto kFadeInTags = makeEnumTags<FadeIn>(
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
		static constexpr auto kStretchTags = makeEnumTags<Stretch>(
			"stretch",
			"tiled"
		);
		enum Font {
			Font_gothic = 0,
			Font_mincho = 1
		};
		static constexpr auto kFontTags = makeEnumTags<Font>(
			"gothic",
			"mincho"
		);
		enum BattleFormation {
			BattleFormation_terrain = 0,
			BattleFormation_loose = 1,
			BattleFormation_tight = 2
		};
		static constexpr auto kBattleFormationTags = makeEnumTags<BattleFormation>(
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
		static constexpr auto kBattleConditionTags = makeEnumTags<BattleCondition>(
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
		static constexpr auto kEquipmentSettingTags = makeEnumTags<EquipmentSetting>(
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
}

#endif
