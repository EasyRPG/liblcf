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

/*
 * Headers
 */
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"


// Read TroopPageCondition.

typedef RPG::TroopPageCondition::Flags flags_type;

template <>
char const* const Flags<flags_type>::name("TroopPageCondition_Flags");

template <>
const Flags<flags_type>::Flag* Flags<flags_type>::flags[] = {
	new Flags<flags_type>::Flag(&flags_type::switch_a, "switch_a", 0),
	new Flags<flags_type>::Flag(&flags_type::switch_b, "switch_b", 0),
	new Flags<flags_type>::Flag(&flags_type::variable, "variable", 0),
	new Flags<flags_type>::Flag(&flags_type::turn, "turn", 0),
	new Flags<flags_type>::Flag(&flags_type::fatigue, "fatigue", 0),
	new Flags<flags_type>::Flag(&flags_type::enemy_hp, "enemy_hp", 0),
	new Flags<flags_type>::Flag(&flags_type::actor_hp, "actor_hp", 0),
	new Flags<flags_type>::Flag(&flags_type::turn_enemy, "turn_enemy", 1),
	new Flags<flags_type>::Flag(&flags_type::turn_actor, "turn_actor", 1),
	new Flags<flags_type>::Flag(&flags_type::command_actor, "command_actor", 1),
	NULL
};

template <>
const uint32_t Flags<flags_type>::max_size = 2;

