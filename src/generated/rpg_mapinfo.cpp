/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_mapinfo.h"

/**
 * Constructor.
 */
RPG::MapInfo::MapInfo() {
	ID = 0;
	name = "";
	parent_map = 0;
	indentation = 0;
	type = 1;
	scrollbar_x = 0;
	scrollbar_y = 0;
	expanded_node = false;
	music_type = 0;
	background_type = 0;
	background_name = "";
	teleport = 0;
	escape = 0;
	save = 0;
	encounter_steps = 25;

	Init();
}
