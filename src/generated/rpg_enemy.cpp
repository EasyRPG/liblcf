/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_enemy.h"

/**
 * Constructor.
 */
RPG::Enemy::Enemy() {
	ID = 0;
	name = "";
	battler_name = "";
	battler_hue = 0;
	max_hp = 10;
	max_sp = 10;
	attack = 10;
	defense = 10;
	spirit = 10;
	agility = 10;
	transparent = false;
	exp = 0;
	gold = 0;
	drop_id = 0;
	drop_prob = 100;
	critical_hit = false;
	critical_hit_chance = 30;
	miss = false;
	levitate = false;
}
