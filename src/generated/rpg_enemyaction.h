/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_ENEMYACTION_H
#define LCF_RPG_ENEMYACTION_H

// Headers
#include <stdint.h>
#include "enum_tags.h"

/**
 * RPG::EnemyAction class.
 */
namespace RPG {
	class EnemyAction {
	public:
		enum class Kind {
			Basic = 0,
			Skill = 1,
			Transformation = 2
		};
		static constexpr auto kKindTags = makeEnumTags<Kind>(
			"Basic",
			"Skill",
			"Transformation"
		);
		enum class Basic {
			Attack = 0,
			DualAttack = 1,
			Defense = 2,
			Observe = 3,
			Charge = 4,
			Autodestruction = 5,
			Escape = 6,
			Nothing = 7
		};
		static constexpr auto kBasicTags = makeEnumTags<Basic>(
			"Attack",
			"DualAttack",
			"Defense",
			"Observe",
			"Charge",
			"Autodestruction",
			"Escape",
			"Nothing"
		);
		enum class ConditionType {
			Always = 0,
			Switch = 1,
			Turn = 2,
			Actors = 3,
			Hp = 4,
			Sp = 5,
			PartyLvl = 6,
			PartyFatigue = 7
		};
		static constexpr auto kConditionTypeTags = makeEnumTags<ConditionType>(
			"Always",
			"Switch",
			"Turn",
			"Actors",
			"Hp",
			"Sp",
			"PartyLvl",
			"PartyFatigue"
		);

		int ID = 0;
		int32_t kind = 0;
		int32_t basic = 1;
		int32_t skill_id = 1;
		int32_t enemy_id = 1;
		int32_t condition_type = 0;
		int32_t condition_param1 = 0;
		int32_t condition_param2 = 0;
		int32_t switch_id = 1;
		bool switch_on = false;
		int32_t switch_on_id = 1;
		bool switch_off = false;
		int32_t switch_off_id = 1;
		int32_t rating = 50;
	};

	inline bool operator==(const EnemyAction& l, const EnemyAction& r) {
		return l.kind == r.kind
		&& l.basic == r.basic
		&& l.skill_id == r.skill_id
		&& l.enemy_id == r.enemy_id
		&& l.condition_type == r.condition_type
		&& l.condition_param1 == r.condition_param1
		&& l.condition_param2 == r.condition_param2
		&& l.switch_id == r.switch_id
		&& l.switch_on == r.switch_on
		&& l.switch_on_id == r.switch_on_id
		&& l.switch_off == r.switch_off
		&& l.switch_off_id == r.switch_off_id
		&& l.rating == r.rating;
	}

	inline bool operator!=(const EnemyAction& l, const EnemyAction& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::EnemyAction::Kind, true, Basic, Transformation);
LCF_DEFINE_ENUM_TRAITS(RPG::EnemyAction::Basic, true, Attack, Nothing);
LCF_DEFINE_ENUM_TRAITS(RPG::EnemyAction::ConditionType, true, Always, PartyFatigue);

#endif
