/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_state.h"

/**
 * Constructor.
 */
RPG::State::State() {
	ID = 0;
	name = "";
	type = 0;
	color = 6;
	priority = 50;
	restriction = 0;
	a_rate = 100;
	b_rate = 80;
	c_rate = 60;
	d_rate = 30;
	e_rate = 0;
	hold_turn = 0;
	auto_release_prob = 0;
	release_by_damage = 0;
	affect_type = 0;
	affect_attack = false;
	affect_defense = false;
	affect_spirit = false;
	affect_agility = false;
	reduce_hit_ratio = 100;
	avoid_attacks = false;
	reflect_magic = false;
	cursed = false;
	battler_animation_id = 100;
	restrict_skill = false;
	restrict_skill_level = 0;
	restrict_magic = false;
	restrict_magic_level = 0;
	hp_change_type = 0;
	sp_change_type = 0;
	message_actor = "";
	message_enemy = "";
	message_already = "";
	message_affected = "";
	message_recovery = "";
	hp_change_max = 0;
	hp_change_val = 0;
	hp_change_map_val = 0;
	hp_change_map_steps = 0;
	sp_change_max = 0;
	sp_change_val = 0;
	sp_change_map_val = 0;
	sp_change_map_steps = 0;
}
