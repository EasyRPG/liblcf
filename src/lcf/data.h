/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_DATA_H
#define LCF_DATA_H

#include <string>
#include <vector>
#include "lcf/rpg_actor.h"
#include "lcf/rpg_skill.h"
#include "lcf/rpg_item.h"
#include "lcf/rpg_enemy.h"
#include "lcf/rpg_troop.h"
#include "lcf/rpg_attribute.h"
#include "lcf/rpg_state.h"
#include "lcf/rpg_terrain.h"
#include "lcf/rpg_animation.h"
#include "lcf/rpg_chipset.h"
#include "lcf/rpg_terms.h"
#include "lcf/rpg_system.h"
#include "lcf/rpg_commonevent.h"
#include "lcf/rpg_class.h"
#include "lcf/rpg_battlecommand.h"
#include "lcf/rpg_battleranimation.h"
#include "lcf/rpg_sound.h"
#include "lcf/rpg_music.h"
#include "lcf/rpg_eventcommand.h"
#include "lcf/rpg_treemap.h"
#include "lcf/rpg_database.h"

namespace lcf {

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

} //namespace lcf

#endif
