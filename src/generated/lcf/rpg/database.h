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
#include "lcf/rpg/actor.h"
#include "lcf/rpg/animation.h"
#include "lcf/rpg/attribute.h"
#include "lcf/rpg/battlecommands.h"
#include "lcf/rpg/battleranimation.h"
#include "lcf/rpg/chipset.h"
#include "lcf/rpg/class.h"
#include "lcf/rpg/commonevent.h"
#include "lcf/rpg/enemy.h"
#include "lcf/rpg/item.h"
#include "lcf/rpg/skill.h"
#include "lcf/rpg/state.h"
#include "lcf/rpg/switch.h"
#include "lcf/rpg/system.h"
#include "lcf/rpg/terms.h"
#include "lcf/rpg/terrain.h"
#include "lcf/rpg/troop.h"
#include "lcf/rpg/variable.h"
#include <ostream>

/**
 * rpg::Database class.
 */
namespace lcf {
namespace rpg {
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

	inline std::ostream& operator<<(std::ostream& os, const Database& obj) {
		os << "Database{";
		os << "actors=";
		for (size_t i = 0; i < obj.actors.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.actors[i];
		}
		os << "]";
		os << " skills=";
		for (size_t i = 0; i < obj.skills.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.skills[i];
		}
		os << "]";
		os << " items=";
		for (size_t i = 0; i < obj.items.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.items[i];
		}
		os << "]";
		os << " enemies=";
		for (size_t i = 0; i < obj.enemies.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.enemies[i];
		}
		os << "]";
		os << " troops=";
		for (size_t i = 0; i < obj.troops.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.troops[i];
		}
		os << "]";
		os << " terrains=";
		for (size_t i = 0; i < obj.terrains.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.terrains[i];
		}
		os << "]";
		os << " attributes=";
		for (size_t i = 0; i < obj.attributes.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.attributes[i];
		}
		os << "]";
		os << " states=";
		for (size_t i = 0; i < obj.states.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.states[i];
		}
		os << "]";
		os << " animations=";
		for (size_t i = 0; i < obj.animations.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.animations[i];
		}
		os << "]";
		os << " chipsets=";
		for (size_t i = 0; i < obj.chipsets.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.chipsets[i];
		}
		os << "]";
		os << " terms="<< obj.terms;
		os << " system="<< obj.system;
		os << " switches=";
		for (size_t i = 0; i < obj.switches.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.switches[i];
		}
		os << "]";
		os << " variables=";
		for (size_t i = 0; i < obj.variables.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.variables[i];
		}
		os << "]";
		os << " commonevents=";
		for (size_t i = 0; i < obj.commonevents.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.commonevents[i];
		}
		os << "]";
		os << " version="<< obj.version;
		os << " battlecommands="<< obj.battlecommands;
		os << " classes=";
		for (size_t i = 0; i < obj.classes.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.classes[i];
		}
		os << "]";
		os << " battleranimations=";
		for (size_t i = 0; i < obj.battleranimations.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.battleranimations[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
