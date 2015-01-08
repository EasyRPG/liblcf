/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_skill.h"

/**
 * Constructor.
 */
RPG::Skill::Skill() {
	ID = 0;
	name = "";
	description = "";
	using_message1 = "";
	using_message2 = "";
	failure_message = 0;
	type = 0;
	sp_type = 0;
	sp_percent = 1;
	sp_cost = 0;
	scope = 0;
	switch_id = 1;
	animation_id = 0;
	occasion_field = true;
	occasion_battle = false;
	state_effect = false;
	pdef_f = 0;
	mdef_f = 3;
	variance = 4;
	power = 0;
	hit = 100;
	affect_hp = false;
	affect_sp = false;
	affect_attack = false;
	affect_defense = false;
	affect_spirit = false;
	affect_agility = false;
	absorb_damage = false;
	ignore_defense = false;
	affect_attr_defence = false;
	battler_animation = 1;
}
