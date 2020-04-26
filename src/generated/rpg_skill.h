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

#ifndef LCF_RPG_SKILL_H
#define LCF_RPG_SKILL_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "enum_tags.h"
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
		static constexpr auto kTypeTags = makeEnumTags<Type>(
			"normal",
			"teleport",
			"escape",
			"switch",
			"subskill"
		);
		enum SpType {
			SpType_cost = 0,
			SpType_percent = 1
		};
		static constexpr auto kSpTypeTags = makeEnumTags<SpType>(
			"cost",
			"percent"
		);
		enum Scope {
			Scope_enemy = 0,
			Scope_enemies = 1,
			Scope_self = 2,
			Scope_ally = 3,
			Scope_party = 4
		};
		static constexpr auto kScopeTags = makeEnumTags<Scope>(
			"enemy",
			"enemies",
			"self",
			"ally",
			"party"
		);

		int ID = 0;
		std::string name;
		std::string description;
		std::string using_message1;
		std::string using_message2;
		int32_t failure_message = 0;
		int32_t type = 0;
		int32_t sp_type = 0;
		int32_t sp_percent = 0;
		int32_t sp_cost = 0;
		int32_t scope = 0;
		int32_t switch_id = 1;
		int32_t animation_id = 1;
		Sound sound_effect;
		bool occasion_field = true;
		bool occasion_battle = false;
		bool reverse_state_effect = false;
		int32_t physical_rate = 0;
		int32_t magical_rate = 3;
		int32_t variance = 4;
		int32_t power = 0;
		int32_t hit = 100;
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
		int32_t battler_animation = -1;
		std::vector<BattlerAnimationData> battler_animation_data;
	};

	inline bool operator==(const Skill& l, const Skill& r) {
		return l.name == r.name
		&& l.description == r.description
		&& l.using_message1 == r.using_message1
		&& l.using_message2 == r.using_message2
		&& l.failure_message == r.failure_message
		&& l.type == r.type
		&& l.sp_type == r.sp_type
		&& l.sp_percent == r.sp_percent
		&& l.sp_cost == r.sp_cost
		&& l.scope == r.scope
		&& l.switch_id == r.switch_id
		&& l.animation_id == r.animation_id
		&& l.sound_effect == r.sound_effect
		&& l.occasion_field == r.occasion_field
		&& l.occasion_battle == r.occasion_battle
		&& l.reverse_state_effect == r.reverse_state_effect
		&& l.physical_rate == r.physical_rate
		&& l.magical_rate == r.magical_rate
		&& l.variance == r.variance
		&& l.power == r.power
		&& l.hit == r.hit
		&& l.affect_hp == r.affect_hp
		&& l.affect_sp == r.affect_sp
		&& l.affect_attack == r.affect_attack
		&& l.affect_defense == r.affect_defense
		&& l.affect_spirit == r.affect_spirit
		&& l.affect_agility == r.affect_agility
		&& l.absorb_damage == r.absorb_damage
		&& l.ignore_defense == r.ignore_defense
		&& l.state_effects == r.state_effects
		&& l.attribute_effects == r.attribute_effects
		&& l.affect_attr_defence == r.affect_attr_defence
		&& l.battler_animation == r.battler_animation
		&& l.battler_animation_data == r.battler_animation_data;
	}

	inline bool operator!=(const Skill& l, const Skill& r) {
		return !(l == r);
	}
}

#endif
