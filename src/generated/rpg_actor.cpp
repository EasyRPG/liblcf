/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_actor.h"

/**
 * Constructor.
 */
RPG::Actor::Actor() {
	ID = 0;
	name = "";
	title = "";
	character_name = "";
	character_index = 0;
	transparent = false;
	initial_level = 1;
	final_level = 50;
	critical_hit = true;
	critical_hit_chance = 30;
	face_index = 0;
	two_swords_style = false;
	fix_equipment = false;
	auto_battle = false;
	super_guard = false;
	exp_base = 30;
	exp_inflation = 30;
	exp_correction = 0;
	unarmed_animation = 1;
	class_id = 0;
	battle_x = 0;
	battle_y = 0;
	battler_animation = 1;
	rename_skill = false;
	skill_name = "";

	Init();
}
