/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_saveactor.h"

/**
 * Constructor.
 */
RPG::SaveActor::SaveActor() {
	ID = 0;
	name = "";
	title = "";
	sprite_name = "";
	sprite_id = 0;
	sprite_flags = 0;
	face_name = "";
	face_id = 0;
	level = -1;
	exp = -1;
	hp_mod = -1;
	sp_mod = -1;
	attack_mod = 0;
	defense_mod = 0;
	spirit_mod = 0;
	agility_mod = 0;
	skills_size = -1;
	current_hp = -1;
	current_sp = -1;
	status_size = 0;
	changed_class = false;
	class_id = -1;
	row = 0;
	two_weapon = false;
	lock_equipment = false;
	auto_battle = false;
	mighty_guard = false;
	unknown_60 = 0;
}
