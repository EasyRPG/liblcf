/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include "rpg_database.h"
#include "data.h"

namespace Data {
	RPG::Database data;

	std::vector<RPG::Actor>& actors = data.actors;
	std::vector<RPG::Skill>& skills = data.skills;
	std::vector<RPG::Item>& items = data.items;
	std::vector<RPG::Enemy>& enemies = data.enemies;
	std::vector<RPG::Troop>& troops = data.troops;
	std::vector<RPG::Terrain>& terrains = data.terrains;
	std::vector<RPG::Attribute>& attributes = data.attributes;
	std::vector<RPG::State>& states = data.states;
	std::vector<RPG::Animation>& animations = data.animations;
	std::vector<RPG::Chipset>& chipsets = data.chipsets;
	std::vector<RPG::CommonEvent>& commonevents = data.commonevents;
	RPG::BattleCommands& battlecommands = data.battlecommands;
	std::vector<RPG::Class>& classes = data.classes;
	std::vector<RPG::BattlerAnimation>& battleranimations = data.battleranimations;
	RPG::Terms& terms = data.terms;
	RPG::System& system = data.system;
	std::vector<RPG::Switch>& switches = data.switches;
	std::vector<RPG::Variable>& variables = data.variables;

	RPG::TreeMap treemap;
}

void Data::Clear() {
	actors.clear();
	skills.clear();
	items.clear();
	enemies.clear();
	troops.clear();
	terrains.clear();
	attributes.clear();
	states.clear();
	animations.clear();
	chipsets.clear();
	commonevents.clear();
	battlecommands = RPG::BattleCommands();
	classes.clear();
	battleranimations.clear();
	terms = RPG::Terms();
	system = RPG::System();
	switches.clear();
	variables.clear();
	treemap.active_node = 0;
	treemap.maps.clear();
	treemap.tree_order.clear();
}
