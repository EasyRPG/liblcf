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

#ifndef LCF_RPG_SAVEPICTURE_H
#define LCF_RPG_SAVEPICTURE_H

// Headers
#include <array>
#include <stdint.h>
#include <string>
#include "enum_tags.h"

/**
 * RPG::SavePicture class.
 */
namespace RPG {
	class SavePicture {
	public:
		enum class Effect {
			None = 0,
			Rotation = 1,
			Wave = 2
		};
		static constexpr auto kEffectTags = makeEnumTags<Effect>(
			"None",
			"Rotation",
			"Wave"
		);
		enum class MapLayer {
			None = 0,
			Parallax = 1,
			TilemapBelow = 2,
			EventsBelow = 3,
			EventsSameAsPlayer = 4,
			TilemapAbove = 5,
			EventsAbove = 6,
			Weather = 7,
			Animations = 8,
			Windows = 9,
			Timers = 10
		};
		static constexpr auto kMapLayerTags = makeEnumTags<MapLayer>(
			"None",
			"Parallax",
			"TilemapBelow",
			"EventsBelow",
			"EventsSameAsPlayer",
			"TilemapAbove",
			"EventsAbove",
			"Weather",
			"Animations",
			"Windows",
			"Timers"
		);
		enum class BattleLayer {
			None = 0,
			Background = 1,
			BattlersAndAnimations = 2,
			Weather = 3,
			WindowsAndStatus = 4,
			Timers = 5
		};
		static constexpr auto kBattleLayerTags = makeEnumTags<BattleLayer>(
			"None",
			"Background",
			"BattlersAndAnimations",
			"Weather",
			"WindowsAndStatus",
			"Timers"
		);

		int ID = 0;
		std::string name;
		double start_x = 0.0;
		double start_y = 0.0;
		double current_x = 0.0;
		double current_y = 0.0;
		bool fixed_to_map = false;
		double current_magnify = 100.0;
		double current_top_trans = 0.0;
		bool use_transparent_color = false;
		double current_red = 100.0;
		double current_green = 100.0;
		double current_blue = 100.0;
		double current_sat = 100.0;
		int32_t effect_mode = 0;
		double current_effect_power = 0.0;
		double current_bot_trans = 0.0;
		int32_t spritesheet_cols = 1;
		int32_t spritesheet_rows = 1;
		int32_t spritesheet_frame = 0;
		int32_t spritesheet_speed = 0;
		int32_t frames = 0;
		bool spritesheet_play_once = false;
		int32_t map_layer = 7;
		int32_t battle_layer = 0;
		struct Flags {
			union {
				struct {
					bool erase_on_map_change;
					bool erase_on_battle_end;
					bool unused_bit;
					bool unused_bit2;
					bool affected_by_tint;
					bool affected_by_flash;
					bool affected_by_shake;
				};
				std::array<bool, 7> flags;
			};
			//TODO: Should try to switch to member initializers when we upgrade to VS2017.
			Flags() noexcept: erase_on_map_change(true), erase_on_battle_end(false), unused_bit(false), unused_bit2(false), affected_by_tint(false), affected_by_flash(true), affected_by_shake(true)
			{}
		} flags;
		double finish_x = 0.0;
		double finish_y = 0.0;
		int32_t finish_magnify = 100;
		int32_t finish_top_trans = 0;
		int32_t finish_bot_trans = 0;
		int32_t finish_red = 100;
		int32_t finish_green = 100;
		int32_t finish_blue = 100;
		int32_t finish_sat = 100;
		int32_t finish_effect_power = 0;
		int32_t time_left = 0;
		double current_rotation = 0.0;
		int32_t current_waver = 0;
	};

	inline bool operator==(const SavePicture::Flags& l, const SavePicture::Flags& r) {
		return l.flags == r.flags;
	}

	inline bool operator!=(const SavePicture::Flags& l, const SavePicture::Flags& r) {
		return !(l == r);
	}

	inline bool operator==(const SavePicture& l, const SavePicture& r) {
		return l.name == r.name
		&& l.start_x == r.start_x
		&& l.start_y == r.start_y
		&& l.current_x == r.current_x
		&& l.current_y == r.current_y
		&& l.fixed_to_map == r.fixed_to_map
		&& l.current_magnify == r.current_magnify
		&& l.current_top_trans == r.current_top_trans
		&& l.use_transparent_color == r.use_transparent_color
		&& l.current_red == r.current_red
		&& l.current_green == r.current_green
		&& l.current_blue == r.current_blue
		&& l.current_sat == r.current_sat
		&& l.effect_mode == r.effect_mode
		&& l.current_effect_power == r.current_effect_power
		&& l.current_bot_trans == r.current_bot_trans
		&& l.spritesheet_cols == r.spritesheet_cols
		&& l.spritesheet_rows == r.spritesheet_rows
		&& l.spritesheet_frame == r.spritesheet_frame
		&& l.spritesheet_speed == r.spritesheet_speed
		&& l.frames == r.frames
		&& l.spritesheet_play_once == r.spritesheet_play_once
		&& l.map_layer == r.map_layer
		&& l.battle_layer == r.battle_layer
		&& l.flags == r.flags
		&& l.finish_x == r.finish_x
		&& l.finish_y == r.finish_y
		&& l.finish_magnify == r.finish_magnify
		&& l.finish_top_trans == r.finish_top_trans
		&& l.finish_bot_trans == r.finish_bot_trans
		&& l.finish_red == r.finish_red
		&& l.finish_green == r.finish_green
		&& l.finish_blue == r.finish_blue
		&& l.finish_sat == r.finish_sat
		&& l.finish_effect_power == r.finish_effect_power
		&& l.time_left == r.time_left
		&& l.current_rotation == r.current_rotation
		&& l.current_waver == r.current_waver;
	}

	inline bool operator!=(const SavePicture& l, const SavePicture& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::SavePicture::Effect, true, None, Wave);
LCF_DEFINE_ENUM_TRAITS(RPG::SavePicture::MapLayer, true, None, Timers);
LCF_DEFINE_ENUM_TRAITS(RPG::SavePicture::BattleLayer, true, None, Timers);

#endif
