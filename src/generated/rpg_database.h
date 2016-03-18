/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_DATABASE_H
#define LCF_RPG_DATABASE_H

// Headers
#include <vector>
#include "rpg_actor.h"
#include "rpg_animation.h"
#include "rpg_attribute.h"
#include "rpg_battlecommands.h"
#include "rpg_battleranimation.h"
#include "rpg_chipset.h"
#include "rpg_class.h"
#include "rpg_commonevent.h"
#include "rpg_enemy.h"
#include "rpg_item.h"
#include "rpg_skill.h"
#include "rpg_state.h"
#include "rpg_switch.h"
#include "rpg_system.h"
#include "rpg_terms.h"
#include "rpg_terrain.h"
#include "rpg_troop.h"
#include "rpg_variable.h"

/**
 * RPG::Database class.
 */
namespace RPG {
	class Database {
	public:
		std::vector<Actor> actors;
		std::vector<Skill> skills;
		std::vector<Item> items;
		std::vector<Enemy> enemies;
		std::vector<Troop> troops;
		std::vector<Terrain> terrains;
		std::vector<Attribute> attributes;
		std::vector<State> states;
		std::vector<Animation> animations;
		std::vector<Chipset> chipsets;
		Terms terms;
		System system;
		std::vector<Switch> switches;
		std::vector<Variable> variables;
		std::vector<CommonEvent> commonevents;
		int version = 0;
		BattleCommands battlecommands;
		std::vector<Class> classes;
		std::vector<BattlerAnimation> battleranimations;
	};
}

#endif
