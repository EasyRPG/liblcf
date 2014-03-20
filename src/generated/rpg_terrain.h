/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
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

		Terrain();

		int ID;
		std::string name;
		int damage;
		int encounter_rate;
		std::string background_name;
		bool boat_pass;
		bool ship_pass;
		bool airship_pass;
		bool airship_land;
		int bush_depth;
		Sound footstep;
		bool on_damage_se;
		int background_type;
		std::string background_a_name;
		bool background_a_scrollh;
		bool background_a_scrollv;
		int background_a_scrollh_speed;
		int background_a_scrollv_speed;
		bool background_b;
		std::string background_b_name;
		bool background_b_scrollh;
		bool background_b_scrollv;
		int background_b_scrollh_speed;
		int background_b_scrollv_speed;
		struct Flags {
			bool back_party;
			bool back_enemies;
			bool lateral_party;
			bool lateral_enemies;
		} special_flags;
		int special_back_party;
		int special_back_enemies;
		int special_lateral_party;
		int special_lateral_enemies;
		int grid_location;
		int grid_a;
		int grid_b;
		int grid_c;
	};
}

#endif
