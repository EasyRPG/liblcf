/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
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

template <>
Field<RPG::SaveTitle> const* Struct<RPG::SaveTitle>::fields[] = {
	new TypedField<RPG::SaveTitle, double>(
		&RPG::SaveTitle::timestamp,
		LSD_Reader::ChunkSaveTitle::timestamp,
		"timestamp",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::hero_name,
		LSD_Reader::ChunkSaveTitle::hero_name,
		"hero_name",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::hero_level,
		LSD_Reader::ChunkSaveTitle::hero_level,
		"hero_level",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::hero_hp,
		LSD_Reader::ChunkSaveTitle::hero_hp,
		"hero_hp",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::face1_name,
		LSD_Reader::ChunkSaveTitle::face1_name,
		"face1_name",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::face1_id,
		LSD_Reader::ChunkSaveTitle::face1_id,
		"face1_id",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::face2_name,
		LSD_Reader::ChunkSaveTitle::face2_name,
		"face2_name",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::face2_id,
		LSD_Reader::ChunkSaveTitle::face2_id,
		"face2_id",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::face3_name,
		LSD_Reader::ChunkSaveTitle::face3_name,
		"face3_name",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::face3_id,
		LSD_Reader::ChunkSaveTitle::face3_id,
		"face3_id",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, std::string>(
		&RPG::SaveTitle::face4_name,
		LSD_Reader::ChunkSaveTitle::face4_name,
		"face4_name",
		0,
		0
	),
	new TypedField<RPG::SaveTitle, int32_t>(
		&RPG::SaveTitle::face4_id,
		LSD_Reader::ChunkSaveTitle::face4_id,
		"face4_id",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SaveTitle>;
