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

// Read SaveTarget.

template <>
char const* const Struct<RPG::SaveTarget>::name = "SaveTarget";
static TypedField<RPG::SaveTarget, int32_t> static_map_id(
	&RPG::SaveTarget::map_id,
	LSD_Reader::ChunkSaveTarget::map_id,
	"map_id",
	0,
	0
);
static TypedField<RPG::SaveTarget, int32_t> static_map_x(
	&RPG::SaveTarget::map_x,
	LSD_Reader::ChunkSaveTarget::map_x,
	"map_x",
	0,
	0
);
static TypedField<RPG::SaveTarget, int32_t> static_map_y(
	&RPG::SaveTarget::map_y,
	LSD_Reader::ChunkSaveTarget::map_y,
	"map_y",
	0,
	0
);
static TypedField<RPG::SaveTarget, bool> static_switch_on(
	&RPG::SaveTarget::switch_on,
	LSD_Reader::ChunkSaveTarget::switch_on,
	"switch_on",
	0,
	0
);
static TypedField<RPG::SaveTarget, int32_t> static_switch_id(
	&RPG::SaveTarget::switch_id,
	LSD_Reader::ChunkSaveTarget::switch_id,
	"switch_id",
	0,
	0
);


template <>
Field<RPG::SaveTarget> const* Struct<RPG::SaveTarget>::fields[] = {
	&static_map_id,
	&static_map_x,
	&static_map_y,
	&static_switch_on,
	&static_switch_id,
	NULL
};

template class Struct<RPG::SaveTarget>;
