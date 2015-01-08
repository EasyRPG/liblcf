/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_savesystem.h"

/**
 * Constructor.
 */
RPG::SaveSystem::SaveSystem() {
	screen = 1;
	frame_count = 0;
	graphics_name = "";
	unknown_16 = 0;
	unknown_17 = 0;
	switches_size = 0;
	variables_size = 0;
	message_transparent = 0;
	message_position = 2;
	message_prevent_overlap = 1;
	message_continue_events = 0;
	face_name = "";
	face_id = 0;
	face_right = false;
	face_flip = false;
	transparent = false;
	unknown_3d = 0;
	transition_out = 1;
	transition_in = 1;
	battle_start_fadeout = 1;
	battle_start_fadein = 1;
	battle_end_fadeout = 1;
	battle_end_fadein = 1;
	teleport_allowed = true;
	escape_allowed = true;
	save_allowed = true;
	menu_allowed = true;
	save_count = 0;
	save_slot = 1;
	unknown_8c = 0;
}
