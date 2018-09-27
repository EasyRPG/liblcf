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


// Read Terrain.

using flags_type = RPG::Terrain::Flags;

template <>
char const* const Flags<flags_type>::name = "Terrain_Flags";

template <>
decltype(Flags<flags_type>::flag_names) Flags<flags_type>::flag_names = {
	"back_party",
	"back_enemies",
	"lateral_party",
	"lateral_enemies"
};

template <>
decltype(Flags<flags_type>::flags_is2k3) Flags<flags_type>::flags_is2k3 = {
	1,
	1,
	1,
	1
};

