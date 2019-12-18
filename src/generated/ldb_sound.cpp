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
static TypedField<RPG::Sound, std::string> static_name(
	&RPG::Sound::name,
	LDB_Reader::ChunkSound::name,
	"name",
	1,
	0
);
static TypedField<RPG::Sound, int32_t> static_volume(
	&RPG::Sound::volume,
	LDB_Reader::ChunkSound::volume,
	"volume",
	0,
	0
);
static TypedField<RPG::Sound, int32_t> static_tempo(
	&RPG::Sound::tempo,
	LDB_Reader::ChunkSound::tempo,
	"tempo",
	0,
	0
);
static TypedField<RPG::Sound, int32_t> static_balance(
	&RPG::Sound::balance,
	LDB_Reader::ChunkSound::balance,
	"balance",
	0,
	0
);


template <>
Field<RPG::Sound> const* Struct<RPG::Sound>::fields[] = {
	&static_name,
	&static_volume,
	&static_tempo,
	&static_balance,
	NULL
};

template class Struct<RPG::Sound>;
