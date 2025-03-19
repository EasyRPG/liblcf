/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_STRINGVARIABLE_H
#define LCF_RPG_STRINGVARIABLE_H

// Headers
#include "lcf/dbstring.h"
#include "lcf/context.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::StringVariable class.
 */
namespace lcf {
namespace rpg {
	class StringVariable {
	public:
		int ID = 0;
		DBString name;
	};

	inline bool operator==(const StringVariable& l, const StringVariable& r) {
		return l.name == r.name;
	}

	inline bool operator!=(const StringVariable& l, const StringVariable& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const StringVariable& obj);

	template <typename F, typename ParentCtx = Context<void,void>>
	void ForEachString(StringVariable& obj, const F& f, const ParentCtx* parent_ctx = nullptr) {
		const auto ctx1 = Context<StringVariable, ParentCtx>{ "name", -1, &obj, parent_ctx };
		f(obj.name, ctx1);
		(void)obj;
		(void)f;
		(void)parent_ctx;
	}

} // namespace rpg
} // namespace lcf

#endif
