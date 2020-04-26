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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read SaveTitle.

template <>
char const* const Struct<RPG::SaveTitle>::name = "SaveTitle";
static TypedField<RPG::SaveTitle, double> static_timestamp(
	&RPG::SaveTitle::timestamp,
	LSD_Reader::ChunkSaveTitle::timestamp,
	"timestamp",
	0,
	0
);
static TypedField<RPG::SaveTitle, std::string> static_hero_name(
	&RPG::SaveTitle::hero_name,
	LSD_Reader::ChunkSaveTitle::hero_name,
	"hero_name",
	0,
	0
);
static TypedField<RPG::SaveTitle, int32_t> static_hero_level(
	&RPG::SaveTitle::hero_level,
	LSD_Reader::ChunkSaveTitle::hero_level,
	"hero_level",
	0,
	0
);
static TypedField<RPG::SaveTitle, int32_t> static_hero_hp(
	&RPG::SaveTitle::hero_hp,
	LSD_Reader::ChunkSaveTitle::hero_hp,
	"hero_hp",
	0,
	0
);
static TypedField<RPG::SaveTitle, std::string> static_face1_name(
	&RPG::SaveTitle::face1_name,
	LSD_Reader::ChunkSaveTitle::face1_name,
	"face1_name",
	0,
	0
);
static TypedField<RPG::SaveTitle, int32_t> static_face1_id(
	&RPG::SaveTitle::face1_id,
	LSD_Reader::ChunkSaveTitle::face1_id,
	"face1_id",
	0,
	0
);
static TypedField<RPG::SaveTitle, std::string> static_face2_name(
	&RPG::SaveTitle::face2_name,
	LSD_Reader::ChunkSaveTitle::face2_name,
	"face2_name",
	0,
	0
);
static TypedField<RPG::SaveTitle, int32_t> static_face2_id(
	&RPG::SaveTitle::face2_id,
	LSD_Reader::ChunkSaveTitle::face2_id,
	"face2_id",
	0,
	0
);
static TypedField<RPG::SaveTitle, std::string> static_face3_name(
	&RPG::SaveTitle::face3_name,
	LSD_Reader::ChunkSaveTitle::face3_name,
	"face3_name",
	0,
	0
);
static TypedField<RPG::SaveTitle, int32_t> static_face3_id(
	&RPG::SaveTitle::face3_id,
	LSD_Reader::ChunkSaveTitle::face3_id,
	"face3_id",
	0,
	0
);
static TypedField<RPG::SaveTitle, std::string> static_face4_name(
	&RPG::SaveTitle::face4_name,
	LSD_Reader::ChunkSaveTitle::face4_name,
	"face4_name",
	0,
	0
);
static TypedField<RPG::SaveTitle, int32_t> static_face4_id(
	&RPG::SaveTitle::face4_id,
	LSD_Reader::ChunkSaveTitle::face4_id,
	"face4_id",
	0,
	0
);


template <>
Field<RPG::SaveTitle> const* Struct<RPG::SaveTitle>::fields[] = {
	&static_timestamp,
	&static_hero_name,
	&static_hero_level,
	&static_hero_hp,
	&static_face1_name,
	&static_face1_id,
	&static_face2_name,
	&static_face2_id,
	&static_face3_name,
	&static_face3_id,
	&static_face4_name,
	&static_face4_id,
	NULL
};

template class Struct<RPG::SaveTitle>;
