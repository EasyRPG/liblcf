/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
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
#include "rpg_actor.h"
#include "reader_options.h"

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
RPG::Actor::Actor() {
	ID = 0;
	name = "";
	title = "";
	character_name = "";
	character_index = 0;
	transparent = false;
	initial_level = 1;
	#if RPGMAKER == RPG2K
	final_level = 50;
	#else
	final_level = 99;
	#endif
	critical_hit = true;
	critical_hit_chance = 30;
	face_index = 0;
	two_swords_style = false;
	fix_equipment = false;
	auto_battle = false;
	super_guard = false;
	parameters.maxhp.resize(final_level + 1);
	parameters.maxsp.resize(final_level + 1);
	parameters.attack.resize(final_level + 1);
	parameters.defense.resize(final_level + 1);
	parameters.spirit.resize(final_level + 1);
	parameters.agility.resize(final_level + 1);
	for (int i = 0; i <= final_level; i++) {
		parameters.maxhp[i] = 1;
		parameters.maxsp[i] = 0;
		parameters.attack[i] = 1;
		parameters.defense[i] = 1;
		parameters.spirit[i] = 1;
		parameters.agility[i] = 1;
	}
	#if RPGMAKER == RPG2K
	exp_base = 30;
	exp_inflation =30;
	#else
	exp_base = 300;
	exp_inflation = 300;
	#endif
	exp_correction = 0;
	unarmed_animation = 1;
	initial_equipment.weapon_id = 0;
	initial_equipment.shield_id = 0;
	initial_equipment.armor_id = 0;
	initial_equipment.helmet_id = 0;
	initial_equipment.accessory_id = 0;
	
	// RPG Maker 2000
	rename_skill = false;
	skill_name = "";
	
	// RPG Maker 2003
	class_id = 0;
	battler_animation = 1;
	battle_x = 0;
	battle_y = 0;
}
