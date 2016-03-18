/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
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
	new Flags<flags_type>::Flag(&flags_type::switch_a,		"switch_a"		),
	new Flags<flags_type>::Flag(&flags_type::switch_b,		"switch_b"		),
	new Flags<flags_type>::Flag(&flags_type::variable,		"variable"		),
	new Flags<flags_type>::Flag(&flags_type::turn,			"turn"			),
	new Flags<flags_type>::Flag(&flags_type::fatigue,		"fatigue"		),
	new Flags<flags_type>::Flag(&flags_type::enemy_hp,		"enemy_hp"		),
	new Flags<flags_type>::Flag(&flags_type::actor_hp,		"actor_hp"		),
	new Flags<flags_type>::Flag(&flags_type::turn_enemy,	"turn_enemy"	),
	new Flags<flags_type>::Flag(&flags_type::turn_actor,	"turn_actor"	),
	new Flags<flags_type>::Flag(&flags_type::command_actor,	"command_actor"	),
	NULL
};

template <>
const uint32_t Flags<flags_type>::max_size = 2;

