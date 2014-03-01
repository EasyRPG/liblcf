/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "rpg_enemyaction.h"

/**
 * Constructor.
 */
RPG::EnemyAction::EnemyAction() {
	ID = 0;
	kind = 0;
	basic = 1;
	skill_id = 1;
	enemy_id = 1;
	condition_type = 0;
	condition_param1 = 0;
	condition_param2 = 0;
	switch_id = 1;
	switch_on = false;
	switch_on_id = 1;
	switch_off = false;
	switch_off_id = 1;
	rating = 50;
}
