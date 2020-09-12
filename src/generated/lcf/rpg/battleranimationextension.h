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

#ifndef LCF_RPG_BATTLERANIMATIONEXTENSION_H
#define LCF_RPG_BATTLERANIMATIONEXTENSION_H

// Headers
#include <stdint.h>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/context.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::BattlerAnimationExtension class.
 */
namespace lcf {
namespace rpg {
	class BattlerAnimationExtension {
	public:
		enum AnimType {
			AnimType_graphic = 0,
			AnimType_animation = 1
		};
		static constexpr auto kAnimTypeTags = lcf::makeEnumTags<AnimType>(
			"graphic",
			"animation"
		);

		int ID = 0;
		DBString name;
		DBString battler_name;
		int32_t battler_index = 0;
		int32_t animation_type = 0;
		int32_t animation_id = 1;
	};
	inline std::ostream& operator<<(std::ostream& os, BattlerAnimationExtension::AnimType code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const BattlerAnimationExtension& l, const BattlerAnimationExtension& r) {
		return l.name == r.name
		&& l.battler_name == r.battler_name
		&& l.battler_index == r.battler_index
		&& l.animation_type == r.animation_type
		&& l.animation_id == r.animation_id;
	}

	inline bool operator!=(const BattlerAnimationExtension& l, const BattlerAnimationExtension& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const BattlerAnimationExtension& obj);

	template <typename F, typename ParentCtx = Context<void,void>>
	void ForEachString(BattlerAnimationExtension& obj, const F& f, const ParentCtx* parent_ctx = nullptr) {
		const auto ctx1 = Context<BattlerAnimationExtension, ParentCtx>{ "name", -1, &obj, parent_ctx };
		f(obj.name, ctx1);
		const auto ctx2 = Context<BattlerAnimationExtension, ParentCtx>{ "battler_name", -1, &obj, parent_ctx };
		f(obj.battler_name, ctx2);
		(void)obj;
		(void)f;
		(void)parent_ctx;
	}

} // namespace rpg
} // namespace lcf

#endif
