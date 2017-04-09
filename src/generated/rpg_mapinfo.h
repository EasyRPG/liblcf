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

#ifndef LCF_RPG_MAPINFO_H
#define LCF_RPG_MAPINFO_H

// Headers
#include <string>
#include <vector>
#include "rpg_encounter.h"
#include "rpg_music.h"
#include "rpg_rect.h"

/**
 * RPG::MapInfo class.
 */
namespace RPG {
	class MapInfo {
	public:
		enum MusicType {
			MusicType_parent = 0,
			MusicType_event = 1,
			MusicType_specific = 2
		};
		enum BGMType {
			BGMType_parent = 0,
			BGMType_terrain = 1,
			BGMType_specific = 2
		};
		enum TriState {
			TriState_parent = 0,
			TriState_allow = 1,
			TriState_forbid = 2
		};

		MapInfo();
		void Init();

		int ID = 0;
		std::string name;
		int parent_map = 0;
		int indentation = 0;
		int type = -1;
		int scrollbar_x = 0;
		int scrollbar_y = 0;
		bool expanded_node = false;
		int music_type = 0;
		Music music;
		int background_type = 0;
		std::string background_name;
		int teleport = 0;
		int escape = 0;
		int save = 0;
		std::vector<Encounter> encounters;
		int encounter_steps = 25;
		Rect area_rect;
	};
}

#endif
