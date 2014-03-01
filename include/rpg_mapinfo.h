/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
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

		int ID;
		std::string name;
		int parent_map;
		int indentation;
		int type;
		int scrollbar_x;
		int scrollbar_y;
		bool expanded_node;
		int music_type;
		Music music;
		int background_type;
		std::string background_name;
		int teleport;
		int escape;
		int save;
		std::vector<Encounter> encounters;
		int encounter_steps;
		Rect area_rect;
	};
}

#endif
