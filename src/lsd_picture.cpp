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
/// Read Save Cover
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::SavePicture>* Struct<RPG::SavePicture>::ID_reader = new IDReaderT<RPG::SavePicture, WithID>();

template <>
char const* const Struct<RPG::SavePicture>::name("SavePicture");

template <>
const Field<RPG::SavePicture>* Struct<RPG::SavePicture>::fields[] = {
	new TypedField<RPG::SavePicture, std::string>	(&RPG::SavePicture::name,					LSD_Reader::ChunkPicture::name,					"name"				),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::start_x,				LSD_Reader::ChunkPicture::start_x,				"start_x"			),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::start_y,				LSD_Reader::ChunkPicture::start_y,				"start_y"			),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_x,				LSD_Reader::ChunkPicture::current_x,			"current_x"			),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_y,				LSD_Reader::ChunkPicture::current_y,			"current_y"			),
	new TypedField<RPG::SavePicture, bool>			(&RPG::SavePicture::picture_scrolls,		LSD_Reader::ChunkPicture::picture_scrolls,		"picture_scrolls"	),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_magnify,		LSD_Reader::ChunkPicture::current_magnify,		"current_magnify"	),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_top_trans,		LSD_Reader::ChunkPicture::current_top_trans,	"current_top_trans"	),
	new TypedField<RPG::SavePicture, bool>			(&RPG::SavePicture::transparency,			LSD_Reader::ChunkPicture::transparency,			"transparency"		),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_red,			LSD_Reader::ChunkPicture::current_red,			"current_red"		),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_green,			LSD_Reader::ChunkPicture::current_green,		"current_green"		),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_blue,			LSD_Reader::ChunkPicture::current_blue,			"current_blue"		),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_sat,			LSD_Reader::ChunkPicture::current_sat,			"current_sat"		),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::effect_mode,			LSD_Reader::ChunkPicture::effect_mode,			"effect_mode"		),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::effect_speed,			LSD_Reader::ChunkPicture::effect_speed,			"effect_speed"		),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_bot_trans,		LSD_Reader::ChunkPicture::current_bot_trans,	"current_bot_trans"	),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::finish_x,				LSD_Reader::ChunkPicture::finish_x,				"finish_x"			),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::finish_y,				LSD_Reader::ChunkPicture::finish_y,				"finish_y"			),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::finish_magnify,			LSD_Reader::ChunkPicture::finish_magnify,		"finish_magnify"	),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::finish_top_trans,		LSD_Reader::ChunkPicture::finish_top_trans,		"finish_top_trans"	),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::finish_bot_trans,		LSD_Reader::ChunkPicture::finish_bot_trans,		"finish_bot_trans"	),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::finish_red,				LSD_Reader::ChunkPicture::finish_red,			"finish_red"		),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::finish_green,			LSD_Reader::ChunkPicture::finish_green,			"finish_green"		),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::finish_blue,			LSD_Reader::ChunkPicture::finish_blue,			"finish_blue"		),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::finish_sat,				LSD_Reader::ChunkPicture::finish_sat,			"finish_sat"		),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::effect2_speed,			LSD_Reader::ChunkPicture::effect2_speed,		"effect2_speed"		),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::time_left,				LSD_Reader::ChunkPicture::time_left,			"time_left"			),
	new TypedField<RPG::SavePicture, double>		(&RPG::SavePicture::current_rotation,		LSD_Reader::ChunkPicture::current_rotation,		"current_rotation"	),
	new TypedField<RPG::SavePicture, int>			(&RPG::SavePicture::current_waver,			LSD_Reader::ChunkPicture::current_waver,		"current_waver"		),
	NULL
};
