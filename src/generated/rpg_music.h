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

#ifndef LCF_RPG_MUSIC_H
#define LCF_RPG_MUSIC_H

// Headers
#include <stdint.h>
#include <string>

/**
 * RPG::Music class.
 */
namespace RPG {
	class Music {
	public:
		std::string name = "(OFF)";
		int32_t fadein = 0;
		int32_t volume = 100;
		int32_t tempo = 100;
		int32_t balance = 50;
	};

	inline bool operator==(const Music& l, const Music& r) {
		return l.name == r.name
		&& l.fadein == r.fadein
		&& l.volume == r.volume
		&& l.tempo == r.tempo
		&& l.balance == r.balance;
	}

	inline bool operator!=(const Music& l, const Music& r) {
		return !(l == r);
	}
}

#endif
