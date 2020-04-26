/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_LSD_CHUNKS_H
#define LCF_LSD_CHUNKS_H

/**
 * LSD Reader namespace.
 */
namespace LSD_Reader {
	struct ChunkSaveTitle {
		enum Index {
			/** double - timestamp in Delphi's TDateTime format */
			timestamp = 0x01,
			/** char[]: hero name */
			hero_name = 0x0B,
			/** int: hero level */
			hero_level = 0x0C,
			/** int: hero HP */
			hero_hp = 0x0D,
			/** char[]: face filename */
			face1_name = 0x15,
			/** int: face id */
			face1_id = 0x16,
			/** char[]: face filename */
			face2_name = 0x17,
			/** int: face id */
			face2_id = 0x18,
			/** char[]: face filename */
			face3_name = 0x19,
			/** int: face id */
			face3_id = 0x1A,
			/** char[]: face filename */
			face4_name = 0x1B,
			/** int: face id */
			face4_id = 0x1C
		};
	};
	struct ChunkSaveSystem {
		enum Index {
			/** The current Scene for RPG_RT. Legacy field only used by RPG_RT and not by EasyRPG Player. Savegames always have a scene of 5 (filemenu). */
			scene = 0x01,
			/**  */
			frame_count = 0x0B,
			/** string */
			graphics_name = 0x15,
			/** Integer */
			message_stretch = 0x16,
			/** Integer */
			font_id = 0x17,
			/**  */
			switches_size = 0x1F,
			/**  */
			switches = 0x20,
			/**  */
			variables_size = 0x21,
			/**  */
			variables = 0x22,
			/**  */
			message_transparent = 0x29,
			/**  */
			message_position = 0x2A,
			/**  */
			message_prevent_overlap = 0x2B,
			/**  */
			message_continue_events = 0x2C,
			/**  */
			face_name = 0x33,
			/**  */
			face_id = 0x34,
			/** bool */
			face_right = 0x35,
			/** bool */
			face_flip = 0x36,
			/** A flag set by RPG_RT when messages are summoned. */
			message_active = 0x37,
			/** Music is being faded out or had been stopped (Play music with the same music as currently playing will restart the music when this flag is set) */
			music_stopping = 0x3D,
			/**  */
			title_music = 0x47,
			/**  */
			battle_music = 0x48,
			/**  */
			battle_end_music = 0x49,
			/**  */
			inn_music = 0x4A,
			/**  */
			current_music = 0x4B,
			/**  */
			before_vehicle_music = 0x4C,
			/**  */
			before_battle_music = 0x4D,
			/**  */
			stored_music = 0x4E,
			/**  */
			boat_music = 0x4F,
			/**  */
			ship_music = 0x50,
			/**  */
			airship_music = 0x51,
			/**  */
			gameover_music = 0x52,
			/**  */
			cursor_se = 0x5B,
			/**  */
			decision_se = 0x5C,
			/**  */
			cancel_se = 0x5D,
			/**  */
			buzzer_se = 0x5E,
			/**  */
			battle_se = 0x5F,
			/**  */
			escape_se = 0x60,
			/**  */
			enemy_attack_se = 0x61,
			/**  */
			enemy_damaged_se = 0x62,
			/**  */
			actor_damaged_se = 0x63,
			/**  */
			dodge_se = 0x64,
			/**  */
			enemy_death_se = 0x65,
			/**  */
			item_se = 0x66,
			/**  */
			transition_out = 0x6F,
			/**  */
			transition_in = 0x70,
			/**  */
			battle_start_fadeout = 0x71,
			/**  */
			battle_start_fadein = 0x72,
			/**  */
			battle_end_fadeout = 0x73,
			/**  */
			battle_end_fadein = 0x74,
			/**  */
			teleport_allowed = 0x79,
			/**  */
			escape_allowed = 0x7A,
			/**  */
			save_allowed = 0x7B,
			/**  */
			menu_allowed = 0x7C,
			/** string */
			background = 0x7D,
			/**  */
			save_count = 0x83,
			/**  */
			save_slot = 0x84,
			/** ATB mode of RPG 2003 battle system. */
			atb_mode = 0x8C
		};
	};
	struct ChunkSaveScreen {
		enum Index {
			/** int */
			tint_finish_red = 0x01,
			/** int */
			tint_finish_green = 0x02,
			/** int */
			tint_finish_blue = 0x03,
			/** int */
			tint_finish_sat = 0x04,
			/** double */
			tint_current_red = 0x0B,
			/** double */
			tint_current_green = 0x0C,
			/** double */
			tint_current_blue = 0x0D,
			/** double */
			tint_current_sat = 0x0E,
			/** int */
			tint_time_left = 0x0F,
			/** int */
			flash_continuous = 0x14,
			/** int */
			flash_red = 0x15,
			/** int */
			flash_green = 0x16,
			/** int */
			flash_blue = 0x17,
			/** double */
			flash_current_level = 0x18,
			/** int */
			flash_time_left = 0x19,
			/** int */
			shake_continuous = 0x1E,
			/** int */
			shake_strength = 0x1F,
			/** int */
			shake_speed = 0x20,
			/** int */
			shake_position = 0x21,
			/** int - unused */
			shake_position_y = 0x22,
			/** int */
			shake_time_left = 0x23,
			/** int */
			pan_x = 0x29,
			/** int */
			pan_y = 0x2A,
			/** int - battle animation ID */
			battleanim_id = 0x2B,
			/** int - battle animation target */
			battleanim_target = 0x2C,
			/** int - frame count - Ref<Animation>? FIXME */
			battleanim_frame = 0x2D,
			/** There is currently a battle animation playing */
			battleanim_active = 0x2E,
			/** int - battle animation global scope */
			battleanim_global = 0x2F,
			/** int */
			weather = 0x30,
			/** int */
			weather_strength = 0x31
		};
	};
	struct ChunkSavePicture {
		enum Index {
			/** string */
			name = 0x01,
			/** X position where picture was originally shown */
			start_x = 0x02,
			/** Y position where picture was originally shown */
			start_y = 0x03,
			/** Current x position of picture */
			current_x = 0x04,
			/** Current y position of picture */
			current_y = 0x05,
			/** If true; picture will scroll with map */
			fixed_to_map = 0x06,
			/** Current zoom level of picture. */
			current_magnify = 0x07,
			/** Current transparency of picture. In RPG2k3 < 1.12 affects only top half of picture. */
			current_top_trans = 0x08,
			/** If false; ignore the transparent color */
			use_transparent_color = 0x09,
			/** Current red tint */
			current_red = 0x0B,
			/** Current green tint */
			current_green = 0x0C,
			/** Current blue tint. */
			current_blue = 0x0D,
			/** Current saturation */
			current_sat = 0x0E,
			/** Which effect is active. */
			effect_mode = 0x0F,
			/** The current power of the active effect. */
			current_effect_power = 0x10,
			/** Bottom half transparency. Only has an effect in RPG2k3 < 1.12. */
			current_bot_trans = 0x12,
			/** Spritesheet columns */
			spritesheet_cols = 0x13,
			/** Spritesheet rows */
			spritesheet_rows = 0x14,
			/** Current spritesheet frame */
			spritesheet_frame = 0x15,
			/** Spritesheet speed (X frames per second) */
			spritesheet_speed = 0x16,
			/** Frames since ShowPicture */
			frames = 0x17,
			/** True: Play once and destroy; False: Loop spritesheet */
			spritesheet_play_once = 0x18,
			/** Layer to show picture on at the map */
			map_layer = 0x19,
			/** Layer to show picture on in battle */
			battle_layer = 0x1A,
			/** Bitflag. Persists Map/Battle change/end; Affected by Shake/Flash/Tint */
			flags = 0x1B,
			/** Final X position to move picture to. */
			finish_x = 0x1F,
			/** Final Y position to move picture to. */
			finish_y = 0x20,
			/** Final zoom level to animate picture to. */
			finish_magnify = 0x21,
			/** Final top_trans level to animate picture. */
			finish_top_trans = 0x22,
			/** Final bot_trans level to animate picture. */
			finish_bot_trans = 0x23,
			/** Final red tint to animate picture. */
			finish_red = 0x29,
			/** Final green tint to animate picture. */
			finish_green = 0x2A,
			/** Final blue tint to animate picture. */
			finish_blue = 0x2B,
			/** Final saturation to animate picture. */
			finish_sat = 0x2C,
			/** Final power of the effect to animate picture. */
			finish_effect_power = 0x2E,
			/** How much time left in picture move / animation effects. */
			time_left = 0x33,
			/** How much the picture is currently rotated. */
			current_rotation = 0x34,
			/** Current wave effect for picture. */
			current_waver = 0x35
		};
	};
	struct ChunkSavePartyLocation {
		enum Index {
			/** Flag */
			active = 0x01,
			/** ? */
			map_id = 0x0B,
			/** ? */
			position_x = 0x0C,
			/** ? */
			position_y = 0x0D,
			/** Facing direction */
			direction = 0x15,
			/** Sprite direction */
			sprite_direction = 0x16,
			/** ? */
			anim_frame = 0x17,
			/** 0 or 3 - Transparency level of the current event page */
			transparency = 0x18,
			/** From 0 to 255 - Remaining distance of the current move */
			remaining_step = 0x1F,
			/** ? */
			move_frequency = 0x20,
			/** ? */
			layer = 0x21,
			/** Flag */
			overlap_forbidden = 0x22,
			/**  */
			animation_type = 0x23,
			/** facing locked */
			lock_facing = 0x24,
			/**  */
			move_speed = 0x25,
			/** chunks: RPG::MoveRoute */
			move_route = 0x29,
			/** Use custom move route */
			move_route_overwrite = 0x2A,
			/** Index of MoveEvent command route */
			move_route_index = 0x2B,
			/** Boolean - Repeating move route has been completed at least once */
			move_route_repeated = 0x2C,
			/** bool */
			sprite_transparent = 0x2E,
			/** Whether the move route (MoveEvent or defined route) activated through mode. Almost the same as 0x33 (through). 0x2F represents that by MoveEvent the through mode has been activated; but 0x33 is what's actually checked for collisions. In several cases; 0x33 will be changed to indicate a condition in which an event or the hero is in through mode through other means than a MoveEvent; which can be: an event with an empty page being activated; player pressing Ctrl in test play; hero entering or exiting a vehicle (only very briefly) */
			route_through = 0x2F,
			/** ? */
			anim_paused = 0x30,
			/** Can go through anything */
			through = 0x33,
			/** ? */
			stop_count = 0x34,
			/** ? */
			anim_count = 0x35,
			/** 2^move_frequency unless it's a random move route - Once stop_count reaches it; the next move command is executed */
			max_stop_count = 0x36,
			/** ? */
			jumping = 0x3D,
			/** ? */
			begin_jump_x = 0x3E,
			/** ? */
			begin_jump_y = 0x3F,
			/** Indicates paused movement for an event; set while the player is talking to the event so that it won't run away */
			pause = 0x47,
			/** Flag */
			flying = 0x48,
			/** ? */
			sprite_name = 0x49,
			/** ? */
			sprite_id = 0x4A,
			/** Flag whether an event (the hero is also an event) in the current frame processed their movement actions (may also be none). This is required because events are asked every frame to initiate their next movement step if required; but not necessarily in order; because checking passability for an event trying to move onto another tile will trigger any event's movement initiation which is on the target tile (because this way the target event may move away; allowing the other event to move to that tile). This flag ensures that every event processes their possible movements only once per frame even if it was already asked to do so out of order as part of another event's movement initiation. */
			processed = 0x4B,
			/** int */
			flash_red = 0x51,
			/** int */
			flash_green = 0x52,
			/** int */
			flash_blue = 0x53,
			/** double */
			flash_current_level = 0x54,
			/** int */
			flash_time_left = 0x55,
			/**  */
			boarding = 0x65,
			/**  */
			aboard = 0x66,
			/** Vehicle in use */
			vehicle = 0x67,
			/**  */
			unboarding = 0x68,
			/** Move speed before the party boarded the vehicle */
			preboard_move_speed = 0x69,
			/** Flag which briefly is true if the player presses ESC. At the right place in handling each frame's activities for the player; the code checks whether this flag is set and calls the menu; however there are several conditions which would cancel this flag and instead process another higher-priority action; such as when an encounter takes place during the same frame. */
			menu_calling = 0x6C,
			/** 0: screen is fixed; 1: screen moves with player. */
			pan_state = 0x6F,
			/** Number of 1/16 pixels to the left of player */
			pan_current_x = 0x70,
			/** Number of 1/16 pixels above the player */
			pan_current_y = 0x71,
			/** Number of 1/16 pixels to the left of player when current scroll finishes */
			pan_finish_x = 0x72,
			/** Number of 1/16 pixels above the player when current scroll finishes. */
			pan_finish_y = 0x73,
			/** speed in the scrolls of the screen - shown in sixteenth pixels. */
			pan_speed = 0x79,
			/** int: sum of terrain.encounter_rate for each step */
			encounter_steps = 0x7C,
			/** Similar to 0x6C - is used to signal a different piece of code that an encounter is to be triggered; which may be cancelled by other conditions such as the player starting to interact with an event during the same frame. */
			encounter_calling = 0x7D,
			/** Mirrors save_count of current map. On mismatch events are not continued after load. */
			map_save_count = 0x83,
			/** ? */
			database_save_count = 0x84
		};
	};
	struct ChunkSaveVehicleLocation {
		enum Index {
			/** Flag */
			active = 0x01,
			/** ? */
			map_id = 0x0B,
			/** ? */
			position_x = 0x0C,
			/** ? */
			position_y = 0x0D,
			/** Facing direction */
			direction = 0x15,
			/** Sprite direction */
			sprite_direction = 0x16,
			/** ? */
			anim_frame = 0x17,
			/** 0 or 3 - Transparency level of the current event page */
			transparency = 0x18,
			/** From 0 to 255 - Remaining distance of the current move */
			remaining_step = 0x1F,
			/** ? */
			move_frequency = 0x20,
			/** ? */
			layer = 0x21,
			/** Flag */
			overlap_forbidden = 0x22,
			/**  */
			animation_type = 0x23,
			/** facing locked */
			lock_facing = 0x24,
			/**  */
			move_speed = 0x25,
			/** chunks: RPG::MoveRoute */
			move_route = 0x29,
			/** Use custom move route */
			move_route_overwrite = 0x2A,
			/** Index of MoveEvent command route */
			move_route_index = 0x2B,
			/** Boolean - Repeating move route has been completed at least once */
			move_route_repeated = 0x2C,
			/** bool */
			sprite_transparent = 0x2E,
			/** Whether the move route (MoveEvent or defined route) activated through mode. Almost the same as 0x33 (through). 0x2F represents that by MoveEvent the through mode has been activated; but 0x33 is what's actually checked for collisions. In several cases; 0x33 will be changed to indicate a condition in which an event or the hero is in through mode through other means than a MoveEvent; which can be: an event with an empty page being activated; player pressing Ctrl in test play; hero entering or exiting a vehicle (only very briefly) */
			route_through = 0x2F,
			/** ? */
			anim_paused = 0x30,
			/** Can go through anything */
			through = 0x33,
			/** ? */
			stop_count = 0x34,
			/** ? */
			anim_count = 0x35,
			/** 2^move_frequency unless it's a random move route - Once stop_count reaches it; the next move command is executed */
			max_stop_count = 0x36,
			/** ? */
			jumping = 0x3D,
			/** ? */
			begin_jump_x = 0x3E,
			/** ? */
			begin_jump_y = 0x3F,
			/** Indicates paused movement for an event; set while the player is talking to the event so that it won't run away */
			pause = 0x47,
			/** Flag */
			flying = 0x48,
			/** ? */
			sprite_name = 0x49,
			/** ? */
			sprite_id = 0x4A,
			/** Flag whether an event (the hero is also an event) in the current frame processed their movement actions (may also be none). This is required because events are asked every frame to initiate their next movement step if required; but not necessarily in order; because checking passability for an event trying to move onto another tile will trigger any event's movement initiation which is on the target tile (because this way the target event may move away; allowing the other event to move to that tile). This flag ensures that every event processes their possible movements only once per frame even if it was already asked to do so out of order as part of another event's movement initiation. */
			processed = 0x4B,
			/** int */
			flash_red = 0x51,
			/** int */
			flash_green = 0x52,
			/** int */
			flash_blue = 0x53,
			/** double */
			flash_current_level = 0x54,
			/** int */
			flash_time_left = 0x55,
			/** Which vehicle */
			vehicle = 0x65,
			/** From 0 to 255 - In flying vehicles; remaining distance to ascend */
			remaining_ascent = 0x6A,
			/** From 0 to 255 - In flying vehicles; remaining distance to descend */
			remaining_descent = 0x6B,
			/** Set by ChangeVehicleGraphic command */
			orig_sprite_name = 0x6F,
			/** Set by ChangeVehicleGraphic command */
			orig_sprite_id = 0x70
		};
	};
	struct ChunkSaveActor {
		enum Index {
			/** string */
			name = 0x01,
			/** string */
			title = 0x02,
			/** string */
			sprite_name = 0x0B,
			/** int */
			sprite_id = 0x0C,
			/** transparency value. 0 means opaque; 3 is the value used when actor is transparent. */
			transparency = 0x0D,
			/** string */
			face_name = 0x15,
			/** int */
			face_id = 0x16,
			/** int */
			level = 0x1F,
			/** int */
			exp = 0x20,
			/** ? */
			hp_mod = 0x21,
			/** ? */
			sp_mod = 0x22,
			/** int */
			attack_mod = 0x29,
			/** int */
			defense_mod = 0x2A,
			/** int */
			spirit_mod = 0x2B,
			/** int */
			agility_mod = 0x2C,
			/** ? */
			skills_size = 0x33,
			/** short[] */
			skills = 0x34,
			/** short[5] */
			equipped = 0x3D,
			/** int */
			current_hp = 0x47,
			/** int */
			current_sp = 0x48,
			/** array of (uncompressed) int32 */
			battle_commands = 0x50,
			/** ? */
			status_size = 0x51,
			/** array of short */
			status = 0x52,
			/** bool */
			changed_battle_commands = 0x53,
			/** int class-id */
			class_id = 0x5A,
			/** RPG2003 Battle row */
			row = 0x5B,
			/** bool */
			two_weapon = 0x5C,
			/** bool */
			lock_equipment = 0x5D,
			/** bool */
			auto_battle = 0x5E,
			/** bool */
			super_guard = 0x5F,
			/** Integer - RPG2003 */
			battler_animation = 0x60
		};
	};
	struct ChunkSaveInventory {
		enum Index {
			/** ? */
			party_size = 0x01,
			/** ? */
			party = 0x02,
			/** ? */
			item_ids_size = 0x0B,
			/** short[]: item list */
			item_ids = 0x0C,
			/** ? */
			item_counts = 0x0D,
			/** ? */
			item_usage = 0x0E,
			/** int */
			gold = 0x15,
			/** Number of frames remaining for timer1; When set; the value is seconds * 60 + 59. */
			timer1_frames = 0x17,
			/** If timer1 is active */
			timer1_active = 0x18,
			/** If timer1 is visible */
			timer1_visible = 0x19,
			/** If timer1 will be active in battles */
			timer1_battle = 0x1A,
			/** Number of frames remaining for timer2; When set; the value is seconds * 60 + 59. */
			timer2_frames = 0x1B,
			/** If timer2 is active */
			timer2_active = 0x1C,
			/** If timer2 is visible */
			timer2_visible = 0x1D,
			/** If timer2 will be active in battles */
			timer2_battle = 0x1E,
			/** ? */
			battles = 0x20,
			/** ? */
			defeats = 0x21,
			/** ? */
			escapes = 0x22,
			/** ? */
			victories = 0x23,
			/** Number of turns passed in the latest battle fought. RPG2000: 'turn' passes after every character (enemies and heroes both) performed an action each. RPG2003: every time a hero or enemy performs an action that is considered a 'turn'. */
			turns = 0x29,
			/** Number of steps taken in the field. */
			steps = 0x2A
		};
	};
	struct ChunkSaveTarget {
		enum Index {
			/** int */
			map_id = 0x01,
			/** int */
			map_x = 0x02,
			/** int */
			map_y = 0x03,
			/** bool */
			switch_on = 0x04,
			/** int */
			switch_id = 0x05
		};
	};
	struct ChunkSaveEventExecFrame {
		enum Index {
			/** int */
			commands_size = 0x01,
			/** event command list */
			commands = 0x02,
			/** int */
			current_command = 0x0B,
			/** 0 if it's common event or in other map */
			event_id = 0x0C,
			/** Event was triggered by the Action Key */
			triggered_by_decision_key = 0x0D,
			/** size of the 0x16 vector - indention level */
			subcommand_path_size = 0x15,
			/** byte For each indention level in the script; an ID is stored there which corresponds to the branch to take in case a command allows multiple branches. For example; the Show Choice command would write the result of the choice (for example 2 for the third item) into the current indention level's entry in this array; and the script processor would later look for the Case subcommand with the corresponding ID; if any; and jump to that one (if none found; it would jump to the End Case subcommand). Once the jump is executed; the ID is set to 255 (probably a protection mechanism even though there should normally not be multiple subcommands with the same ID). */
			subcommand_path = 0x16
		};
	};
	struct ChunkSaveEventExecState {
		enum Index {
			/** array */
			stack = 0x01,
			/** Show Message command has been executed in the current move route */
			show_message = 0x04,
			/** Flag which is set before a fight if the EnemyEncounter event command had battle_escape_mode set to 1 (abort event on escape). After the fight; the interpreter checks if the battle result was an escape and this flag was set and abort the event in that case. */
			abort_on_escape = 0x0B,
			/** Whether Wait for all movement is in effect */
			wait_movement = 0x0D,
			/**  */
			keyinput_wait = 0x15,
			/**  */
			keyinput_variable = 0x16,
			/**  */
			keyinput_all_directions = 0x17,
			/**  */
			keyinput_decision = 0x18,
			/**  */
			keyinput_cancel = 0x19,
			/** In RM2k Value this is keyinput_shift */
			keyinput_2kshift_2k3numbers = 0x1A,
			/** In Value keyinput_down */
			keyinput_2kdown_2k3operators = 0x1B,
			/** In Value keyinput_left */
			keyinput_2kleft_2k3shift = 0x1C,
			/** Only in Value */
			keyinput_2kright = 0x1D,
			/** Only in Value */
			keyinput_2kup = 0x1E,
			/** int */
			wait_time = 0x1F,
			/**  */
			keyinput_time_variable = 0x20,
			/**  */
			keyinput_2k3down = 0x23,
			/**  */
			keyinput_2k3left = 0x24,
			/**  */
			keyinput_2k3right = 0x25,
			/**  */
			keyinput_2k3up = 0x26,
			/**  */
			keyinput_timed = 0x29,
			/** Used for a wait command WaitForKeyInput rm2k3 feature to wait for decision key press. */
			wait_key_enter = 0x2A
		};
	};
	struct ChunkSaveMapEventBase {
		enum Index {
			/** Flag */
			active = 0x01,
			/** ? */
			map_id = 0x0B,
			/** ? */
			position_x = 0x0C,
			/** ? */
			position_y = 0x0D,
			/** Facing direction */
			direction = 0x15,
			/** Sprite direction */
			sprite_direction = 0x16,
			/** ? */
			anim_frame = 0x17,
			/** 0 or 3 - Transparency level of the current event page */
			transparency = 0x18,
			/** From 0 to 255 - Remaining distance of the current move */
			remaining_step = 0x1F,
			/** ? */
			move_frequency = 0x20,
			/** ? */
			layer = 0x21,
			/** Flag */
			overlap_forbidden = 0x22,
			/**  */
			animation_type = 0x23,
			/** facing locked */
			lock_facing = 0x24,
			/**  */
			move_speed = 0x25,
			/** chunks: RPG::MoveRoute */
			move_route = 0x29,
			/** Use custom move route */
			move_route_overwrite = 0x2A,
			/** Index of MoveEvent command route */
			move_route_index = 0x2B,
			/** Boolean - Repeating move route has been completed at least once */
			move_route_repeated = 0x2C,
			/** bool */
			sprite_transparent = 0x2E,
			/** Whether the move route (MoveEvent or defined route) activated through mode. Almost the same as 0x33 (through). 0x2F represents that by MoveEvent the through mode has been activated; but 0x33 is what's actually checked for collisions. In several cases; 0x33 will be changed to indicate a condition in which an event or the hero is in through mode through other means than a MoveEvent; which can be: an event with an empty page being activated; player pressing Ctrl in test play; hero entering or exiting a vehicle (only very briefly) */
			route_through = 0x2F,
			/** ? */
			anim_paused = 0x30,
			/** Can go through anything */
			through = 0x33,
			/** ? */
			stop_count = 0x34,
			/** ? */
			anim_count = 0x35,
			/** 2^move_frequency unless it's a random move route - Once stop_count reaches it; the next move command is executed */
			max_stop_count = 0x36,
			/** ? */
			jumping = 0x3D,
			/** ? */
			begin_jump_x = 0x3E,
			/** ? */
			begin_jump_y = 0x3F,
			/** Indicates paused movement for an event; set while the player is talking to the event so that it won't run away */
			pause = 0x47,
			/** Flag */
			flying = 0x48,
			/** ? */
			sprite_name = 0x49,
			/** ? */
			sprite_id = 0x4A,
			/** Flag whether an event (the hero is also an event) in the current frame processed their movement actions (may also be none). This is required because events are asked every frame to initiate their next movement step if required; but not necessarily in order; because checking passability for an event trying to move onto another tile will trigger any event's movement initiation which is on the target tile (because this way the target event may move away; allowing the other event to move to that tile). This flag ensures that every event processes their possible movements only once per frame even if it was already asked to do so out of order as part of another event's movement initiation. */
			processed = 0x4B,
			/** int */
			flash_red = 0x51,
			/** int */
			flash_green = 0x52,
			/** int */
			flash_blue = 0x53,
			/** double */
			flash_current_level = 0x54,
			/** int */
			flash_time_left = 0x55
		};
	};
	struct ChunkSaveMapEvent {
		enum Index {
			/** Flag */
			active = 0x01,
			/** ? */
			map_id = 0x0B,
			/** ? */
			position_x = 0x0C,
			/** ? */
			position_y = 0x0D,
			/** Facing direction */
			direction = 0x15,
			/** Sprite direction */
			sprite_direction = 0x16,
			/** ? */
			anim_frame = 0x17,
			/** 0 or 3 - Transparency level of the current event page */
			transparency = 0x18,
			/** From 0 to 255 - Remaining distance of the current move */
			remaining_step = 0x1F,
			/** ? */
			move_frequency = 0x20,
			/** ? */
			layer = 0x21,
			/** Flag */
			overlap_forbidden = 0x22,
			/**  */
			animation_type = 0x23,
			/** facing locked */
			lock_facing = 0x24,
			/**  */
			move_speed = 0x25,
			/** chunks: RPG::MoveRoute */
			move_route = 0x29,
			/** Use custom move route */
			move_route_overwrite = 0x2A,
			/** Index of MoveEvent command route */
			move_route_index = 0x2B,
			/** Boolean - Repeating move route has been completed at least once */
			move_route_repeated = 0x2C,
			/** bool */
			sprite_transparent = 0x2E,
			/** Whether the move route (MoveEvent or defined route) activated through mode. Almost the same as 0x33 (through). 0x2F represents that by MoveEvent the through mode has been activated; but 0x33 is what's actually checked for collisions. In several cases; 0x33 will be changed to indicate a condition in which an event or the hero is in through mode through other means than a MoveEvent; which can be: an event with an empty page being activated; player pressing Ctrl in test play; hero entering or exiting a vehicle (only very briefly) */
			route_through = 0x2F,
			/** ? */
			anim_paused = 0x30,
			/** Can go through anything */
			through = 0x33,
			/** ? */
			stop_count = 0x34,
			/** ? */
			anim_count = 0x35,
			/** 2^move_frequency unless it's a random move route - Once stop_count reaches it; the next move command is executed */
			max_stop_count = 0x36,
			/** ? */
			jumping = 0x3D,
			/** ? */
			begin_jump_x = 0x3E,
			/** ? */
			begin_jump_y = 0x3F,
			/** Indicates paused movement for an event; set while the player is talking to the event so that it won't run away */
			pause = 0x47,
			/** Flag */
			flying = 0x48,
			/** ? */
			sprite_name = 0x49,
			/** ? */
			sprite_id = 0x4A,
			/** Flag whether an event (the hero is also an event) in the current frame processed their movement actions (may also be none). This is required because events are asked every frame to initiate their next movement step if required; but not necessarily in order; because checking passability for an event trying to move onto another tile will trigger any event's movement initiation which is on the target tile (because this way the target event may move away; allowing the other event to move to that tile). This flag ensures that every event processes their possible movements only once per frame even if it was already asked to do so out of order as part of another event's movement initiation. */
			processed = 0x4B,
			/** int */
			flash_red = 0x51,
			/** int */
			flash_green = 0x52,
			/** int */
			flash_blue = 0x53,
			/** double */
			flash_current_level = 0x54,
			/** int */
			flash_time_left = 0x55,
			/** If true; this event is waiting for foreground execution. */
			waiting_execution = 0x65,
			/** Index of custom move route */
			original_move_route_index = 0x66,
			/** If true; this event was started by the decision key. */
			triggered_by_decision_key = 0x67,
			/** chunks */
			parallel_event_execstate = 0x6C
		};
	};
	struct ChunkSaveMapInfo {
		enum Index {
			/** int */
			position_x = 0x01,
			/** int */
			position_y = 0x02,
			/** int */
			encounter_rate = 0x03,
			/** int */
			chipset_id = 0x05,
			/** ? array */
			events = 0x0B,
			/** ? [00 01 02 ... 8E 8F] */
			lower_tiles = 0x15,
			/**  */
			upper_tiles = 0x16,
			/** string */
			parallax_name = 0x20,
			/** bool */
			parallax_horz = 0x21,
			/** bool */
			parallax_vert = 0x22,
			/** bool */
			parallax_horz_auto = 0x23,
			/** int */
			parallax_horz_speed = 0x24,
			/** bool */
			parallax_vert_auto = 0x25,
			/** int */
			parallax_vert_speed = 0x26
		};
	};
	struct ChunkSaveCommonEvent {
		enum Index {
			/** chunks */
			parallel_event_execstate = 0x01
		};
	};
	struct ChunkSavePanorama {
		enum Index {
			/** Panorama X position */
			pan_x = 0x01,
			/** Panorama Y position */
			pan_y = 0x02
		};
	};
	struct ChunkSave {
		enum Index {
			/** RPG::SaveTitle */
			title = 0x64,
			/** RPG::SaveSystem */
			system = 0x65,
			/** RPG::SaveScreen */
			screen = 0x66,
			/** array of RPG::SavePicture */
			pictures = 0x67,
			/** RPG::SavePartyLocation */
			party_location = 0x68,
			/** RPG::SaveVehicleLocation */
			boat_location = 0x69,
			/** RPG::SaveVehicleLocation */
			ship_location = 0x6A,
			/** RPG::SaveVehicleLocation */
			airship_location = 0x6B,
			/** array of RPG::SaveActor */
			actors = 0x6C,
			/** RPG::SaveInventory */
			inventory = 0x6D,
			/** array of RPG::SaveTarget */
			targets = 0x6E,
			/** RPG::SaveMapInfo */
			map_info = 0x6F,
			/** Used to store panorama position data. Used by RPG_RT 2k3 1.12 in other versions an empty object. */
			panorama = 0x70,
			/** RPG::SaveEventExecState */
			foreground_event_execstate = 0x71,
			/** array of RPG::SaveCommonEvent */
			common_events = 0x72,
			/** Additional save data written by EasyRPG Player */
			easyrpg_data = 0xC8
		};
	};
	struct ChunkSaveEasyRpgData {
		enum Index {
			/** Savegame version */
			version = 0x01
		};
	};
}

#endif
