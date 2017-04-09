/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVETITLE_H
#define LCF_RPG_SAVETITLE_H

// Headers
#include <string>

/**
 * RPG::SaveTitle class.
 */
namespace RPG {
	class SaveTitle {
	public:
		double timestamp = 0;
		std::string hero_name;
		int hero_level = 0;
		int hero_hp = 0;
		std::string face1_name;
		int face1_id = 0;
		std::string face2_name;
		int face2_id = 0;
		std::string face3_name;
		int face3_id = 0;
		std::string face4_name;
		int face4_id = 0;
	};
}

#endif
