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
#include "lcf/lsd/reader.h"
#include "lcf/lsd/chunks.h"
#include "reader_struct_impl.h"

namespace lcf {

// Read SaveEasyRpgData.

template <>
char const* const Struct<rpg::SaveEasyRpgData>::name = "SaveEasyRpgData";
static TypedField<rpg::SaveEasyRpgData, int32_t> static_version(
	&rpg::SaveEasyRpgData::version,
	LSD_Reader::ChunkSaveEasyRpgData::version,
	"version",
	0,
	0
);


template <>
Field<rpg::SaveEasyRpgData> const* Struct<rpg::SaveEasyRpgData>::fields[] = {
	&static_version,
	NULL
};

template class Struct<rpg::SaveEasyRpgData>;

} //namespace lcf
