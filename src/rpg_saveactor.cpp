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
#include "rpg_saveactor.h"
#include "rpg_actor.h"
#include "data.h"

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
RPG::SaveActor::SaveActor() {
	ID = -1;
	name = "";
	title = "";
	sprite_name = "";
	sprite_id = -1;
	sprite_flags = -1;
	face_name = "";
	face_id = -1;
	level = -1;
	exp = -1;
	hp_mod = 0;
	sp_mod = 0;
	attack_mod = 0;
	defense_mod = 0;
	spirit_mod = 0;
	agility_mod = 0;
	skills_size = -1;
	current_hp = -1;
	current_sp = -1;
	status_size = -1;
	changed_class = false;
	class_id = -1;
	unknown_5b = -1;
	two_weapon = false;
	lock_equipment = false;
	auto_battle = false;
	mighty_guard = false;
	unknown_60 = -1;
}

void RPG::SaveActor::Setup(int actor_id) {
	const RPG::Actor& actor = Data::actors[actor_id - 1];
	ID = actor.ID;
	name = actor.name;
	title = actor.title;
	sprite_name = actor.character_name;
	sprite_id = actor.character_index;
	sprite_flags = actor.transparent ? 3 : 0;
	face_name = actor.face_name;
	face_id = actor.face_index;
	level = actor.initial_level;
	exp = 0;
	hp_mod = 0;
	sp_mod = 0;
	attack_mod = 0;
	defense_mod = 0;
	spirit_mod = 0;
	agility_mod = 0;
	skills_size = 0;
	skills.clear();
	equipped.clear();
	equipped.push_back(actor.initial_equipment.weapon_id);
	equipped.push_back(actor.initial_equipment.shield_id);
	equipped.push_back(actor.initial_equipment.armor_id);
	equipped.push_back(actor.initial_equipment.helmet_id);
	equipped.push_back(actor.initial_equipment.accessory_id);
	current_hp = 0;
	current_sp = 0;
	battle_commands = actor.battle_commands;
	status_size = 0;
	status.clear();
	changed_class = false;
	class_id = actor.class_id;
	unknown_5b = -1;
	two_weapon = actor.two_swords_style;
	lock_equipment = actor.fix_equipment;
	auto_battle = actor.auto_battle;
	mighty_guard = actor.super_guard;
	unknown_60 = -1;
}
