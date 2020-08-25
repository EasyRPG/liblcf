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
#include <string>
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
		std::string name;

		template <typename F>
		void ForEachString(const F& f);
	};

	inline bool operator==(const Variable& l, const Variable& r) {
		return l.name == r.name;
	}

	inline bool operator!=(const Variable& l, const Variable& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const Variable& obj);

	template <typename F>
	inline void Variable::ForEachString(const F& f) {
		name = f(name, "name");
	}
} // namespace rpg
} // namespace lcf

#endif
