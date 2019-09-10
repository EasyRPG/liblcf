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

// Read SavePanorama.

template <>
char const* const Struct<RPG::SavePanorama>::name = "SavePanorama";
static TypedField<RPG::SavePanorama, int32_t> static_pan_x(
	&RPG::SavePanorama::pan_x,
	LSD_Reader::ChunkSavePanorama::pan_x,
	"pan_x",
	0,
	0
);
static TypedField<RPG::SavePanorama, int32_t> static_pan_y(
	&RPG::SavePanorama::pan_y,
	LSD_Reader::ChunkSavePanorama::pan_y,
	"pan_y",
	0,
	0
);


template <>
Field<RPG::SavePanorama> const* Struct<RPG::SavePanorama>::fields[] = {
	&static_pan_x,
	&static_pan_y,
	NULL
};

template class Struct<RPG::SavePanorama>;
