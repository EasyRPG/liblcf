/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_MOVECOMMAND_H
#define LCF_RPG_MOVECOMMAND_H

// Headers
#include <string>

/**
 * RPG::MoveCommand class.
 */
namespace RPG {
	class MoveCommand {
	public:
		struct Code {
			enum Index {
				move_up = 0,
				move_right = 1,
				move_down = 2,
				move_left = 3,
				move_upright = 4,
				move_downright = 5,
				move_downleft = 6,
				move_upleft = 7,
				move_random = 8,
				move_towards_hero = 9,
				move_away_from_hero = 10,
				move_forward = 11,
				face_up = 12,
				face_right = 13,
				face_down = 14,
				face_left = 15,
				turn_90_degree_right = 16,
				turn_90_degree_left = 17,
				turn_180_degree = 18,
				turn_90_degree_random = 19,
				face_random_direction = 20,
				face_hero = 21,
				face_away_from_hero = 22,
				wait = 23,
				begin_jump = 24,
				end_jump = 25,
				lock_facing = 26,
				unlock_facing = 27,
				increase_movement_speed = 28,
				decrease_movement_speed = 29,
				increase_movement_frequence = 30,
				decrease_movement_frequence = 31,
				switch_on = 32,
				switch_off = 33,
				change_graphic = 34,
				play_sound_effect = 35,
				walk_everywhere_on = 36,
				walk_everywhere_off = 37,
				stop_animation = 38,
				start_animation = 39,
				increase_transp = 40,
				decrease_transp = 41
			};
		};

		int command_id = 0;
		std::string parameter_string;
		int parameter_a = 0;
		int parameter_b = 0;
		int parameter_c = 0;
	};
}

#endif
