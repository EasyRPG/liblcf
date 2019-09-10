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

// Read SaveEasyRpgData.

template <>
char const* const Struct<RPG::SaveEasyRpgData>::name = "SaveEasyRpgData";
static TypedField<RPG::SaveEasyRpgData, int32_t> static_version(
	&RPG::SaveEasyRpgData::version,
	LSD_Reader::ChunkSaveEasyRpgData::version,
	"version",
	0,
	0
);


template <>
Field<RPG::SaveEasyRpgData> const* Struct<RPG::SaveEasyRpgData>::fields[] = {
	&static_version,
	NULL
};

template class Struct<RPG::SaveEasyRpgData>;
