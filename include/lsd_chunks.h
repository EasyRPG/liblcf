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
	struct ChunkSave {
		enum Index {
			title				= 0x64, // RPG::SaveTitle
			system				= 0x65, // RPG::SaveSystem
			screen				= 0x66, // RPG::SaveScreen
			pictures			= 0x67, // array of RPG::SavePicture
			party_location		= 0x68, // RPG::SavePartyLocation
			boat_location		= 0x69, // RPG::SaveVehicleLocation
			ship_location		= 0x6A, // RPG::SaveVehicleLocation
			airship_location	= 0x6B, // RPG::SaveVehicleLocation
			actors				= 0x6C, // array of RPG::SaveActor
			inventory			= 0x6D, // RPG::SaveInventory
			targets				= 0x6E, // array of RPG::SaveTarget
			map_info			= 0x6F, // RPG::SaveMapInfo
			unknown_70			= 0x70, // ? chunks?
			events				= 0x71, // RPG::SaveEvents
			common_events		= 0x72  // array of RPG::SaveCommonEvent
		};
	};
	struct ChunkSaveTitle {
		enum Index {
			timestamp		= 0x01, // double(?)
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
			face4_id		= 0x1C  // int: face id
		};
	};
	struct ChunkSaveSystem {
		enum Index {
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
			face_right				= 0x35, // bool
			face_flip				= 0x36, // bool
			transparent				= 0x37, // 
			unknown_3d				= 0x3D, // 
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
			background				= 0x7D, // string
			save_count				= 0x83, // 
			save_slot				= 0x84  //
		};
	};
	struct ChunkSaveScreen {
		enum Index {
			tint_finish_red		= 0x01, // int
			tint_finish_green	= 0x02, // int
			tint_finish_blue	= 0x03, // int
			tint_finish_sat		= 0x04, // int
			tint_current_red	= 0x0B, // double
			tint_current_green	= 0x0C, // double
			tint_current_blue	= 0x0D, // double
			tint_current_sat	= 0x0E, // double
			tint_time_left		= 0x0F, // int
			flash_continuous	= 0x14, // int
			flash_red			= 0x15, // int
			flash_green			= 0x16, // int
			flash_blue			= 0x17, // int
			flash_current_level	= 0x18, // double
			flash_time_left		= 0x19, // int
			shake_continuous	= 0x1E, // int
			shake_strength		= 0x1F, // int
			shake_speed			= 0x20, // int
			shake_position		= 0x21, // int
			shake_time_left		= 0x23, // int
			pan_x				= 0x29, // int
			pan_y				= 0x2A, // int
			battleanim_id		= 0x2B, // int  - battle animation ID
			battleanim_target	= 0x2C, // int	- battle animation target
			battleanim_unk_2d	= 0x2D, // int  - battle animation ??
			battleanim_global	= 0x2F, // int  - battle animation global scope
			weather				= 0x30, // int
			weather_strength	= 0x31  // int
		};
	};
	struct ChunkSavePicture {
		enum Index {
			name				= 0x01, // string
			start_x				= 0x02, // double
			start_y				= 0x03, // double
			current_x			= 0x04, // double
			current_y			= 0x05, // double
			picture_scrolls		= 0x06, // bool
			current_magnify		= 0x07, // double
			current_top_trans	= 0x08, // double
			transparency		= 0x09, // bool
			current_red			= 0x0B, // double
			current_green		= 0x0C, // double
			current_blue		= 0x0D, // double
			current_sat			= 0x0E, // double
			effect_mode			= 0x0F, // int
			effect_speed		= 0x10, // double
			current_bot_trans	= 0x12, // double
			finish_x			= 0x1F, // double
			finish_y			= 0x20, // double
			finish_magnify		= 0x21, // int
			finish_top_trans	= 0x22, // int
			finish_bot_trans	= 0x23, // int
			finish_red			= 0x29, // int
			finish_green		= 0x2A, // int
			finish_blue			= 0x2B, // int
			finish_sat			= 0x2C, // int
			effect2_speed		= 0x2E, // int
			time_left			= 0x33, // int
			current_rotation	= 0x34, // double
			current_waver		= 0x35  // int
		};
	};
	struct ChunkSavePartyLocation {
		enum Index {
			map_id				= 0x0B, // ?
			position_x			= 0x0C, // ?
			position_y			= 0x0D, // ?
			facing1				= 0x15, // ?
			facing2				= 0x16, // ?
			unknown_17			= 0x17, // ?
			unknown_20			= 0x20, // ?
			unknown_21			= 0x21, // ?
			unknown_23			= 0x23, // ?
			unknown_25			= 0x25, // ?
			move_route			= 0x29, // chunks: RPG::MoveRoute
			unknown_2a			= 0x2A, // ? 
			unknown_2b			= 0x2B, // ? 
			unknown_2c			= 0x2C, // ?
			sprite_transparent	= 0x2E, // bool
			unknown_2f			= 0x2F, // ? 
			unknown_33			= 0x33, // ?
			unknown_34			= 0x34, // ?
			unknown_35			= 0x35, // ?
			unknown_36			= 0x36, // ?
			unknown_3e			= 0x3E, // ?
			unknown_3f			= 0x3F, // ?
			sprite_name			= 0x49, // ?
			sprite_id			= 0x4A, // ?
			unknown_4b			= 0x4B, // ?
			unknown_51			= 0x51, // ?
			unknown_52			= 0x52, // ?
			unknown_53			= 0x53, // ?
			pan_state			= 0x6F, // int
			pan_current_x		= 0x70, // int
			pan_current_y		= 0x71, // ?
			pan_finish_x		= 0x72, // ?
			pan_finish_y		= 0x73, // ?
			unknown_79			= 0x79, // ?
			encounter_steps		= 0x7C, // int: sum of terrain.encounter_rate for each step
			unknown_83			= 0x83, // ?
			unknown_84			= 0x84  // ?
		};
	};
	struct ChunkSaveVehicleLocation {
		enum Index {
			map_id			= 0x0B, // ?
			position_x		= 0x0C, // ?
			position_y		= 0x0D, // ?
			facing1			= 0x15, // ?
			facing2			= 0x16, // ?
			unknown_17		= 0x17, // ?
			unknown_20		= 0x20, // ?
			unknown_21		= 0x21, // ?
			unknown_23		= 0x23, // ?
			unknown_25		= 0x25, // ?
			move_route		= 0x29, // chunks: RPG::MoveRoute
			unknown_2a		= 0x2a, // ?
			unknown_2b		= 0x2b, // ?
			unknown_34		= 0x34, // ?
			unknown_35		= 0x35, // ?
			unknown_36		= 0x36, // ?
			sprite_name		= 0x49, // ?
			sprite_id		= 0x4A, // ?
			unknown_4b		= 0x4B, // ?
			unknown_65		= 0x65, // ? 
			sprite2_name	= 0x6F, // string
			sprite2_id		= 0x70  // int
		};
	};
	struct ChunkSaveActor {
		enum Index {
			name			= 0x01, // string, "\x01" for default!?!?
			title			= 0x02, // string, "\x01" for default!?!?
			sprite_name		= 0x0B, // string
			sprite_id		= 0x0C, // int
			sprite_flags	= 0x0D, // int
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
			battle_commands	= 0x50, // array of (uncompressed) int32
			status_size		= 0x51, // ?
			status			= 0x52, // array of short
			changed_class	= 0x53, // bool
			class_id		= 0x5A, // int class-id
			unknown_5b		= 0x5B, // ?
			two_weapon		= 0x5C, // bool
			lock_equipment	= 0x5D, // bool
			auto_battle		= 0x5E, // bool
			mighty_guard	= 0x5F, // bool
			unknown_60		= 0x60  // ?
		};
	};

	struct ChunkSaveInventory {
		enum Index {
			party_size		= 0x01, // ?
			party			= 0x02, // ?
			items_size		= 0x0B, // ?
			item_ids		= 0x0C, // short[]: item list
			item_counts		= 0x0D, // ?
			item_usage		= 0x0E, // ?
			gold			= 0x15, // int
			timer1_secs		= 0x17, // int
			timer1_active	= 0x18, // bool
			timer1_visible	= 0x19, // bool
			timer1_battle	= 0x1A, // bool
			timer2_secs		= 0x1B, // int
			timer2_active	= 0x1C, // bool
			timer2_visible	= 0x1D, // bool
			timer2_battle	= 0x1E, // bool
			battles			= 0x20, // ?
			defeats			= 0x21, // ?
			escapes			= 0x22, // ?
			victories		= 0x23, // ?
			unknown_29		= 0x29, // ?
			steps			= 0x2A  // ?
		};
	};
	struct ChunkSaveMapInfo {
		enum Index {
			pan_x				= 0x01, // int
			pan_y				= 0x02, // int
			encounter_rate		= 0x03, // int
			chipset_id			= 0x05, // int
			events				= 0x0B, // ? array
			lower_tiles			= 0x15, // ? [00 01 02 ... 8E 8F]
			upper_tiles			= 0x16, //
			parallax_name		= 0x20, // string
			parallax_horz		= 0x21, // bool
			parallax_vert		= 0x22, // bool
			parallax_horz_auto	= 0x23, // bool
			parallax_horz_speed	= 0x24, // int
			parallax_vert_auto	= 0x25, // bool
			parallax_vert_speed	= 0x26  // int
		};
	};
	struct ChunkSaveMapEvent {
		enum Index {
			unknown_01			= 0x01, // ?
			map_id				= 0x0B, // ?
			position_x			= 0x0C, // ?
			position_y			= 0x0D, // ?
			facing1				= 0x15, // ?
			facing2				= 0x16, // ?
			anim_frame			= 0x17, // ?
			unknown_18			= 0x18, // ?
			unknown_1f			= 0x1F, // ?
			unknown_20			= 0x20, // ?
			layer				= 0x21, // int
			unknown_22			= 0x22, // ?
			unknown_23			= 0x23, // ?
			unknown_24			= 0x24, // ?
			unknown_25			= 0x25, // ?
			move_route			= 0x29, // chunks: RPG::MoveRoute
			unknown_2a			= 0x2A, // int/bool
			unknown_2b			= 0x2B, // ?
			unknown_2f			= 0x2F, // ?
			anim_paused			= 0x30, // bool
			unknown_33			= 0x33, // int/bool?
			unknown_34			= 0x34, // int:
			unknown_35			= 0x35, // ?
			unknown_36			= 0x36, // ?
			unknown_3e			= 0x3E, // ?
			unknown_3f			= 0x3F, // ?
			unknown_47			= 0x47, // ?
			sprite_name			= 0x49, // ?
			sprite_id			= 0x4A, // ?
			unknown_4b			= 0x4B, // ?
			flash_red			= 0x51, // int
			flash_green			= 0x52, // int
			flash_blue			= 0x53, // int
			flash_current_level	= 0x54, // double
			flash_time_left		= 0x55, // int
			unknown_66			= 0x66, // ?
			unknown_67			= 0x67, // ?
			event_data			= 0x6C  // chunks
		};
	};
	struct ChunkSaveEventData {
		enum Index {
			commands		= 0x01, // array
			unknown_16		= 0x16, // 
			unknown_17		= 0x17, // 
			time_left		= 0x1F, // int
			unknown_20		= 0x20  // 
		};
	};
	struct ChunkSaveEventCommands {
		enum Index {
			commands_size	= 0x01,	// int
			commands		= 0x02,	// event command list
			current_command	= 0x0B,	// int
			unknown_0c		= 0x0C,	// int
			unknown_0d		= 0x0D,	// int
			unknown_15		= 0x15,	// byte
			unknown_16		= 0x16	// byte
		};
	};
	struct ChunkSaveCommonEvent {
		enum Index {
			event_data		= 0x01	// chunks
		};
	};
	struct ChunkSaveEvents {
		enum Index {
			events			= 0x01,	// array
			events_size		= 0x04,	// int
			unknown_16		= 0x16, // int
			unknown_17		= 0x17, // int
			unknown_18		= 0x18, // int
			unknown_1c		= 0x1C, // int/bool
			unknown_20		= 0x20, // int/bool
			unknown_24		= 0x24, // int/bool
			unknown_25		= 0x25  // int/bool
		};
	};
	struct ChunkSaveTarget {
		enum Index {
			map_id			= 0x01, // int
			map_x			= 0x02, // int
			map_y			= 0x03, // int
			switch_on		= 0x04, // bool
			switch_id		= 0x05  // int
		};
	};
}

#endif
