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

// Read SaveEventExecState.

template <>
char const* const Struct<RPG::SaveEventExecState>::name = "SaveEventExecState";
static TypedField<RPG::SaveEventExecState, std::vector<RPG::SaveEventExecFrame>> static_stack(
	&RPG::SaveEventExecState::stack,
	LSD_Reader::ChunkSaveEventExecState::stack,
	"stack",
	1,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_show_message(
	&RPG::SaveEventExecState::show_message,
	LSD_Reader::ChunkSaveEventExecState::show_message,
	"show_message",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_abort_on_escape(
	&RPG::SaveEventExecState::abort_on_escape,
	LSD_Reader::ChunkSaveEventExecState::abort_on_escape,
	"abort_on_escape",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_wait_movement(
	&RPG::SaveEventExecState::wait_movement,
	LSD_Reader::ChunkSaveEventExecState::wait_movement,
	"wait_movement",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_wait(
	&RPG::SaveEventExecState::keyinput_wait,
	LSD_Reader::ChunkSaveEventExecState::keyinput_wait,
	"keyinput_wait",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, uint8_t> static_keyinput_variable(
	&RPG::SaveEventExecState::keyinput_variable,
	LSD_Reader::ChunkSaveEventExecState::keyinput_variable,
	"keyinput_variable",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_all_directions(
	&RPG::SaveEventExecState::keyinput_all_directions,
	LSD_Reader::ChunkSaveEventExecState::keyinput_all_directions,
	"keyinput_all_directions",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_decision(
	&RPG::SaveEventExecState::keyinput_decision,
	LSD_Reader::ChunkSaveEventExecState::keyinput_decision,
	"keyinput_decision",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_cancel(
	&RPG::SaveEventExecState::keyinput_cancel,
	LSD_Reader::ChunkSaveEventExecState::keyinput_cancel,
	"keyinput_cancel",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2kshift_2k3numbers(
	&RPG::SaveEventExecState::keyinput_2kshift_2k3numbers,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2kshift_2k3numbers,
	"keyinput_2kshift_2k3numbers",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2kdown_2k3operators(
	&RPG::SaveEventExecState::keyinput_2kdown_2k3operators,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2kdown_2k3operators,
	"keyinput_2kdown_2k3operators",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2kleft_2k3shift(
	&RPG::SaveEventExecState::keyinput_2kleft_2k3shift,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2kleft_2k3shift,
	"keyinput_2kleft_2k3shift",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2kright(
	&RPG::SaveEventExecState::keyinput_2kright,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2kright,
	"keyinput_2kright",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2kup(
	&RPG::SaveEventExecState::keyinput_2kup,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2kup,
	"keyinput_2kup",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, int32_t> static_wait_time(
	&RPG::SaveEventExecState::wait_time,
	LSD_Reader::ChunkSaveEventExecState::wait_time,
	"wait_time",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, int32_t> static_keyinput_time_variable(
	&RPG::SaveEventExecState::keyinput_time_variable,
	LSD_Reader::ChunkSaveEventExecState::keyinput_time_variable,
	"keyinput_time_variable",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2k3down(
	&RPG::SaveEventExecState::keyinput_2k3down,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2k3down,
	"keyinput_2k3down",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2k3left(
	&RPG::SaveEventExecState::keyinput_2k3left,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2k3left,
	"keyinput_2k3left",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2k3right(
	&RPG::SaveEventExecState::keyinput_2k3right,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2k3right,
	"keyinput_2k3right",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_2k3up(
	&RPG::SaveEventExecState::keyinput_2k3up,
	LSD_Reader::ChunkSaveEventExecState::keyinput_2k3up,
	"keyinput_2k3up",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_keyinput_timed(
	&RPG::SaveEventExecState::keyinput_timed,
	LSD_Reader::ChunkSaveEventExecState::keyinput_timed,
	"keyinput_timed",
	0,
	0
);
static TypedField<RPG::SaveEventExecState, bool> static_wait_key_enter(
	&RPG::SaveEventExecState::wait_key_enter,
	LSD_Reader::ChunkSaveEventExecState::wait_key_enter,
	"wait_key_enter",
	0,
	0
);


template <>
Field<RPG::SaveEventExecState> const* Struct<RPG::SaveEventExecState>::fields[] = {
	&static_stack,
	&static_show_message,
	&static_abort_on_escape,
	&static_wait_movement,
	&static_keyinput_wait,
	&static_keyinput_variable,
	&static_keyinput_all_directions,
	&static_keyinput_decision,
	&static_keyinput_cancel,
	&static_keyinput_2kshift_2k3numbers,
	&static_keyinput_2kdown_2k3operators,
	&static_keyinput_2kleft_2k3shift,
	&static_keyinput_2kright,
	&static_keyinput_2kup,
	&static_wait_time,
	&static_keyinput_time_variable,
	&static_keyinput_2k3down,
	&static_keyinput_2k3left,
	&static_keyinput_2k3right,
	&static_keyinput_2k3up,
	&static_keyinput_timed,
	&static_wait_key_enter,
	NULL
};

template class Struct<RPG::SaveEventExecState>;
