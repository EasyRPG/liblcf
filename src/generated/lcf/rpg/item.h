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

#ifndef LCF_RPG_ITEM_H
#define LCF_RPG_ITEM_H

// Headers
#include <stdint.h>
#include <string>
#include <vector>
#include "lcf/enum_tags.h"
#include "lcf/rpg/itemanimation.h"
#include <ostream>

/**
 * rpg::Item class.
 */
namespace lcf {
namespace rpg {
	class Item {
	public:
		enum Type {
			Type_normal = 0,
			Type_weapon = 1,
			Type_shield = 2,
			Type_armor = 3,
			Type_helmet = 4,
			Type_accessory = 5,
			Type_medicine = 6,
			Type_book = 7,
			Type_material = 8,
			Type_special = 9,
			Type_switch = 10
		};
		static constexpr auto kTypeTags = lcf::makeEnumTags<Type>(
			"normal",
			"weapon",
			"shield",
			"armor",
			"helmet",
			"accessory",
			"medicine",
			"book",
			"material",
			"special",
			"switch"
		);
		enum Trajectory {
			Trajectory_straight = 0,
			Trajectory_return = 1
		};
		static constexpr auto kTrajectoryTags = lcf::makeEnumTags<Trajectory>(
			"straight",
			"return"
		);
		enum Target {
			Target_single = 0,
			Target_center = 1,
			Target_simultaneous = 2,
			Target_sequential = 3
		};
		static constexpr auto kTargetTags = lcf::makeEnumTags<Target>(
			"single",
			"center",
			"simultaneous",
			"sequential"
		);

		int ID = 0;
		std::string name;
		std::string description;
		int32_t type = 0;
		int32_t price = 0;
		int32_t uses = 1;
		int32_t atk_points1 = 0;
		int32_t def_points1 = 0;
		int32_t spi_points1 = 0;
		int32_t agi_points1 = 0;
		bool two_handed = false;
		int32_t sp_cost = 0;
		int32_t hit = 90;
		int32_t critical_hit = 0;
		int32_t animation_id = 1;
		bool preemptive = false;
		bool dual_attack = false;
		bool attack_all = false;
		bool ignore_evasion = false;
		bool prevent_critical = false;
		bool raise_evasion = false;
		bool half_sp_cost = false;
		bool no_terrain_damage = false;
		bool cursed = false;
		bool entire_party = false;
		int32_t recover_hp_rate = 0;
		int32_t recover_hp = 0;
		int32_t recover_sp_rate = 0;
		int32_t recover_sp = 0;
		bool occasion_field1 = false;
		bool ko_only = false;
		int32_t max_hp_points = 0;
		int32_t max_sp_points = 0;
		int32_t atk_points2 = 0;
		int32_t def_points2 = 0;
		int32_t spi_points2 = 0;
		int32_t agi_points2 = 0;
		int32_t using_message = 0;
		int32_t skill_id = 1;
		int32_t switch_id = 1;
		bool occasion_field2 = true;
		bool occasion_battle = false;
		std::vector<bool> actor_set;
		std::vector<bool> state_set;
		std::vector<bool> attribute_set;
		int32_t state_chance = 0;
		bool reverse_state_effect = false;
		int32_t weapon_animation = -1;
		std::vector<ItemAnimation> animation_data;
		bool use_skill = false;
		std::vector<bool> class_set;
		int32_t ranged_trajectory = 0;
		int32_t ranged_target = 0;
	};

	inline bool operator==(const Item& l, const Item& r) {
		return l.name == r.name
		&& l.description == r.description
		&& l.type == r.type
		&& l.price == r.price
		&& l.uses == r.uses
		&& l.atk_points1 == r.atk_points1
		&& l.def_points1 == r.def_points1
		&& l.spi_points1 == r.spi_points1
		&& l.agi_points1 == r.agi_points1
		&& l.two_handed == r.two_handed
		&& l.sp_cost == r.sp_cost
		&& l.hit == r.hit
		&& l.critical_hit == r.critical_hit
		&& l.animation_id == r.animation_id
		&& l.preemptive == r.preemptive
		&& l.dual_attack == r.dual_attack
		&& l.attack_all == r.attack_all
		&& l.ignore_evasion == r.ignore_evasion
		&& l.prevent_critical == r.prevent_critical
		&& l.raise_evasion == r.raise_evasion
		&& l.half_sp_cost == r.half_sp_cost
		&& l.no_terrain_damage == r.no_terrain_damage
		&& l.cursed == r.cursed
		&& l.entire_party == r.entire_party
		&& l.recover_hp_rate == r.recover_hp_rate
		&& l.recover_hp == r.recover_hp
		&& l.recover_sp_rate == r.recover_sp_rate
		&& l.recover_sp == r.recover_sp
		&& l.occasion_field1 == r.occasion_field1
		&& l.ko_only == r.ko_only
		&& l.max_hp_points == r.max_hp_points
		&& l.max_sp_points == r.max_sp_points
		&& l.atk_points2 == r.atk_points2
		&& l.def_points2 == r.def_points2
		&& l.spi_points2 == r.spi_points2
		&& l.agi_points2 == r.agi_points2
		&& l.using_message == r.using_message
		&& l.skill_id == r.skill_id
		&& l.switch_id == r.switch_id
		&& l.occasion_field2 == r.occasion_field2
		&& l.occasion_battle == r.occasion_battle
		&& l.actor_set == r.actor_set
		&& l.state_set == r.state_set
		&& l.attribute_set == r.attribute_set
		&& l.state_chance == r.state_chance
		&& l.reverse_state_effect == r.reverse_state_effect
		&& l.weapon_animation == r.weapon_animation
		&& l.animation_data == r.animation_data
		&& l.use_skill == r.use_skill
		&& l.class_set == r.class_set
		&& l.ranged_trajectory == r.ranged_trajectory
		&& l.ranged_target == r.ranged_target;
	}

