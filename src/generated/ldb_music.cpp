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

// Read Music.

template <>
char const* const Struct<RPG::Music>::name = "Music";
static TypedField<RPG::Music, std::string> static_name(
	&RPG::Music::name,
	LDB_Reader::ChunkMusic::name,
	"name",
	1,
	0
);
static TypedField<RPG::Music, int32_t> static_fadein(
	&RPG::Music::fadein,
	LDB_Reader::ChunkMusic::fadein,
	"fadein",
	0,
	0
);
static TypedField<RPG::Music, int32_t> static_volume(
	&RPG::Music::volume,
	LDB_Reader::ChunkMusic::volume,
	"volume",
	0,
	0
);
static TypedField<RPG::Music, int32_t> static_tempo(
	&RPG::Music::tempo,
	LDB_Reader::ChunkMusic::tempo,
	"tempo",
	0,
	0
);
static TypedField<RPG::Music, int32_t> static_balance(
	&RPG::Music::balance,
	LDB_Reader::ChunkMusic::balance,
	"balance",
	0,
	0
);


template <>
Field<RPG::Music> const* Struct<RPG::Music>::fields[] = {
	&static_name,
	&static_fadein,
	&static_volume,
	&static_tempo,
	&static_balance,
	NULL
};

template class Struct<RPG::Music>;
