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
#include "lcf/rpg/saveeventexecframe.h"

namespace lcf {
namespace rpg {

std::ostream& operator<<(std::ostream& os, const SaveEventExecFrame& obj) {
	os << "SaveEventExecFrame{";
	os << "commands=";
	for (size_t i = 0; i < obj.commands.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.commands[i];
	}
	os << "]";
	os << ", current_command="<< obj.current_command;
	os << ", event_id="<< obj.event_id;
	os << ", triggered_by_decision_key="<< obj.triggered_by_decision_key;
	os << ", subcommand_path=";
	for (size_t i = 0; i < obj.subcommand_path.size(); ++i) {
		os << (i == 0 ? "[" : ", ") << obj.subcommand_path[i];
	}
	os << "]";
	os << "}";
	return os;
}

} // namespace rpg
} // namespace lcf
