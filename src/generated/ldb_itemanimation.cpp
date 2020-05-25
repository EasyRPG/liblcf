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
#include "lcf/ldb/reader.h"
#include "lcf/ldb/chunks.h"
#include "reader_struct_impl.h"

namespace lcf {

// Read ItemAnimation.

template <>
char const* const Struct<rpg::ItemAnimation>::name = "ItemAnimation";
static TypedField<rpg::ItemAnimation, int32_t> static_type(
	&rpg::ItemAnimation::type,
	LDB_Reader::ChunkItemAnimation::type,
	"type",
	0,
	0
);
static TypedField<rpg::ItemAnimation, int32_t> static_weapon_anim(
	&rpg::ItemAnimation::weapon_anim,
	LDB_Reader::ChunkItemAnimation::weapon_anim,
	"weapon_anim",
	0,
	0
);
static TypedField<rpg::ItemAnimation, int32_t> static_movement(
	&rpg::ItemAnimation::movement,
	LDB_Reader::ChunkItemAnimation::movement,
	"movement",
	0,
	0
);
static TypedField<rpg::ItemAnimation, int32_t> static_after_image(
	&rpg::ItemAnimation::after_image,
	LDB_Reader::ChunkItemAnimation::after_image,
	"after_image",
	0,
	0
);
static TypedField<rpg::ItemAnimation, int32_t> static_attacks(
	&rpg::ItemAnimation::attacks,
	LDB_Reader::ChunkItemAnimation::attacks,
	"attacks",
	0,
	0
);
static TypedField<rpg::ItemAnimation, bool> static_ranged(
	&rpg::ItemAnimation::ranged,
	LDB_Reader::ChunkItemAnimation::ranged,
	"ranged",
	0,
	0
);
static TypedField<rpg::ItemAnimation, int32_t> static_ranged_anim(
	&rpg::ItemAnimation::ranged_anim,
	LDB_Reader::ChunkItemAnimation::ranged_anim,
	"ranged_anim",
	0,
	0
);
static TypedField<rpg::ItemAnimation, int32_t> static_ranged_speed(
	&rpg::ItemAnimation::ranged_speed,
	LDB_Reader::ChunkItemAnimation::ranged_speed,
	"ranged_speed",
	0,
	0
);
static TypedField<rpg::ItemAnimation, int32_t> static_battle_anim(
	&rpg::ItemAnimation::battle_anim,
	LDB_Reader::ChunkItemAnimation::battle_anim,
	"battle_anim",
	0,
	0
);


template <>
Field<rpg::ItemAnimation> const* Struct<rpg::ItemAnimation>::fields[] = {
	&static_type,
	&static_weapon_anim,
	&static_movement,
	&static_after_image,
	&static_attacks,
	&static_ranged,
	&static_ranged_anim,
	&static_ranged_speed,
	&static_battle_anim,
	NULL
};

template class Struct<rpg::ItemAnimation>;

} //namespace lcf
