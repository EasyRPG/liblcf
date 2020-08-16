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

// Read BattlerAnimationExtension.

template <>
char const* const Struct<rpg::BattlerAnimationExtension>::name = "BattlerAnimationExtension";
static TypedField<rpg::BattlerAnimationExtension, DBString> static_name(
	&rpg::BattlerAnimationExtension::name,
	LDB_Reader::ChunkBattlerAnimationExtension::name,
	"name",
	0,
	0
);
static TypedField<rpg::BattlerAnimationExtension, DBString> static_battler_name(
	&rpg::BattlerAnimationExtension::battler_name,
	LDB_Reader::ChunkBattlerAnimationExtension::battler_name,
	"battler_name",
	0,
	0
);
static TypedField<rpg::BattlerAnimationExtension, int32_t> static_battler_index(
	&rpg::BattlerAnimationExtension::battler_index,
	LDB_Reader::ChunkBattlerAnimationExtension::battler_index,
	"battler_index",
	0,
	0
);
static TypedField<rpg::BattlerAnimationExtension, int32_t> static_animation_type(
	&rpg::BattlerAnimationExtension::animation_type,
	LDB_Reader::ChunkBattlerAnimationExtension::animation_type,
	"animation_type",
	0,
	0
);
static TypedField<rpg::BattlerAnimationExtension, int32_t> static_animation_id(
	&rpg::BattlerAnimationExtension::animation_id,
	LDB_Reader::ChunkBattlerAnimationExtension::animation_id,
	"animation_id",
	0,
	0
);


template <>
Field<rpg::BattlerAnimationExtension> const* Struct<rpg::BattlerAnimationExtension>::fields[] = {
	&static_name,
	&static_battler_name,
	&static_battler_index,
	&static_animation_type,
	&static_animation_id,
	NULL
};

template class Struct<rpg::BattlerAnimationExtension>;

} //namespace lcf
