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

// Read SaveEventExecFrame.

template <>
char const* const Struct<RPG::SaveEventExecFrame>::name = "SaveEventExecFrame";
static SizeField<RPG::SaveEventExecFrame, RPG::EventCommand> static_size_commands(
	&RPG::SaveEventExecFrame::commands,
	LSD_Reader::ChunkSaveEventExecFrame::commands_size,
	1,
	0
);
static TypedField<RPG::SaveEventExecFrame, std::vector<RPG::EventCommand>> static_commands(
	&RPG::SaveEventExecFrame::commands,
	LSD_Reader::ChunkSaveEventExecFrame::commands,
	"commands",
	1,
	0
);
static TypedField<RPG::SaveEventExecFrame, int32_t> static_current_command(
	&RPG::SaveEventExecFrame::current_command,
	LSD_Reader::ChunkSaveEventExecFrame::current_command,
	"current_command",
	0,
	0
);
static TypedField<RPG::SaveEventExecFrame, int32_t> static_event_id(
	&RPG::SaveEventExecFrame::event_id,
	LSD_Reader::ChunkSaveEventExecFrame::event_id,
	"event_id",
	0,
	0
);
static TypedField<RPG::SaveEventExecFrame, bool> static_triggered_by_decision_key(
	&RPG::SaveEventExecFrame::triggered_by_decision_key,
	LSD_Reader::ChunkSaveEventExecFrame::triggered_by_decision_key,
	"triggered_by_decision_key",
	0,
	0
);
static SizeField<RPG::SaveEventExecFrame, uint8_t> static_size_subcommand_path(
	&RPG::SaveEventExecFrame::subcommand_path,
	LSD_Reader::ChunkSaveEventExecFrame::subcommand_path_size,
	0,
	0
);
static TypedField<RPG::SaveEventExecFrame, std::vector<uint8_t>> static_subcommand_path(
	&RPG::SaveEventExecFrame::subcommand_path,
	LSD_Reader::ChunkSaveEventExecFrame::subcommand_path,
	"subcommand_path",
	1,
	0
);


template <>
Field<RPG::SaveEventExecFrame> const* Struct<RPG::SaveEventExecFrame>::fields[] = {
	&static_size_commands,
	&static_commands,
	&static_current_command,
	&static_event_id,
	&static_triggered_by_decision_key,
	&static_size_subcommand_path,
	&static_subcommand_path,
	NULL
};

template class Struct<RPG::SaveEventExecFrame>;
