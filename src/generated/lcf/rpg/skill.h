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
#include "lcf/enum_tags.h"
#include "lcf/rpg/battleranimationdata.h"
#include "lcf/rpg/sound.h"
#include <ostream>

/**
 * rpg::Skill class.
 */
namespace lcf {
namespace rpg {
	class Skill {
	public:
		enum Type {
			Type_normal = 0,
			Type_teleport = 1,
			Type_escape = 2,
			Type_switch = 3,
			Type_subskill = 4
		};
		static constexpr auto kTypeTags = lcf::makeEnumTags<Type>(
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
		static constexpr auto kSpTypeTags = lcf::makeEnumTags<SpType>(
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
		static constexpr auto kScopeTags = lcf::makeEnumTags<Scope>(
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

	inline std::ostream& operator<<(std::ostream& os, const Skill& obj) {
		os << "Skill{";
		os << "name="<< obj.name;
		os << " description="<< obj.description;
		os << " using_message1="<< obj.using_message1;
		os << " using_message2="<< obj.using_message2;
		os << " failure_message="<< obj.failure_message;
		os << " type="<< obj.type;
		os << " sp_type="<< obj.sp_type;
		os << " sp_percent="<< obj.sp_percent;
		os << " sp_cost="<< obj.sp_cost;
		os << " scope="<< obj.scope;
		os << " switch_id="<< obj.switch_id;
		os << " animation_id="<< obj.animation_id;
		os << " sound_effect="<< obj.sound_effect;
		os << " occasion_field="<< obj.occasion_field;
		os << " occasion_battle="<< obj.occasion_battle;
		os << " reverse_state_effect="<< obj.reverse_state_effect;
		os << " physical_rate="<< obj.physical_rate;
		os << " magical_rate="<< obj.magical_rate;
		os << " variance="<< obj.variance;
		os << " power="<< obj.power;
		os << " hit="<< obj.hit;
		os << " affect_hp="<< obj.affect_hp;
		os << " affect_sp="<< obj.affect_sp;
		os << " affect_attack="<< obj.affect_attack;
		os << " affect_defense="<< obj.affect_defense;
		os << " affect_spirit="<< obj.affect_spirit;
		os << " affect_agility="<< obj.affect_agility;
		os << " absorb_damage="<< obj.absorb_damage;
		os << " ignore_defense="<< obj.ignore_defense;
		os << " state_effects=";
		for (size_t i = 0; i < obj.state_effects.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.state_effects[i];
		}
		os << "]";
		os << " attribute_effects=";
		for (size_t i = 0; i < obj.attribute_effects.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.attribute_effects[i];
		}
		os << "]";
		os << " affect_attr_defence="<< obj.affect_attr_defence;
		os << " battler_animation="<< obj.battler_animation;
		os << " battler_animation_data=";
		for (size_t i = 0; i < obj.battler_animation_data.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.battler_animation_data[i];
		}
		os << "]";
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
