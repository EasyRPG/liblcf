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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct_impl.h"

// Read Sound.

template <>
char const* const Struct<RPG::Sound>::name = "Sound";

template <>
Field<RPG::Sound> const* Struct<RPG::Sound>::fields[] = {
	new TypedField<RPG::Sound, std::string>(
		&RPG::Sound::name,
		LDB_Reader::ChunkSound::name,
		"name",
		1,
		0
	),
	new TypedField<RPG::Sound, int32_t>(
		&RPG::Sound::volume,
		LDB_Reader::ChunkSound::volume,
		"volume",
		0,
		0
	),
	new TypedField<RPG::Sound, int32_t>(
		&RPG::Sound::tempo,
		LDB_Reader::ChunkSound::tempo,
		"tempo",
		0,
		0
	),
	new TypedField<RPG::Sound, int32_t>(
		&RPG::Sound::balance,
		LDB_Reader::ChunkSound::balance,
		"balance",
		0,
		0
	),
	NULL
};

template class Struct<RPG::Sound>;
