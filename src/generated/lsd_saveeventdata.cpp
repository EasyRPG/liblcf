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

// Read SaveEventData.

template <>
char const* const Struct<RPG::SaveEventData>::name = "SaveEventData";

template <>
Field<RPG::SaveEventData> const* Struct<RPG::SaveEventData>::fields[] = {
	new TypedField<RPG::SaveEventData, std::vector<RPG::SaveEventCommands>>(
		&RPG::SaveEventData::commands,
		LSD_Reader::ChunkSaveEventData::commands,
		"commands",
		1,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::show_message,
		LSD_Reader::ChunkSaveEventData::show_message,
		"show_message",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::abort_on_escape,
		LSD_Reader::ChunkSaveEventData::abort_on_escape,
		"abort_on_escape",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::wait_movement,
		LSD_Reader::ChunkSaveEventData::wait_movement,
		"wait_movement",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_wait,
		LSD_Reader::ChunkSaveEventData::keyinput_wait,
		"keyinput_wait",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, uint8_t>(
		&RPG::SaveEventData::keyinput_variable,
		LSD_Reader::ChunkSaveEventData::keyinput_variable,
		"keyinput_variable",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_all_directions,
		LSD_Reader::ChunkSaveEventData::keyinput_all_directions,
		"keyinput_all_directions",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_decision,
		LSD_Reader::ChunkSaveEventData::keyinput_decision,
		"keyinput_decision",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_cancel,
		LSD_Reader::ChunkSaveEventData::keyinput_cancel,
		"keyinput_cancel",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_numbers,
		LSD_Reader::ChunkSaveEventData::keyinput_numbers,
		"keyinput_numbers",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_operators,
		LSD_Reader::ChunkSaveEventData::keyinput_operators,
		"keyinput_operators",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_shift,
		LSD_Reader::ChunkSaveEventData::keyinput_shift,
		"keyinput_shift",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_value_right,
		LSD_Reader::ChunkSaveEventData::keyinput_value_right,
		"keyinput_value_right",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_value_up,
		LSD_Reader::ChunkSaveEventData::keyinput_value_up,
		"keyinput_value_up",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, int32_t>(
		&RPG::SaveEventData::wait_time,
		LSD_Reader::ChunkSaveEventData::wait_time,
		"wait_time",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, int32_t>(
		&RPG::SaveEventData::keyinput_time_variable,
		LSD_Reader::ChunkSaveEventData::keyinput_time_variable,
		"keyinput_time_variable",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_down,
		LSD_Reader::ChunkSaveEventData::keyinput_down,
		"keyinput_down",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_left,
		LSD_Reader::ChunkSaveEventData::keyinput_left,
		"keyinput_left",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_right,
		LSD_Reader::ChunkSaveEventData::keyinput_right,
		"keyinput_right",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_up,
		LSD_Reader::ChunkSaveEventData::keyinput_up,
		"keyinput_up",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::keyinput_timed,
		LSD_Reader::ChunkSaveEventData::keyinput_timed,
		"keyinput_timed",
		0,
		0
	),
	new TypedField<RPG::SaveEventData, bool>(
		&RPG::SaveEventData::unused_wait_for_key_or_enter,
		LSD_Reader::ChunkSaveEventData::unused_wait_for_key_or_enter,
		"unused_wait_for_key_or_enter",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SaveEventData>;
