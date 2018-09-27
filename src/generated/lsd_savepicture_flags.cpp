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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"


// Read SavePicture.

using flags_type = RPG::SavePicture::Flags;

template <>
char const* const Flags<flags_type>::name = "SavePicture_Flags";

template <>
decltype(Flags<flags_type>::flag_names) Flags<flags_type>::flag_names = {
	"erase_on_map_change",
	"erase_on_battle_end",
	"unused_bit",
	"unused_bit2",
	"affected_by_tint",
	"affected_by_flash",
	"affected_by_shake"
};

template <>
decltype(Flags<flags_type>::flags_is2k3) Flags<flags_type>::flags_is2k3 = {
	1,
	1,
	1,
	1,
	1,
	1,
	1
};

