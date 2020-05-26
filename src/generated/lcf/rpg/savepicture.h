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

#ifndef LCF_RPG_SAVEPICTURE_H
#define LCF_RPG_SAVEPICTURE_H

// Headers
#include <array>
#include <stdint.h>
#include <string>
#include "lcf/enum_tags.h"
#include <ostream>

/**
 * rpg::SavePicture class.
 */
namespace lcf {
namespace rpg {
	class SavePicture {
	public:
		enum Effect {
			Effect_none = 0,
			Effect_rotation = 1,
			Effect_wave = 2
		};
		static constexpr auto kEffectTags = lcf::makeEnumTags<Effect>(
			"none",
			"rotation",
			"wave"
		);
		enum MapLayer {
			MapLayer_none = 0,
			MapLayer_parallax = 1,
			MapLayer_tilemap_below = 2,
			MapLayer_events_below = 3,
			MapLayer_events_same_as_player = 4,
			MapLayer_tilemap_above = 5,
			MapLayer_events_above = 6,
			MapLayer_weather = 7,
			MapLayer_animations = 8,
			MapLayer_windows = 9,
			MapLayer_timers = 10
		};
		static constexpr auto kMapLayerTags = lcf::makeEnumTags<MapLayer>(
			"none",
			"parallax",
			"tilemap_below",
			"events_below",
			"events_same_as_player",
			"tilemap_above",
			"events_above",
			"weather",
			"animations",
			"windows",
			"timers"
		);
		enum BattleLayer {
			BattleLayer_none = 0,
			BattleLayer_background = 1,
			BattleLayer_battlers_and_animations = 2,
			BattleLayer_weather = 3,
			BattleLayer_windows_and_status = 4,
			BattleLayer_timers = 5
		};
		static constexpr auto kBattleLayerTags = lcf::makeEnumTags<BattleLayer>(
			"none",
			"background",
			"battlers_and_animations",
			"weather",
			"windows_and_status",
			"timers"
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

	inline std::ostream& operator<<(std::ostream& os, const SavePicture::Flags& obj) {
		for (size_t i = 0; i < obj.flags.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.flags[i];
		}
		os << "]";
		return os;
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

	inline std::ostream& operator<<(std::ostream& os, const SavePicture& obj) {
		os << "SavePicture{";
		os << "name="<< obj.name;
		os << " start_x="<< obj.start_x;
		os << " start_y="<< obj.start_y;
		os << " current_x="<< obj.current_x;
		os << " current_y="<< obj.current_y;
		os << " fixed_to_map="<< obj.fixed_to_map;
		os << " current_magnify="<< obj.current_magnify;
		os << " current_top_trans="<< obj.current_top_trans;
		os << " use_transparent_color="<< obj.use_transparent_color;
		os << " current_red="<< obj.current_red;
		os << " current_green="<< obj.current_green;
		os << " current_blue="<< obj.current_blue;
		os << " current_sat="<< obj.current_sat;
		os << " effect_mode="<< obj.effect_mode;
		os << " current_effect_power="<< obj.current_effect_power;
		os << " current_bot_trans="<< obj.current_bot_trans;
		os << " spritesheet_cols="<< obj.spritesheet_cols;
		os << " spritesheet_rows="<< obj.spritesheet_rows;
		os << " spritesheet_frame="<< obj.spritesheet_frame;
		os << " spritesheet_speed="<< obj.spritesheet_speed;
		os << " frames="<< obj.frames;
		os << " spritesheet_play_once="<< obj.spritesheet_play_once;
		os << " map_layer="<< obj.map_layer;
		os << " battle_layer="<< obj.battle_layer;
		os << " flags="<< obj.flags;
		os << " finish_x="<< obj.finish_x;
		os << " finish_y="<< obj.finish_y;
		os << " finish_magnify="<< obj.finish_magnify;
		os << " finish_top_trans="<< obj.finish_top_trans;
		os << " finish_bot_trans="<< obj.finish_bot_trans;
		os << " finish_red="<< obj.finish_red;
		os << " finish_green="<< obj.finish_green;
		os << " finish_blue="<< obj.finish_blue;
		os << " finish_sat="<< obj.finish_sat;
		os << " finish_effect_power="<< obj.finish_effect_power;
		os << " time_left="<< obj.time_left;
		os << " current_rotation="<< obj.current_rotation;
		os << " current_waver="<< obj.current_waver;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
