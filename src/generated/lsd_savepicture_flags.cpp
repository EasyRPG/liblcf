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

typedef RPG::SavePicture::Flags flags_type;

template <>
char const* const Flags<flags_type>::name("SavePicture_Flags");

template <>
const Flags<flags_type>::Flag* Flags<flags_type>::flags[] = {
	new Flags<flags_type>::Flag(&flags_type::erase_on_map_change, "erase_on_map_change", 1),
	new Flags<flags_type>::Flag(&flags_type::erase_on_battle_end, "erase_on_battle_end", 1),
	new Flags<flags_type>::Flag(&flags_type::unused_bit, "unused_bit", 1),
	new Flags<flags_type>::Flag(&flags_type::unused_bit2, "unused_bit2", 1),
	new Flags<flags_type>::Flag(&flags_type::affected_by_tint, "affected_by_tint", 1),
	new Flags<flags_type>::Flag(&flags_type::affected_by_flash, "affected_by_flash", 1),
	new Flags<flags_type>::Flag(&flags_type::affected_by_shake, "affected_by_shake", 1),
	NULL
};

template <>
const uint32_t Flags<flags_type>::max_size = 1;

