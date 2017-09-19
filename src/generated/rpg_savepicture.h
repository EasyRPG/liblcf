/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEPICTURE_H
#define LCF_RPG_SAVEPICTURE_H

// Headers
#include <string>

/**
 * RPG::SavePicture class.
 */
namespace RPG {
	class SavePicture {
	public:
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
		enum BattleLayer {
			BattleLayer_none = 0,
			BattleLayer_background = 1,
			BattleLayer_battlers_and_animations = 2,
			BattleLayer_weather = 3,
			BattleLayer_windows_and_status = 4,
			BattleLayer_timers = 5
		};

		int ID = 0;
		std::string name;
		double start_x = 0.0;
		double start_y = 0.0;
		double current_x = 0.0;
		double current_y = 0.0;
		bool fixed_to_map = false;
		double current_magnify = -1.0;
		double current_top_trans = 0.0;
		bool transparency = false;
		double current_red = -1.0;
		double current_green = -1.0;
		double current_blue = -1.0;
		double current_sat = -1.0;
		int effect_mode = 0;
		double current_effect = 0.0;
		double current_bot_trans = 0.0;
		int spritesheet_cols = 1;
		int spritesheet_rows = 1;
		int spritesheet_frame = 0;
		int spritesheet_speed = 0;
		int frames = 0;
		bool spritesheet_play_once = false;
		int map_layer = 7;
		int battle_layer = 0;
		struct Flags {
			bool erase_on_map_change = true;
			bool erase_on_battle_end = false;
			bool unused_bit = false;
			bool unused_bit2 = false;
			bool affected_by_tint = false;
			bool affected_by_flash = true;
			bool affected_by_shake = true;
		} flags;
		double finish_x = 0.0;
		double finish_y = 0.0;
		int finish_magnify = 100;
		int finish_top_trans = 0;
		int finish_bot_trans = 0;
		int finish_red = 100;
		int finish_green = 100;
		int finish_blue = 100;
		int finish_sat = 100;
		int finish_effect = 0;
		int time_left = 0;
		double current_rotation = 0.0;
		int current_waver = 0;
	};
}

#endif
