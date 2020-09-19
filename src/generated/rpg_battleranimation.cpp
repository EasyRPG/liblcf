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

// Headers
#include "lcf/rpg/battleranimation.h"

namespace lcf {
namespace rpg {

std::ostream& operator<<(std::ostream& os, const BattlerAnimation& obj) {
	os << "BattlerAnimation{";
	os << "name="<< obj.name;
	os << ", speed="<< obj.speed;
	os << ", base_data=";
	for (size_t i = 0; i < obj.base_data.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.base_data[i];
	}
	os << "]";
	os << ", weapon_data=";
	for (size_t i = 0; i < obj.weapon_data.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.weapon_data[i];
	}
	os << "]";
	os << "}";
	return os;
}

} // namespace rpg
} // namespace lcf
