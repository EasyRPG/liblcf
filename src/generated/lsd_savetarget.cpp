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

template <>
Field<RPG::SaveTarget> const* Struct<RPG::SaveTarget>::fields[] = {
	new TypedField<RPG::SaveTarget, int32_t>(
		&RPG::SaveTarget::map_id,
		LSD_Reader::ChunkSaveTarget::map_id,
		"map_id",
		0,
		0
	),
	new TypedField<RPG::SaveTarget, int32_t>(
		&RPG::SaveTarget::map_x,
		LSD_Reader::ChunkSaveTarget::map_x,
		"map_x",
		0,
		0
	),
	new TypedField<RPG::SaveTarget, int32_t>(
		&RPG::SaveTarget::map_y,
		LSD_Reader::ChunkSaveTarget::map_y,
		"map_y",
		0,
		0
	),
	new TypedField<RPG::SaveTarget, bool>(
		&RPG::SaveTarget::switch_on,
		LSD_Reader::ChunkSaveTarget::switch_on,
		"switch_on",
		0,
		0
	),
	new TypedField<RPG::SaveTarget, int32_t>(
		&RPG::SaveTarget::switch_id,
		LSD_Reader::ChunkSaveTarget::switch_id,
		"switch_id",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SaveTarget>;
