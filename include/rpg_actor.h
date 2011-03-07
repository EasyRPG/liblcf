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

#ifndef _RPG_ACTOR_H_
#define _RPG_ACTOR_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader_types.h"
#include "rpg_learning.h"
#include "rpg_parameters.h"
#include "rpg_equipment.h"

////////////////////////////////////////////////////////////
/// RPG::Actor class
////////////////////////////////////////////////////////////
namespace RPG {
	class Actor {
	public:
		Actor();
		
		int ID;
		std::string name;
		std::string title;
		std::string character_name;
		int character_index;
		bool transparent;
		int initial_level;
		int final_level;
		bool critical_hit;
		int critical_hit_chance;
		std::string face_name;
		int face_index;
		bool two_swords_style;
		bool fix_equipment;
		bool auto_battle;
		bool super_guard;
		Parameters parameters;
		int exp_base;
		int exp_inflation;
		int exp_correction;
		Equipment initial_equipment;
		int unarmed_animation;
		std::vector<Learning> skills;
		std::vector<uint8_t> state_ranks;
		std::vector<uint8_t> attribute_ranks;
		// RPG Maker 2000
		bool rename_skill;
		std::string skill_name;
		
		// RPG Maker 2003
		int class_id;
		int battler_animation;
		std::vector<uint32_t> battle_commands;
		int battle_x;
		int battle_y;
	};
}

#endif
