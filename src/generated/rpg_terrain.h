/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_TERRAIN_H
#define LCF_RPG_TERRAIN_H

// Headers
#include <string>
#include "rpg_sound.h"

/**
 * RPG::Terrain class.
 */
namespace RPG {
	class Terrain {
	public:
		enum BushDepth {
			BushDepth_normal = 0,
			BushDepth_third = 1,
			BushDepth_half = 2,
			BushDepth_full = 3
		};
		enum BGAssociation {
			BGAssociation_background = 0,
			BGAssociation_frame = 1
		};

		int ID = 0;
		std::string name;
		int damage = 0;
		int encounter_rate = 100;
		std::string background_name;
		bool boat_pass = false;
		bool ship_pass = false;
		bool airship_pass = true;
		bool airship_land = true;
		int bush_depth = 0;
		Sound footstep;
		bool on_damage_se = false;
		int background_type = 0;
		std::string background_a_name;
		bool background_a_scrollh = false;
		bool background_a_scrollv = false;
		int background_a_scrollh_speed = 0;
		int background_a_scrollv_speed = 0;
		bool background_b = false;
		std::string background_b_name;
		bool background_b_scrollh = false;
		bool background_b_scrollv = false;
		int background_b_scrollh_speed = 0;
		int background_b_scrollv_speed = 0;
		struct Flags {
			bool back_party;
			bool back_enemies;
			bool lateral_party;
			bool lateral_enemies;
		} special_flags;
		int special_back_party = 15;
		int special_back_enemies = 10;
		int special_lateral_party = 10;
		int special_lateral_enemies = 5;
		int grid_location = 0;
		int grid_a = 0;
		int grid_b = 0;
		int grid_c = 0;
	};
}

#endif
