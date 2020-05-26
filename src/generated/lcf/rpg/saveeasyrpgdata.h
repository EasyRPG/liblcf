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
#include <ostream>

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

	inline std::ostream& operator<<(std::ostream& os, const SaveEasyRpgData& obj) {
		os << "SaveEasyRpgData{";
		os << "version="<< obj.version;
		os << "}";
		return os;
	}
} // namespace rpg
} // namespace lcf

#endif
