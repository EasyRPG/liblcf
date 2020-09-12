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

#ifndef LCF_RPG_SAVEEASYRPGDATA_H
#define LCF_RPG_SAVEEASYRPGDATA_H

// Headers
#include <stdint.h>
#include "lcf/context.h"
#include <ostream>
#include <type_traits>

/**
 * rpg::SaveEasyRpgData class.
 */
namespace lcf {
namespace rpg {
	class SaveEasyRpgData {
	public:
		int32_t version = 0;
	};

	inline bool operator==(const SaveEasyRpgData& l, const SaveEasyRpgData& r) {
		return l.version == r.version;
	}

	inline bool operator!=(const SaveEasyRpgData& l, const SaveEasyRpgData& r) {
		return !(l == r);
	}

	std::ostream& operator<<(std::ostream& os, const SaveEasyRpgData& obj);

	template <typename F, typename ParentCtx = Context<void,void>>
	void ForEachString(SaveEasyRpgData& obj, const F& f, const ParentCtx* parent_ctx = nullptr) {
		(void)obj;
		(void)f;
		(void)parent_ctx;
	}

} // namespace rpg
} // namespace lcf

#endif
