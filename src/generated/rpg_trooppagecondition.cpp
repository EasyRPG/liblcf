/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_trooppagecondition.h"

/**
 * Constructor.
 */
RPG::TroopPageCondition::TroopPageCondition() {
	flags.switch_a = false;
	flags.switch_b = false;
	flags.variable = false;
	flags.turn = false;
	flags.fatigue = false;
	flags.enemy_hp = false;
	flags.actor_hp = false;
	flags.turn_enemy = false;
	flags.turn_actor = false;
	flags.command_actor = false;
	switch_a_id = 1;
	switch_b_id = 1;
	variable_id = 1;
	variable_value = 0;
	turn_a = 0;
	turn_b = 0;
	fatigue_min = 0;
	fatigue_max = 100;
	enemy_id = 1;
	enemy_hp_min = 0;
	enemy_hp_max = 100;
	actor_id = 1;
	actor_hp_min = 0;
	actor_hp_max = 100;
	turn_enemy_id = 0;
	turn_enemy_a = 0;
	turn_enemy_b = 0;
	turn_actor_id = 1;
	turn_actor_a = 0;
	turn_actor_b = 0;
	command_actor_id = 1;
	command_id = 1;
}
