/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

/*
 * Headers
 */
#include "lcf/lsd/reader.h"
#include "lcf/lsd/chunks.h"
#include "reader_struct.h"

namespace lcf {

// Read SaveEventExecState.

template <>
char const* const Flags<rpg::SaveEventExecState::EasyRpgStateRuntime_Flags>::name = "SaveEventExecState_EasyRpgStateRuntime_Flags";

template <>
decltype(Flags<rpg::SaveEventExecState::EasyRpgStateRuntime_Flags>::flag_names) Flags<rpg::SaveEventExecState::EasyRpgStateRuntime_Flags>::flag_names = {
	"conf_override_active",
	"reserved_1",
	"reserved_2",
	"reserved_3",
	"patch_destiny_on",
	"patch_destiny_off",
	"patch_dynrpg_on",
	"patch_dynrpg_off",
	"patch_maniac_on",
	"patch_maniac_off",
	"patch_common_this_event_on",
	"patch_common_this_event_off",
	"patch_unlock_pics_on",
	"patch_unlock_pics_off",
	"patch_keypatch_on",
	"patch_keypatch_off",
	"patch_rpg2k3_cmds_on",
	"patch_rpg2k3_cmds_off",
	"use_rpg2k_battle_system_on",
	"use_rpg2k_battle_system_off"
};

template <>
decltype(Flags<rpg::SaveEventExecState::EasyRpgStateRuntime_Flags>::flags_is2k3) Flags<rpg::SaveEventExecState::EasyRpgStateRuntime_Flags>::flags_is2k3 = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

} //namespace lcf
