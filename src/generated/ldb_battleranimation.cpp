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

// Read BattlerAnimation.

template <>
char const* const Struct<rpg::BattlerAnimation>::name = "BattlerAnimation";
static TypedField<rpg::BattlerAnimation, DBString> static_name(
	&rpg::BattlerAnimation::name,
	LDB_Reader::ChunkBattlerAnimation::name,
	"name",
	0,
	0
);
static TypedField<rpg::BattlerAnimation, int32_t> static_speed(
	&rpg::BattlerAnimation::speed,
	LDB_Reader::ChunkBattlerAnimation::speed,
	"speed",
	0,
	0
);
static TypedField<rpg::BattlerAnimation, std::vector<rpg::BattlerAnimationExtension>> static_base_data(
	&rpg::BattlerAnimation::base_data,
	LDB_Reader::ChunkBattlerAnimation::base_data,
	"base_data",
	1,
	0
);
static TypedField<rpg::BattlerAnimation, std::vector<rpg::BattlerAnimationExtension>> static_weapon_data(
	&rpg::BattlerAnimation::weapon_data,
	LDB_Reader::ChunkBattlerAnimation::weapon_data,
	"weapon_data",
	1,
	0
);


template <>
Field<rpg::BattlerAnimation> const* Struct<rpg::BattlerAnimation>::fields[] = {
	&static_name,
	&static_speed,
	&static_base_data,
	&static_weapon_data,
	NULL
};

template class Struct<rpg::BattlerAnimation>;

} //namespace lcf
