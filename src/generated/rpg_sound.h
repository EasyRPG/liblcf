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

#ifndef LCF_RPG_SOUND_H
#define LCF_RPG_SOUND_H

// Headers
#include <stdint.h>
#include <string>

/**
 * RPG::Sound class.
 */
namespace RPG {
	class Sound {
	public:
		std::string name;
		int32_t volume = 100;
		int32_t tempo = 100;
		int32_t balance = 50;
	};
}

#endif
