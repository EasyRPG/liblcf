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

#ifndef _LMU_READER_CHUNKS_H_
#define _LMU_READER_CHUNKS_H_

////////////////////////////////////////////////////////////
/// LMU Reader namespace
////////////////////////////////////////////////////////////
namespace LMU_Reader {
	namespace ChunkData {
		enum ChunkData {
			END = 0x00 // End of chunk
		};
	}

	namespace ChunkMap {
		enum ChunkMap {
			chipset_id				= 0x01, // Integer
			width					= 0x02, // Integer
			height					= 0x03, // Integer
			scroll_type				= 0x0B, // Integer
			parallax_flag			= 0x1F, // Flag
			parallax_name			= 0x20, // String
			parallax_loop_x			= 0x21, // Flag
			parallax_loop_y			= 0x22, // Flag
			parallax_auto_loop_x	= 0x23, // Flag
			parallax_sx				= 0x24, // Integer
			parallax_auto_loop_y	= 0x25, // Flag
			parallax_sy				= 0x26, // Integer
			top_level				= 0x2A, // Bool
			lower_layer				= 0x47, // Array - Short
			upper_layer				= 0x48, // Array - Short
			events					= 0x51, // Array - RPG::Event
			save_times				= 0x5B, // Integer
			generator_flag			= 0x28, // Flag
			generator_mode			= 0x29, // Integer
			generator_tiles			= 0x30, // Integer
			generator_width			= 0x31, // Integer
			generator_height		= 0x32, // Integer
			generator_surround		= 0x33, // Flag
			generator_upper_wall	= 0x34, // Flag
			generator_floor_b		= 0x35, // Flag
			generator_floor_c		= 0x36, // Flag
			generator_extra_b		= 0x37, // Flag
			generator_extra_c		= 0x38, // Flag
			generator_x				= 0x3C, // Uint32 x 9
			generator_y				= 0x3D, // Uint32 x 9
			generator_tile_ids		= 0x3E	// Array - Short
		};
	}
	namespace ChunkEvent {
		enum ChunkEvent {
			name	= 0x01, // String
			x		= 0x02, // Integer
			y		= 0x03, // Integer
			//???	= 0x04, // ???
			pages	= 0x05	// Array - RPG::EventPage
		};
	}
	namespace ChunkEventPage {
		enum ChunkEventPage {
			condition			= 0x02, // RPG::EventPageCondition
			character_name		= 0x15, // String
			character_index		= 0x16, // Integer
			character_direction	= 0x17, // Integer
			character_pattern	= 0x18, // Integer
			translucent			= 0x19, // Integer
			move_type			= 0x1F, // Integer
			move_frequency		= 0x20, // Integer
			trigger				= 0x21, // Integer
			priority_type		= 0x22, // Integer
			overlap				= 0x23, // Flag
			animation_type		= 0x24, // Integer
			move_speed			= 0x25, // Integer
			move_route			= 0x29, // RPG::MoveRoute
			event_commands_size = 0x33, // Integer
			event_commands		= 0x34	// Array - RPG::EventCommand
		};
	}
	namespace ChunkEventPageCondition {
		enum ChunkEventPageCondition {
			condition_flags = 0x01, // Bitflag
			switch_a_id		= 0x02, // Integer
			switch_b_id		= 0x03, // Integer
			variable_id		= 0x04, // Integer
			variable_value	= 0x05, // Integer
			item_id			= 0x06, // Integer
			actor_id		= 0x07, // Integer
			timer_sec		= 0x08, // Integer
			timer2_sec		= 0x09, // Integer - RPG2003
			compare_operator= 0x0A	// Integer - RPG2003
		};
	}
	namespace ChunkMoveRoute {
		enum ChunkMoveRoute {
			move_commands_size	= 0x0B, // Integer
			move_commands		= 0x0C, // Array - RPG::MoveCommand
			repeat				= 0x15, // Flag
			skippable			= 0x16	// Flag
		};
	}
	namespace ChunkMoveCommand {
		enum ChunkMoveCommand {
			switch_on		= 0x20,
			switch_off		= 0x21,
			change_graphic	= 0x22,
			play_sound		= 0x23
		};
	}
	// Contains the ids for RPG::MoveCommand
	namespace ChunkMoveCommands {
		enum ChunkMoveCommands {
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
	}
}

#endif