	inline bool operator!=(const Item& l, const Item& r) {
		return !(l == r);
	}

	inline std::ostream& operator<<(std::ostream& os, const Item& obj) {
		os << "Item{";
		os << "name="<< obj.name;
		os << " description="<< obj.description;
		os << " type="<< obj.type;
		os << " price="<< obj.price;
		os << " uses="<< obj.uses;
		os << " atk_points1="<< obj.atk_points1;
		os << " def_points1="<< obj.def_points1;
		os << " spi_points1="<< obj.spi_points1;
		os << " agi_points1="<< obj.agi_points1;
		os << " two_handed="<< obj.two_handed;
		os << " sp_cost="<< obj.sp_cost;
		os << " hit="<< obj.hit;
		os << " critical_hit="<< obj.critical_hit;
		os << " animation_id="<< obj.animation_id;
		os << " preemptive="<< obj.preemptive;
		os << " dual_attack="<< obj.dual_attack;
		os << " attack_all="<< obj.attack_all;
		os << " ignore_evasion="<< obj.ignore_evasion;
		os << " prevent_critical="<< obj.prevent_critical;
		os << " raise_evasion="<< obj.raise_evasion;
		os << " half_sp_cost="<< obj.half_sp_cost;
		os << " no_terrain_damage="<< obj.no_terrain_damage;
		os << " cursed="<< obj.cursed;
		os << " entire_party="<< obj.entire_party;
		os << " recover_hp_rate="<< obj.recover_hp_rate;
		os << " recover_hp="<< obj.recover_hp;
		os << " recover_sp_rate="<< obj.recover_sp_rate;
		os << " recover_sp="<< obj.recover_sp;
		os << " occasion_field1="<< obj.occasion_field1;
		os << " ko_only="<< obj.ko_only;
		os << " max_hp_points="<< obj.max_hp_points;
		os << " max_sp_points="<< obj.max_sp_points;
		os << " atk_points2="<< obj.atk_points2;
		os << " def_points2="<< obj.def_points2;
		os << " spi_points2="<< obj.spi_points2;
		os << " agi_points2="<< obj.agi_points2;
		os << " using_message="<< obj.using_message;
		os << " skill_id="<< obj.skill_id;
		os << " switch_id="<< obj.switch_id;
		os << " occasion_field2="<< obj.occasion_field2;
		os << " occasion_battle="<< obj.occasion_battle;
		os << " actor_set=";
		for (size_t i = 0; i < obj.actor_set.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.actor_set[i];
		}
		os << "]";
		os << " state_set=";
		for (size_t i = 0; i < obj.state_set.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.state_set[i];
		}
		os << "]";
		os << " attribute_set=";
		for (size_t i = 0; i < obj.attribute_set.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.attribute_set[i];
		}
		os << "]";
		os << " state_chance="<< obj.state_chance;
		os << " reverse_state_effect="<< obj.reverse_state_effect;
		os << " weapon_animation="<< obj.weapon_animation;
		os << " animation_data=";
		for (size_t i = 0; i < obj.animation_data.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.animation_data[i];
		}
		os << "]";
		os << " use_skill="<< obj.use_skill;
		os << " class_set=";
		for (size_t i = 0; i < obj.class_set.size(); ++i) {
			os << (i == 0 ? "[" : ", ") << obj.class_set[i];
		}
		os << "]";
		os << " ranged_trajectory="<< obj.ranged_trajectory;
		os << " ranged_target="<< obj.ranged_target;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
