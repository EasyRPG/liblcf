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

// Headers
#include "lcf/rpg/skill.h"

namespace lcf {
namespace rpg {

std::ostream& operator<<(std::ostream& os, const Skill& obj) {
	os << "Skill{";
	os << "name="<< obj.name;
	os << ", description="<< obj.description;
	os << ", using_message1="<< obj.using_message1;
	os << ", using_message2="<< obj.using_message2;
	os << ", failure_message="<< obj.failure_message;
	os << ", type="<< obj.type;
	os << ", sp_type="<< obj.sp_type;
	os << ", sp_percent="<< obj.sp_percent;
	os << ", sp_cost="<< obj.sp_cost;
	os << ", scope="<< obj.scope;
	os << ", switch_id="<< obj.switch_id;
	os << ", animation_id="<< obj.animation_id;
	os << ", sound_effect="<< obj.sound_effect;
	os << ", occasion_field="<< obj.occasion_field;
	os << ", occasion_battle="<< obj.occasion_battle;
	os << ", reverse_state_effect="<< obj.reverse_state_effect;
	os << ", physical_rate="<< obj.physical_rate;
	os << ", magical_rate="<< obj.magical_rate;
	os << ", variance="<< obj.variance;
	os << ", power="<< obj.power;
	os << ", hit="<< obj.hit;
	os << ", affect_hp="<< obj.affect_hp;
	os << ", affect_sp="<< obj.affect_sp;
	os << ", affect_attack="<< obj.affect_attack;
	os << ", affect_defense="<< obj.affect_defense;
	os << ", affect_spirit="<< obj.affect_spirit;
	os << ", affect_agility="<< obj.affect_agility;
	os << ", absorb_damage="<< obj.absorb_damage;
	os << ", ignore_defense="<< obj.ignore_defense;
	os << ", state_effects=";
	for (size_t i = 0; i < obj.state_effects.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.state_effects[i];
	}
	os << "]";
	os << ", attribute_effects=";
	for (size_t i = 0; i < obj.attribute_effects.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.attribute_effects[i];
	}
	os << "]";
	os << ", affect_attr_defence="<< obj.affect_attr_defence;
	os << ", battler_animation="<< obj.battler_animation;
	os << ", battler_animation_data=";
	for (size_t i = 0; i < obj.battler_animation_data.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.battler_animation_data[i];
	}
	os << "]";
	os << "}";
	return os;
}

} // namespace rpg
} // namespace lcf
