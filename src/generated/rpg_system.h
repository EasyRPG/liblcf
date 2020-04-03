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
		enum class FadeOut {
			Default = 0,
			FadeOut = 1,
			RemoveBlocks = 2,
			WipeDownward = 3,
			WipeUpward = 4,
			VenetianBlinds = 5,
			VerticalBlinds = 6,
			HorizontalBlinds = 7,
			RecedingSquare = 8,
			ExpandingSquare = 9,
			ScreenMovesUp = 10,
			ScreenMovesDown = 11,
			ScreenMovesLeft = 12,
			ScreenMovesRight = 13,
			VerticalDiv = 14,
			HorizontalDiv = 15,
			Quadrasection = 16,
			ZoomIn = 17,
			Mosaic = 18,
			WaverScreen = 19,
			Instantaneous = 20,
			None = 21
		};
		enum class FadeIn {
			Default = 0,
			FadeIn = 1,
			ReconstituteBlocks = 2,
			UnwipeDownward = 3,
			UnwipeUpward = 4,
			VenetianBlinds = 5,
			VerticalBlinds = 6,
			HorizontalBlinds = 7,
			RecedingSquare = 8,
			ExpandingSquare = 9,
			ScreenMovesDown = 10,
			ScreenMovesUp = 11,
			ScreenMovesRight = 12,
			ScreenMovesLeft = 13,
			VerticalUnify = 14,
			HorizontalUnify = 15,
			UnifyQuadrants = 16,
			ZoomOut = 17,
			Mosaic = 18,
			WaverScreen = 19,
			Instantaneous = 20,
			None = 21
		};
		enum class Stretch {
			Stretch = 0,
			Tiled = 1
		};
		enum class Font {
			Gothic = 0,
			Mincho = 1
		};
		enum class BattleFormation {
			Terrain = 0,
			Loose = 1,
			Tight = 2
		};
		enum class BattleCondition {
			None = 0,
			Initiative = 1,
			Back = 2,
			Surround = 3,
			Pincers = 4
		};
		enum class EquipmentSetting {
			Actor = 0,
			Class = 1
		};

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
}

LCF_DEFINE_ENUM_TRAITS(RPG::System::FadeOut, true, Default, None);
LCF_DEFINE_ENUM_TRAITS(RPG::System::FadeIn, true, Default, None);
LCF_DEFINE_ENUM_TRAITS(RPG::System::Stretch, true, Stretch, Tiled);
LCF_DEFINE_ENUM_TRAITS(RPG::System::Font, true, Gothic, Mincho);
LCF_DEFINE_ENUM_TRAITS(RPG::System::BattleFormation, true, Terrain, Tight);
LCF_DEFINE_ENUM_TRAITS(RPG::System::BattleCondition, true, None, Pincers);
LCF_DEFINE_ENUM_TRAITS(RPG::System::EquipmentSetting, true, Actor, Class);

LCF_DEFINE_ENUM_TAGS(RPG::System::FadeOut, (makeEnumTags<RPG::System::FadeOut>({{
	"Default",
	"FadeOut",
	"RemoveBlocks",
	"WipeDownward",
	"WipeUpward",
	"VenetianBlinds",
	"VerticalBlinds",
	"HorizontalBlinds",
	"RecedingSquare",
	"ExpandingSquare",
	"ScreenMovesUp",
	"ScreenMovesDown",
	"ScreenMovesLeft",
	"ScreenMovesRight",
	"VerticalDiv",
	"HorizontalDiv",
	"Quadrasection",
	"ZoomIn",
	"Mosaic",
	"WaverScreen",
	"Instantaneous",
	"None"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::System::FadeIn, (makeEnumTags<RPG::System::FadeIn>({{
	"Default",
	"FadeIn",
	"ReconstituteBlocks",
	"UnwipeDownward",
	"UnwipeUpward",
	"VenetianBlinds",
	"VerticalBlinds",
	"HorizontalBlinds",
	"RecedingSquare",
	"ExpandingSquare",
	"ScreenMovesDown",
	"ScreenMovesUp",
	"ScreenMovesRight",
	"ScreenMovesLeft",
	"VerticalUnify",
	"HorizontalUnify",
	"UnifyQuadrants",
	"ZoomOut",
	"Mosaic",
	"WaverScreen",
	"Instantaneous",
	"None"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::System::Stretch, (makeEnumTags<RPG::System::Stretch>({{
	"Stretch",
	"Tiled"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::System::Font, (makeEnumTags<RPG::System::Font>({{
	"Gothic",
	"Mincho"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::System::BattleFormation, (makeEnumTags<RPG::System::BattleFormation>({{
	"Terrain",
	"Loose",
	"Tight"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::System::BattleCondition, (makeEnumTags<RPG::System::BattleCondition>({{
	"None",
	"Initiative",
	"Back",
	"Surround",
	"Pincers"
	}})));

LCF_DEFINE_ENUM_TAGS(RPG::System::EquipmentSetting, (makeEnumTags<RPG::System::EquipmentSetting>({{
	"Actor",
	"Class"
	}})));


#endif
