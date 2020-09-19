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
#include "lcf/rpg/savepartylocation.h"

constexpr int lcf::rpg::SavePartyLocation::kPanXDefault;
constexpr int lcf::rpg::SavePartyLocation::kPanYDefault;
constexpr int lcf::rpg::SavePartyLocation::kPanSpeedDefault;
namespace lcf {
namespace rpg {

std::ostream& operator<<(std::ostream& os, const SavePartyLocation& obj) {
	os << "SavePartyLocation{";
	os << "boarding="<< obj.boarding;
	os << ", aboard="<< obj.aboard;
	os << ", vehicle="<< obj.vehicle;
	os << ", unboarding="<< obj.unboarding;
	os << ", preboard_move_speed="<< obj.preboard_move_speed;
	os << ", menu_calling="<< obj.menu_calling;
	os << ", pan_state="<< obj.pan_state;
	os << ", pan_current_x="<< obj.pan_current_x;
	os << ", pan_current_y="<< obj.pan_current_y;
	os << ", pan_finish_x="<< obj.pan_finish_x;
	os << ", pan_finish_y="<< obj.pan_finish_y;
	os << ", pan_speed="<< obj.pan_speed;
	os << ", encounter_steps="<< obj.encounter_steps;
	os << ", encounter_calling="<< obj.encounter_calling;
	os << ", map_save_count="<< obj.map_save_count;
	os << ", database_save_count="<< obj.database_save_count;
	os << "}";
	return os;
}

} // namespace rpg
} // namespace lcf
