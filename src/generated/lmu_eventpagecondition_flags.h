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
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct.h"


// Read EventPageCondition.

template <>
char const* const Flags<RPG::EventPageCondition::Flags>::name = "EventPageCondition_Flags";

template <>
decltype(Flags<RPG::EventPageCondition::Flags>::flag_names) Flags<RPG::EventPageCondition::Flags>::flag_names = {
	"switch_a",
	"switch_b",
	"variable",
	"item",
	"actor",
	"timer",
	"timer2"
};

template <>
decltype(Flags<RPG::EventPageCondition::Flags>::flags_is2k3) Flags<RPG::EventPageCondition::Flags>::flags_is2k3 = {
	0,
	0,
	0,
	0,
	0,
	0,
	1
};

