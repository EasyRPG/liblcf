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

#ifndef _LSD_READER_CHUNKS_H_
#define _LSD_READER_CHUNKS_H_

////////////////////////////////////////////////////////////
/// LSD Reader namespace
////////////////////////////////////////////////////////////
namespace LSD_Reader {
	namespace ChunkSave {
		enum ChunkSave {
			title				= 0x64, // Name, level, HP, pictures
			data				= 0x65, // Main game save data
			unknown_66			= 0x66, // ? chunks
			pictures			= 0x67, // ? array
			party_location		= 0x68, // 
			boat_location		= 0x69, // ? chunks (like 68, vehicle?)
			ship_location		= 0x6A, // ? chunks (like 69, vehicle?)
			airship_location	= 0x6B, // ? chunks (like 6A, vehicle?)
			party				= 0x6C, // ? array (of actors)
			inventory			= 0x6D, // ?
			unknown_6e			= 0x6E, // ? [01 00 00] chunks?
			map_info			= 0x6F, // ?
			unknown_70			= 0x70, // ? [00] chunks?
			events				= 0x71, // ? [01 01 00 00] chunks?
			common_events		= 0x72, // ? array
			END					= 0x00	// End of chunk
		};
	}
	namespace ChunkTitle {
		enum ChunkTitle {
			timestamp		= 0x01, // ?
			hero_name		= 0x0B, // char[]: hero name
			hero_level		= 0x0C, // int: hero level
			hero_hp			= 0x0D, // int: hero HP
			face1_name		= 0x15, // char[]: face filename
			face1_id		= 0x16, // int: face id
			face2_name		= 0x17, // char[]: face filename
			face2_id		= 0x18, // int: face id
			face3_name		= 0x19, // char[]: face filename
			face3_id		= 0x1A, // int: face id
			face4_name		= 0x1B, // char[]: face filename
			face4_id		= 0x1C, // int: face id
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkData {
		enum ChunkData {
			screen					= 0x01, // 
			frame_count				= 0x0B, // 
			graphics_name			= 0x15, // string
			switches_size			= 0x1F, // 
			switches				= 0x20, // 
			variables_size			= 0x21, // 
			variables				= 0x22, // 
			message_transparent		= 0x29, // 
			message_position		= 0x2a, // 
			message_placement		= 0x2b, // 
			message_continue		= 0x2c, // 
			face_name				= 0x33, // 
			face_id					= 0x34, // 
			unknown_36				= 0x36, // 
			transparent				= 0x37, // 
			title_music				= 0x47, // 
			battle_music			= 0x48, // 
			battle_end_music		= 0x49, // 
			inn_music				= 0x4A, // 
			current_music			= 0x4B, // 
			unknown1_music			= 0x4C, // 
			unknown2_music			= 0x4D, // 
			stored_music			= 0x4E, // 
			boat_music				= 0x4F, // 
			ship_music				= 0x50, // 
			airship_music			= 0x51, // 
			gameover_music			= 0x52, // 
			cursor_se				= 0x5B, // 
			decision_se				= 0x5C, // 
			cancel_se				= 0x5D, // 
			buzzer_se				= 0x5E, // 
			battle_se				= 0x5F, // 
			escape_se				= 0x60, // 
			enemy_attack_se			= 0x61, // 
			enemy_damaged_se		= 0x62, // 
			actor_damaged_se		= 0x63, // 
			dodge_se				= 0x64, // 
			enemy_death_se			= 0x65, // 
			item_se					= 0x66, // 
			transition_out			= 0x6F, // 
			transition_in			= 0x70, // 
			battle_start_fadeout	= 0x71, // 
			battle_start_fadein		= 0x72, // 
			battle_end_fadeout		= 0x73, // 
			battle_end_fadein		= 0x74, // 
			teleport_allowed		= 0x79, // 
			escape_allowed			= 0x7A, // 
			save_allowed			= 0x7B, // 
			menu_allowed			= 0x7C, // 
			save_count				= 0x83, // 
			save_slot				= 0x84, //
			END						= 0x00	// End of chunk
		};
	}
	namespace ChunkScreen {
		enum ChunkScreen {
			unknown_01		= 0x01, // int
			unknown_02		= 0x02, // int
			unknown_03		= 0x03, // int
			tint_04			= 0x04, // int
			unknown_0b		= 0x0B, // double
			unknown_0c		= 0x0C, // double
			unknown_0d		= 0x0D, // double
			tint_0e			= 0x0E, // double
			tint_0f			= 0x0F, // int
			flash_14		= 0x14, // int
			flash_16		= 0x16, // int
			flash_17		= 0x17, // int
			flash_18		= 0x18, // double
			flash_19		= 0x19, // int
			shake_1e		= 0x1E, // int
			shake_1f		= 0x1F, // int
			shake_20		= 0x20, // int
			shake_21		= 0x21, // int
			shake_23		= 0x23, // int
			pan_x			= 0x29, // int
			pan_y			= 0x2A, // int
			unknown_2b		= 0x2B, // int
			unknown_2c		= 0x2C, // int
			unknown_2d		= 0x2D, // int
			unknown_2f		= 0x2F, // int
			weather			= 0x30, // int
			unknown_31		= 0x31, // int
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkPicture {
		enum ChunkPicture {
			name				= 0x01, // string
			start_x				= 0x02, // double
			start_y				= 0x03, // double
			current_x			= 0x04, // double
			current_y			= 0x05, // double
			current_top_trans	= 0x08, // double
			transparency		= 0x09, // bool
			current_bot_trans	= 0x12, // double
			finish_x			= 0x1F, // double
			finish_y			= 0x20, // double
			finish_top_trans	= 0x22, // int
			finish_bot_trans	= 0x23, // int
			END					= 0x00	// End of chunk
		};
	}
	namespace ChunkLocation {
		enum ChunkLocation {
			map_id			= 0x0B, // ?
			position_x		= 0x0C, // ?
			position_y		= 0x0D, // ?
			facing1			= 0x15, // ?
			facing2			= 0x16, // ?
			unknown_17		= 0x17, // ?
			unknown_21		= 0x21, // ?
			unknown_23		= 0x23, // ?
			unknown_25		= 0x25, // ?
			move_route		= 0x29, // chunks: RPG::MoveRoute
			unknown_2b		= 0x2b, // ? 
			unknown_34		= 0x34, // ?
			unknown_35		= 0x35, // ?
			unknown_36		= 0x36, // ?
			unknown_3e		= 0x3E, // ?
			unknown_3f		= 0x3F, // ?
			sprite_name		= 0x49, // ?
			sprite_id		= 0x4A, // ?
			unknown_4b		= 0x4B, // ?
			unknown_51		= 0x51, // ?
			unknown_52		= 0x52, // ?
			unknown_53		= 0x53, // ?
			unknown_65		= 0x65, // ? 
			sprite2_name	= 0x6F, // string
			sprite2_id		= 0x70, // int
			pan_x			= 0x71, // ?
			pan_y			= 0x73, // ?
			unknown_79		= 0x79, // ?
			unknown_7c		= 0x7C, // ?
			unknown_83		= 0x83, // ?
			unknown_84		= 0x84, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkActor {
		enum ChunkActor {
			unknown_01		= 0x01, // ?
			unknown_02		= 0x02, // ?
			sprite_name		= 0x0B, // string
			sprite_id		= 0x0C, // int
			face_name		= 0x15, // string
			face_id			= 0x16, // int
			level			= 0x1F, // int
			exp				= 0x20, // int
			hp_mod			= 0x21, // ?
			sp_mod			= 0x22, // ?
			attack_mod		= 0x29, // int
			defense_mod		= 0x2A, // int
			spirit_mod		= 0x2B, // int
			agility_mod		= 0x2C, // int
			skills_size		= 0x33, // ?
			skills			= 0x34, // short[]
			equipped		= 0x3D, // short[5]
			current_hp		= 0x47, // int
			current_sp		= 0x48, // int
			unknown_50		= 0x50, // ?
			unknown_51		= 0x51, // ?
			unknown_52		= 0x52, // ?
			unknown_5e		= 0x5E, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkInventory {
		enum ChunkInventory {
			party_size		= 0x01, // ?
			party			= 0x02, // ?
			items_size		= 0x0B, // ?
			item_ids		= 0x0C, // short[]: item list
			item_counts		= 0x0D, // ?
			item_usage		= 0x0E, // ?
			gold			= 0x15, // int: gold
			timer_secs		= 0x17, // int
			timer_18		= 0x18, // int
			timer_19		= 0x19, // int
			battles			= 0x20, // ?
			defeats			= 0x21, // ?
			unknown_22		= 0x22, // ?
			unknown_23		= 0x23, // ?
			unknown_29		= 0x29, // ?
			steps			= 0x2A, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkMapInfo {
		enum ChunkMapInfo {
			pan_x			= 0x01, // int
			pan_y			= 0x02, // int
			events			= 0x0B, // ? array
			lower_tiles		= 0x15, // ? [00 01 02 ... 8E 8F]
			upper_tiles		= 0x16,
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkMapEvent {
		enum ChunkMapEvent {
			unknown_01		= 0x01, // ?
			map_id			= 0x0B, // ?
			position_x		= 0x0C, // ?
			position_y		= 0x0D, // ?
			unknown_15		= 0x15, // ?
			unknown_16		= 0x16, // ?
			unknown_17		= 0x17, // ?
			unknown_18		= 0x18, // ?
			unknown_1f		= 0x1F, // ?
			unknown_20		= 0x20, // ?
			unknown_21		= 0x21, // ?
			unknown_22		= 0x22, // ?
			unknown_23		= 0x23, // ?
			unknown_24		= 0x24, // ?
			unknown_25		= 0x25, // ?
			move_route		= 0x29, // chunks: RPG::MoveRoute
			unknown_2b		= 0x2B, // ?
			unknown_33		= 0x33, // int/bool?
			unknown_34		= 0x34, // int:
			unknown_35		= 0x35, // ?
			unknown_36		= 0x36, // ?
			unknown_47		= 0x47, // ?
			sprite_name		= 0x49, // ?
			sprite_id		= 0x4A, // ?
			unknown_4b		= 0x4B, // ?
			unknown_66		= 0x66, // ?
			unknown_67		= 0x67, // ?
			unknown_6c		= 0x6C, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkCommonEvent {
		enum ChunkCommonEvent {
			event_data		= 0x01,	// chunks
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkCommonEventData {
		enum ChunkCommonEventData {
			commands		= 0x01,	// array
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkCommonEventCommands {
		enum ChunkCommonEventCommands {
			commands_size	= 0x01,	// int
			commands		= 0x02,	// event command list
			unknown_0b		= 0x0B, // int
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkEvents {
		enum ChunkEvents {
			commands		= 0x01,	// array
			unknown_04		= 0x04,	// int
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkEventCommands {
		enum ChunkEventCommands {
			commands_size	= 0x01,	// int
			commands		= 0x02,	// event command list
			unknown_0b		= 0x0B,	// int
			unknown_0c		= 0x0C,	// int
			unknown_0d		= 0x0D,	// int
			unknown_15		= 0x15,	// byte
			unknown_16		= 0x16,	// byte
			END				= 0x00	// End of chunk
		};
	}
}

#endif
