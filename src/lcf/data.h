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
	extern rpg::Database data;
	/** @{ */
	extern std::vector<rpg::Actor>& actors;
	extern std::vector<rpg::Skill>& skills;
	extern std::vector<rpg::Item>& items;
	extern std::vector<rpg::Enemy>& enemies;
	extern std::vector<rpg::Troop>& troops;
	extern std::vector<rpg::Terrain>& terrains;
	extern std::vector<rpg::Attribute>& attributes;
	extern std::vector<rpg::State>& states;
	extern std::vector<rpg::Animation>& animations;
	extern std::vector<rpg::Chipset>& chipsets;
	extern std::vector<rpg::CommonEvent>& commonevents;
	extern rpg::BattleCommands& battlecommands;
	extern std::vector<rpg::Class>& classes;
	extern std::vector<rpg::BattlerAnimation>& battleranimations;
	extern rpg::Terms& terms;
	extern rpg::System& system;
	extern std::vector<rpg::Switch>& switches;
	extern std::vector<rpg::Variable>& variables;
	/** @} */

	/** TreeMap (lmt) */
	extern rpg::TreeMap treemap;

	/**
	 * Clears database data.
	 */
	void Clear();
}

} //namespace lcf

#endif
