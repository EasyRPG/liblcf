/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SKILL_H
#define LCF_RPG_SKILL_H

// Headers
#include <string>
#include <vector>
#include "rpg_battleranimationdata.h"
#include "rpg_sound.h"

/**
 * RPG::Skill class.
 */
namespace RPG {
	class Skill {
	public:
		enum Type {
			Type_normal = 0,
			Type_teleport = 1,
			Type_escape = 2,
			Type_switch = 3,
			Type_subskill = 4
		};
		enum SpType {
			SpType_cost = 0,
			SpType_percent = 1
		};
		enum Scope {
			Scope_enemy = 0,
			Scope_enemies = 1,
			Scope_self = 2,
			Scope_ally = 3,
			Scope_party = 4
		};

		int ID = 0;
		std::string name;
		std::string description;
		std::string using_message1;
		std::string using_message2;
		int failure_message = 0;
		int type = 0;
		int sp_type = 0;
		int sp_percent = 1;
		int sp_cost = 0;
		int scope = 0;
		int switch_id = 1;
		int animation_id = 0;
		Sound sound_effect;
		bool occasion_field = true;
		bool occasion_battle = false;
		bool state_effect = false;
		int physical_rate = 0;
		int magical_rate = 3;
		int variance = 4;
		int power = 0;
		int hit = 100;
		bool affect_hp = false;
		bool affect_sp = false;
		bool affect_attack = false;
		bool affect_defense = false;
		bool affect_spirit = false;
		bool affect_agility = false;
		bool absorb_damage = false;
		bool ignore_defense = false;
		std::vector<bool> state_effects;
		std::vector<bool> attribute_effects;
		bool affect_attr_defence = false;
		int battler_animation = 1;
		std::vector<BattlerAnimationData> battler_animation_data;
	};
}

#endif
