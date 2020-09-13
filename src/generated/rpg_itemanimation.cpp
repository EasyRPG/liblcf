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
#include "lcf/rpg/itemanimation.h"

namespace lcf {
namespace rpg {

std::ostream& operator<<(std::ostream& os, const ItemAnimation& obj) {
	os << "ItemAnimation{";
	os << "type="<< obj.type;
	os << ", weapon_anim="<< obj.weapon_anim;
	os << ", movement="<< obj.movement;
	os << ", after_image="<< obj.after_image;
	os << ", attacks="<< obj.attacks;
	os << ", ranged="<< obj.ranged;
	os << ", ranged_anim="<< obj.ranged_anim;
	os << ", ranged_speed="<< obj.ranged_speed;
	os << ", battle_anim="<< obj.battle_anim;
	os << "}";
	return os;
}

} // namespace rpg
} // namespace lcf
