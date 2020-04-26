/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_DATABASE_H
#define LCF_RPG_DATABASE_H

// Headers
#include <stdint.h>
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
		std::string ldb_header;
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
		int32_t version = 0;
		BattleCommands battlecommands;
		std::vector<Class> classes;
		std::vector<BattlerAnimation> battleranimations;
	};

	inline bool operator==(const Database& l, const Database& r) {
		return l.actors == r.actors
		&& l.skills == r.skills
		&& l.items == r.items
		&& l.enemies == r.enemies
		&& l.troops == r.troops
		&& l.terrains == r.terrains
		&& l.attributes == r.attributes
		&& l.states == r.states
		&& l.animations == r.animations
		&& l.chipsets == r.chipsets
		&& l.terms == r.terms
		&& l.system == r.system
		&& l.switches == r.switches
		&& l.variables == r.variables
		&& l.commonevents == r.commonevents
		&& l.version == r.version
		&& l.battlecommands == r.battlecommands
		&& l.classes == r.classes
		&& l.battleranimations == r.battleranimations;
	}

	inline bool operator!=(const Database& l, const Database& r) {
		return !(l == r);
	}
}

#endif
