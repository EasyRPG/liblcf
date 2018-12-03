/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
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

// Read SaveCommonEvent.

template <>
char const* const Struct<RPG::SaveCommonEvent>::name = "SaveCommonEvent";

template <>
Field<RPG::SaveCommonEvent> const* Struct<RPG::SaveCommonEvent>::fields[] = {
	new TypedField<RPG::SaveCommonEvent, RPG::SaveEventData>(
		&RPG::SaveCommonEvent::event_data,
		LSD_Reader::ChunkSaveCommonEvent::event_data,
		"event_data",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SaveCommonEvent>;
