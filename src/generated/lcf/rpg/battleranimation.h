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

#ifndef LCF_RPG_BATTLERANIMATION_H
#define LCF_RPG_BATTLERANIMATION_H

// Headers
#include <vector>
#include "lcf/dbstring.h"
#include "lcf/enum_tags.h"
#include "lcf/rpg/battleranimationextension.h"
#include "lcf/context.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::BattlerAnimation class.
 */
namespace lcf {
namespace rpg {
	class BattlerAnimation {
	public:
		enum Speed {
			Speed_slow = 0,
			Speed_normal = 8,
			Speed_fast = 14
		};

		int ID = 0;
		DBString name;
		int32_t speed = 0;
		std::vector<BattlerAnimationExtension> base_data;
		std::vector<BattlerAnimationExtension> weapon_data;
	};
	inline std::ostream& operator<<(std::ostream& os, BattlerAnimation::Speed code) {
		os << static_cast<std::underlying_type_t<decltype(code)>>(code);
		return os;
	}

	inline bool operator==(const BattlerAnimation& l, const BattlerAnimation& r) {
		return l.name == r.name
		&& l.speed == r.speed
		&& l.base_data == r.base_data
		&& l.weapon_data == r.weapon_data;
	}

	inline bool operator!=(const BattlerAnimation& l, const BattlerAnimation& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const BattlerAnimation& obj);

	template <typename F, typename ParentCtx = Context<void,void>>
	void ForEachString(BattlerAnimation& obj, const F& f, const ParentCtx* parent_ctx = nullptr) {
		const auto ctx1 = Context<BattlerAnimation, ParentCtx>{ "name", -1, &obj, parent_ctx };
		f(obj.name, ctx1);
		for (int i = 0; i < static_cast<int>(obj.base_data.size()); ++i) {
			const auto ctx3 = Context<BattlerAnimation, ParentCtx>{ "base_data", i, &obj, parent_ctx };
			ForEachString(obj.base_data[i], f, &ctx3);
		}
		for (int i = 0; i < static_cast<int>(obj.weapon_data.size()); ++i) {
			const auto ctx4 = Context<BattlerAnimation, ParentCtx>{ "weapon_data", i, &obj, parent_ctx };
			ForEachString(obj.weapon_data[i], f, &ctx4);
		}
		(void)obj;
		(void)f;
		(void)parent_ctx;
	}

} // namespace rpg
} // namespace lcf

#endif
