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


// Read Terrain.

typedef RPG::Terrain::Flags flags_type;

template <>
char const* const Flags<flags_type>::name("Terrain_Flags");

template <>
const Flags<flags_type>::Flag* Flags<flags_type>::flags[] = {
	new Flags<flags_type>::Flag(&flags_type::back_party,		"back_party"		),
	new Flags<flags_type>::Flag(&flags_type::back_enemies,		"back_enemies"		),
	new Flags<flags_type>::Flag(&flags_type::lateral_party,		"lateral_party"		),
	new Flags<flags_type>::Flag(&flags_type::lateral_enemies,	"lateral_enemies"	),
	NULL
};

template <>
const uint32_t Flags<flags_type>::max_size = 1;

