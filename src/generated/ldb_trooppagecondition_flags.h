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

/*
 * Headers
 */
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"


// Read TroopPageCondition.

template <>
char const* const Flags<RPG::TroopPageCondition::Flags>::name = "TroopPageCondition_Flags";

template <>
decltype(Flags<RPG::TroopPageCondition::Flags>::flag_names) Flags<RPG::TroopPageCondition::Flags>::flag_names = {
	"switch_a",
	"switch_b",
	"variable",
	"turn",
	"fatigue",
	"enemy_hp",
	"actor_hp",
	"turn_enemy",
	"turn_actor",
	"command_actor"
};

template <>
decltype(Flags<RPG::TroopPageCondition::Flags>::flags_is2k3) Flags<RPG::TroopPageCondition::Flags>::flags_is2k3 = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1
};

