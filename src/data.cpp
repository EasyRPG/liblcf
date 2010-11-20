/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
//
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "data.h"

////////////////////////////////////////////////////////////
namespace Data {
	// Database Data (ldb)
	std::vector<RPG::Actor> actors;
	std::vector<RPG::Skill> skills;
	std::vector<RPG::Item> items;
	std::vector<RPG::Enemy> enemies;
	std::vector<RPG::Troop> troops;
	std::vector<RPG::Terrain> terrains;
	std::vector<RPG::Attribute> attributes;
	std::vector<RPG::State> states;
	std::vector<RPG::Animation> animations;
	std::vector<RPG::Chipset> chipsets;
	std::vector<RPG::CommonEvent> commonevents;
	std::vector<RPG::BattleCommand> battlecommands;
	std::vector<RPG::Class> classes;
	std::vector<RPG::BattlerAnimation> battleranimations;
	RPG::Terms terms;
	RPG::System system;
	std::vector<std::string> switches;
	std::vector<std::string> variables;

	// TreeMap (lmt)
	RPG::TreeMap treemap;
}
