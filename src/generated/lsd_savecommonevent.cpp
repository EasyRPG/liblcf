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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read SaveCommonEvent.

template <>
char const* const Struct<RPG::SaveCommonEvent>::name = "SaveCommonEvent";
static TypedField<RPG::SaveCommonEvent, RPG::SaveEventExecState> static_parallel_event_execstate(
	&RPG::SaveCommonEvent::parallel_event_execstate,
	LSD_Reader::ChunkSaveCommonEvent::parallel_event_execstate,
	"parallel_event_execstate",
	1,
	0
);


template <>
Field<RPG::SaveCommonEvent> const* Struct<RPG::SaveCommonEvent>::fields[] = {
	&static_parallel_event_execstate,
	NULL
};

template class Struct<RPG::SaveCommonEvent>;
