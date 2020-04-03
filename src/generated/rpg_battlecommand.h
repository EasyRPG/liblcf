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

#ifndef LCF_RPG_BATTLECOMMAND_H
#define LCF_RPG_BATTLECOMMAND_H

// Headers
#include <string>
#include "enum_tags.h"

/**
 * RPG::BattleCommand class.
 */
namespace RPG {
	class BattleCommand {
	public:
		enum class Type {
			Attack = 0,
			Skill = 1,
			Subskill = 2,
			Defense = 3,
			Item = 4,
			Escape = 5,
			Special = 6
		};

		int ID = 0;
		std::string name;
		int32_t type = 0;
	};

	inline bool operator==(const BattleCommand& l, const BattleCommand& r) {
		return l.name == r.name
		&& l.type == r.type;
	}

	inline bool operator!=(const BattleCommand& l, const BattleCommand& r) {
		return !(l == r);
	}
}

LCF_DEFINE_ENUM_TRAITS(RPG::BattleCommand::Type, true, Attack, Special);

LCF_DEFINE_ENUM_TAGS(RPG::BattleCommand::Type, (makeEnumTags<RPG::BattleCommand::Type>({{
	"Attack",
	"Skill",
	"Subskill",
	"Defense",
	"Item",
	"Escape",
	"Special"
	}})));


#endif
