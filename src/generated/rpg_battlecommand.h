/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
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
		enum Type {
			Type_attack = 0,
			Type_skill = 1,
			Type_subskill = 2,
			Type_defense = 3,
			Type_item = 4,
			Type_escape = 5,
			Type_special = 6
		};
		static constexpr auto kTypeTags = makeEnumTags<Type>(
			"attack",
			"skill",
			"subskill",
			"defense",
			"item",
			"escape",
			"special"
		);

		int ID = 0;
		std::string name;
		int32_t type = 0;
	};
}

#endif
