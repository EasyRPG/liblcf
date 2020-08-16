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

#ifndef LCF_RPG_VARIABLE_H
#define LCF_RPG_VARIABLE_H

// Headers
#include "lcf/dbstring.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::Variable class.
 */
namespace lcf {
namespace rpg {
	class Variable {
	public:
		int ID = 0;
		DBString name;
	};

	inline bool operator==(const Variable& l, const Variable& r) {
		return l.name == r.name;
	}

	inline bool operator!=(const Variable& l, const Variable& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Variable& obj);
} // namespace rpg
} // namespace lcf

#endif
