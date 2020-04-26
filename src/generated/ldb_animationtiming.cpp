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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct_impl.h"

// Read AnimationTiming.

template <>
char const* const Struct<RPG::AnimationTiming>::name = "AnimationTiming";
static TypedField<RPG::AnimationTiming, int32_t> static_frame(
	&RPG::AnimationTiming::frame,
	LDB_Reader::ChunkAnimationTiming::frame,
	"frame",
	0,
	0
);
static TypedField<RPG::AnimationTiming, RPG::Sound> static_se(
	&RPG::AnimationTiming::se,
	LDB_Reader::ChunkAnimationTiming::se,
	"se",
	1,
	0
);
static TypedField<RPG::AnimationTiming, int32_t> static_flash_scope(
	&RPG::AnimationTiming::flash_scope,
	LDB_Reader::ChunkAnimationTiming::flash_scope,
	"flash_scope",
	1,
	0
);
static TypedField<RPG::AnimationTiming, int32_t> static_flash_red(
	&RPG::AnimationTiming::flash_red,
	LDB_Reader::ChunkAnimationTiming::flash_red,
	"flash_red",
	0,
	0
);
static TypedField<RPG::AnimationTiming, int32_t> static_flash_green(
	&RPG::AnimationTiming::flash_green,
	LDB_Reader::ChunkAnimationTiming::flash_green,
	"flash_green",
	0,
	0
);
static TypedField<RPG::AnimationTiming, int32_t> static_flash_blue(
	&RPG::AnimationTiming::flash_blue,
	LDB_Reader::ChunkAnimationTiming::flash_blue,
	"flash_blue",
	0,
	0
);
static TypedField<RPG::AnimationTiming, int32_t> static_flash_power(
	&RPG::AnimationTiming::flash_power,
	LDB_Reader::ChunkAnimationTiming::flash_power,
	"flash_power",
	0,
	0
);
static TypedField<RPG::AnimationTiming, int32_t> static_screen_shake(
	&RPG::AnimationTiming::screen_shake,
	LDB_Reader::ChunkAnimationTiming::screen_shake,
	"screen_shake",
	0,
	0
);


template <>
Field<RPG::AnimationTiming> const* Struct<RPG::AnimationTiming>::fields[] = {
	&static_frame,
	&static_se,
	&static_flash_scope,
	&static_flash_red,
	&static_flash_green,
	&static_flash_blue,
	&static_flash_power,
	&static_screen_shake,
	NULL
};

template class Struct<RPG::AnimationTiming>;
