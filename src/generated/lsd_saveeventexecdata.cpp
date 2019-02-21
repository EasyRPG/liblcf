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

// Read SaveEventExecData.

template <>
char const* const Struct<RPG::SaveEventExecData>::name = "SaveEventExecData";

template <>
Field<RPG::SaveEventExecData> const* Struct<RPG::SaveEventExecData>::fields[] = {
	new TypedField<RPG::SaveEventExecData, std::vector<RPG::SaveEventExecFrame>>(
		&RPG::SaveEventExecData::command_stack,
		LSD_Reader::ChunkSaveEventExecData::command_stack,
		"command_stack",
		1,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::show_message,
		LSD_Reader::ChunkSaveEventExecData::show_message,
		"show_message",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::abort_on_escape,
		LSD_Reader::ChunkSaveEventExecData::abort_on_escape,
		"abort_on_escape",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::wait_movement,
		LSD_Reader::ChunkSaveEventExecData::wait_movement,
		"wait_movement",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_wait,
		LSD_Reader::ChunkSaveEventExecData::keyinput_wait,
		"keyinput_wait",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, uint8_t>(
		&RPG::SaveEventExecData::keyinput_variable,
		LSD_Reader::ChunkSaveEventExecData::keyinput_variable,
		"keyinput_variable",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_all_directions,
		LSD_Reader::ChunkSaveEventExecData::keyinput_all_directions,
		"keyinput_all_directions",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_decision,
		LSD_Reader::ChunkSaveEventExecData::keyinput_decision,
		"keyinput_decision",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_cancel,
		LSD_Reader::ChunkSaveEventExecData::keyinput_cancel,
		"keyinput_cancel",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_numbers,
		LSD_Reader::ChunkSaveEventExecData::keyinput_numbers,
		"keyinput_numbers",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_operators,
		LSD_Reader::ChunkSaveEventExecData::keyinput_operators,
		"keyinput_operators",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_shift,
		LSD_Reader::ChunkSaveEventExecData::keyinput_shift,
		"keyinput_shift",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_value_right,
		LSD_Reader::ChunkSaveEventExecData::keyinput_value_right,
		"keyinput_value_right",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_value_up,
		LSD_Reader::ChunkSaveEventExecData::keyinput_value_up,
		"keyinput_value_up",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, int32_t>(
		&RPG::SaveEventExecData::wait_time,
		LSD_Reader::ChunkSaveEventExecData::wait_time,
		"wait_time",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, int32_t>(
		&RPG::SaveEventExecData::keyinput_time_variable,
		LSD_Reader::ChunkSaveEventExecData::keyinput_time_variable,
		"keyinput_time_variable",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_down,
		LSD_Reader::ChunkSaveEventExecData::keyinput_down,
		"keyinput_down",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_left,
		LSD_Reader::ChunkSaveEventExecData::keyinput_left,
		"keyinput_left",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_right,
		LSD_Reader::ChunkSaveEventExecData::keyinput_right,
		"keyinput_right",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_up,
		LSD_Reader::ChunkSaveEventExecData::keyinput_up,
		"keyinput_up",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::keyinput_timed,
		LSD_Reader::ChunkSaveEventExecData::keyinput_timed,
		"keyinput_timed",
		0,
		0
	),
	new TypedField<RPG::SaveEventExecData, bool>(
		&RPG::SaveEventExecData::unused_wait_for_key_or_enter,
		LSD_Reader::ChunkSaveEventExecData::unused_wait_for_key_or_enter,
		"unused_wait_for_key_or_enter",
		0,
		0
	),
	NULL
};

template class Struct<RPG::SaveEventExecData>;
