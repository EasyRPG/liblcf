/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _RPG_MOVECOMMAND_H_
#define _RPG_MOVECOMMAND_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>

////////////////////////////////////////////////////////////
/// RPG::MoveCommand class
////////////////////////////////////////////////////////////
namespace RPG {
	class MoveCommand {
	public:
		MoveCommand();
		
		int command_id;
		std::string parameter_string;
		int parameter_a;
		int parameter_b;
		int parameter_c;

		struct Code {
			enum Index {
				move_up	= 0,
				move_right,
				move_down,
				move_left,
				move_upright,
				move_downright,
				move_downleft,
				move_upleft,
				move_random,
				move_towards_hero,
				move_away_from_hero,
				move_forward,
				face_up,
				face_right,
				face_down,
				face_left,
				turn_90_degree_right,
				turn_90_degree_left,
				turn_180_degree,
				turn_90_degree_random,
				face_random_direction,
				face_hero,
				face_away_from_hero,
				wait,
				begin_jump,
				end_jump,
				lock_facing,
				unlock_facing,
				increase_movement_speed,
				decrease_movement_speed,
				increase_movement_frequence,
				decrease_movement_frequence,
				switch_on, // Parameter A: Switch to turn on
				switch_off, // Parameter A: Switch to turn off
				change_graphic, // String: File, Parameter A: index
				play_sound_effect, // String: File, Parameters: Volume, Tempo, Balance
				walk_everywhere_on,
				walk_everywhere_off,
				stop_animation,
				start_animation,
				increase_transp, // ???
				decrease_transp // ???
			};
		};
	};
}

#endif
