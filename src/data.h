/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_DATA_H
#define LCF_DATA_H

#include <string>
#include <vector>
#include "rpg_actor.h"
#include "rpg_skill.h"
#include "rpg_item.h"
#include "rpg_enemy.h"
#include "rpg_troop.h"
#include "rpg_attribute.h"
#include "rpg_state.h"
#include "rpg_terrain.h"
#include "rpg_animation.h"
#include "rpg_chipset.h"
#include "rpg_terms.h"
#include "rpg_system.h"
#include "rpg_commonevent.h"
#include "rpg_class.h"
#include "rpg_battlecommand.h"
#include "rpg_battleranimation.h"
#include "rpg_sound.h"
#include "rpg_music.h"
#include "rpg_eventcommand.h"
#include "rpg_treemap.h"
#include "rpg_database.h"

/**
 * Data namespace
 */
namespace Data {
	/** Database Data (ldb) */
	extern RPG::Database data;
	/** @{ */
	extern std::vector<RPG::Actor>& actors;
	extern std::vector<RPG::Skill>& skills;
	extern std::vector<RPG::Item>& items;
	extern std::vector<RPG::Enemy>& enemies;
	extern std::vector<RPG::Troop>& troops;
	extern std::vector<RPG::Terrain>& terrains;
	extern std::vector<RPG::Attribute>& attributes;
	extern std::vector<RPG::State>& states;
	extern std::vector<RPG::Animation>& animations;
	extern std::vector<RPG::Chipset>& chipsets;
	extern std::vector<RPG::CommonEvent>& commonevents;
	extern RPG::BattleCommands& battlecommands;
	extern std::vector<RPG::Class>& classes;
	extern std::vector<RPG::BattlerAnimation>& battleranimations;
	extern RPG::Terms& terms;
	extern RPG::System& system;
	extern std::vector<RPG::Switch>& switches;
	extern std::vector<RPG::Variable>& variables;
	/** @} */

	/** TreeMap (lmt) */
	extern RPG::TreeMap treemap;

	/**
	 * Clears database data.
	 */
	void Clear();
}

#endif
