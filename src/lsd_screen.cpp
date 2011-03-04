/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "rpg_save.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Saved Screen Appearance
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::SaveScreen>* Struct<RPG::SaveScreen>::ID_reader = new IDReaderT<RPG::SaveScreen, NoID>();

template <>
const Field<RPG::SaveScreen>* Struct<RPG::SaveScreen>::fields[] = {
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::tint_finish_red,			LSD_Reader::ChunkScreen::tint_finish_red,		"tint_finish_red"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::tint_finish_green,		LSD_Reader::ChunkScreen::tint_finish_green,		"tint_finish_green"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::tint_finish_blue,		LSD_Reader::ChunkScreen::tint_finish_blue,		"tint_finish_blue"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::tint_finish_sat,			LSD_Reader::ChunkScreen::tint_finish_sat,		"tint_finish_sat"		),
	new TypedField<RPG::SaveScreen, double>	(&RPG::SaveScreen::tint_current_red,		LSD_Reader::ChunkScreen::tint_current_red,		"tint_current_red"		),
	new TypedField<RPG::SaveScreen, double>	(&RPG::SaveScreen::tint_current_green,		LSD_Reader::ChunkScreen::tint_current_green,	"tint_current_green"	),
	new TypedField<RPG::SaveScreen, double>	(&RPG::SaveScreen::tint_current_blue,		LSD_Reader::ChunkScreen::tint_current_blue,		"tint_current_blue"		),
	new TypedField<RPG::SaveScreen, double>	(&RPG::SaveScreen::tint_current_sat,		LSD_Reader::ChunkScreen::tint_current_sat,		"tint_current_sat"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::tint_time_left,			LSD_Reader::ChunkScreen::tint_time_left,		"tint_time_left"		),
	new TypedField<RPG::SaveScreen, bool>	(&RPG::SaveScreen::flash_continuous,		LSD_Reader::ChunkScreen::flash_continuous,		"flash_continuous"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::flash_red,				LSD_Reader::ChunkScreen::flash_red,				"flash_red"				),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::flash_green,				LSD_Reader::ChunkScreen::flash_green,			"flash_green"			),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::flash_blue,				LSD_Reader::ChunkScreen::flash_blue,			"flash_blue"			),
	new TypedField<RPG::SaveScreen, double>	(&RPG::SaveScreen::flash_current_level,		LSD_Reader::ChunkScreen::flash_current_level,	"flash_current_level"	),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::flash_time_left,			LSD_Reader::ChunkScreen::flash_time_left,		"flash_time_left"		),
	new TypedField<RPG::SaveScreen, bool>	(&RPG::SaveScreen::shake_continuous,		LSD_Reader::ChunkScreen::shake_continuous,		"shake_continuous"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::shake_strength,			LSD_Reader::ChunkScreen::shake_strength,		"shake_strength"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::shake_speed,				LSD_Reader::ChunkScreen::shake_speed,			"shake_speed"			),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::shake_position,			LSD_Reader::ChunkScreen::shake_position,		"shake_position"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::shake_time_left,			LSD_Reader::ChunkScreen::shake_time_left,		"shake_time_left"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::pan_x,					LSD_Reader::ChunkScreen::pan_x,					"pan_x"					),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::pan_y,					LSD_Reader::ChunkScreen::pan_y,					"pan_y"					),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::battleanim_id,			LSD_Reader::ChunkScreen::battleanim_id,			"battleanim_id"			),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::battleanim_target,		LSD_Reader::ChunkScreen::battleanim_target,		"battleanim_target"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::battleanim_unk_2d,		LSD_Reader::ChunkScreen::battleanim_unk_2d,		"battleanim_unk_2d"		),
	new TypedField<RPG::SaveScreen, bool>	(&RPG::SaveScreen::battleanim_global,		LSD_Reader::ChunkScreen::battleanim_global,		"battleanim_global"		),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::weather,					LSD_Reader::ChunkScreen::weather,				"weather"				),
	new TypedField<RPG::SaveScreen, int>	(&RPG::SaveScreen::weather_strength,		LSD_Reader::ChunkScreen::weather_strength,		"weather_strength"		),
	NULL
};
