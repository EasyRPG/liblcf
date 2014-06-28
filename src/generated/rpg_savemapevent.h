/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEMAPEVENT_H
#define LCF_RPG_SAVEMAPEVENT_H

// Headers
#include <string>
#include "rpg_event.h"
#include "rpg_moveroute.h"
#include "rpg_saveeventdata.h"

/**
 * RPG::SaveMapEvent class.
 */
namespace RPG {
	class SaveMapEvent {
	public:
		SaveMapEvent();
		void Setup(const RPG::Event& event);
		void Fixup(const RPG::EventPage& page);

		int ID;
		bool active;
		int map_id;
		int position_x;
		int position_y;
		int prelock_direction;
		int direction;
		int anim_frame;
		int unknown_18;
		int unknown_1f;
		int move_frequency;
		int layer;
		int unknown_22;
		int unknown_23_animation_type;
		bool lock_facing;
		int move_speed;
		MoveRoute move_route;
		bool move_route_overwrite;
		int move_route_index;
		bool move_route_repeated;
		int unknown_2f_overlap;
		int anim_paused;
		int unknown_33;
		int unknown_34;
		int unknown_35;
		int unknown_36;
		int unknown_3d;
		int unknown_3e;
		int unknown_3f;
		int unknown_47;
		int unknown_48;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b;
		int flash_red;
		int flash_green;
		int flash_blue;
		double flash_current_level;
		int flash_time_left;
		int unknown_65;
		int original_move_route_index;
		int unknown_67;
		SaveEventData event_data;
	};
}

#endif
