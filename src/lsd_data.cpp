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
#include "ldb_reader.h"
#include "rpg_save.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Save System
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::SaveSystem>* Struct<RPG::SaveSystem>::ID_reader = new IDReaderT<RPG::SaveSystem, NoID>();

template <>
char const* const Struct<RPG::SaveSystem>::name("SaveSystem");

template <>
const Field<RPG::SaveSystem>* Struct<RPG::SaveSystem>::fields[] = {
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::screen,					LSD_Reader::ChunkSystem::screen,					"screen"				),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::frame_count,				LSD_Reader::ChunkSystem::frame_count,				"frame_count"			),
	new TypedField<RPG::SaveSystem, std::string>			(&RPG::SaveSystem::graphics_name,			LSD_Reader::ChunkSystem::graphics_name,				"graphics_name"			),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::switches_size,			LSD_Reader::ChunkSystem::switches_size,				"switches_size"			),
	new TypedField<RPG::SaveSystem, std::vector<bool> >		(&RPG::SaveSystem::switches,				LSD_Reader::ChunkSystem::switches,					"switches"				),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::variables_size,			LSD_Reader::ChunkSystem::variables_size,			"variables_size"		),
	new TypedField<RPG::SaveSystem, std::vector<uint32_t> >	(&RPG::SaveSystem::variables,				LSD_Reader::ChunkSystem::variables,					"variables"				),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::message_transparent,		LSD_Reader::ChunkSystem::message_transparent,		"message_transparent"	),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::message_position,		LSD_Reader::ChunkSystem::message_position,			"message_position"		),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::message_placement,		LSD_Reader::ChunkSystem::message_placement,			"message_placement"		),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::message_continue,		LSD_Reader::ChunkSystem::message_continue,			"message_continue"		),
	new TypedField<RPG::SaveSystem, std::string>			(&RPG::SaveSystem::face_name,				LSD_Reader::ChunkSystem::face_name,					"face_name"				),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::face_id,					LSD_Reader::ChunkSystem::face_id,					"face_id"				),
	new TypedField<RPG::SaveSystem, bool>					(&RPG::SaveSystem::face_right,				LSD_Reader::ChunkSystem::face_right,				"face_right"			),
	new TypedField<RPG::SaveSystem, bool>					(&RPG::SaveSystem::face_flip,				LSD_Reader::ChunkSystem::face_flip,					"face_flip"				),
	new TypedField<RPG::SaveSystem, bool>					(&RPG::SaveSystem::transparent,				LSD_Reader::ChunkSystem::transparent,				"transparent"			),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::unknown_3d,				LSD_Reader::ChunkSystem::unknown_3d,				"unknown_3d"			),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::title_music,				LSD_Reader::ChunkSystem::title_music,				"title_music"			),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::battle_music,			LSD_Reader::ChunkSystem::battle_music,				"battle_music"			),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::battle_end_music,		LSD_Reader::ChunkSystem::battle_end_music,			"battle_end_music"		),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::inn_music,				LSD_Reader::ChunkSystem::inn_music,					"inn_music"				),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::current_music,			LSD_Reader::ChunkSystem::current_music,				"current_music"			),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::unknown1_music,			LSD_Reader::ChunkSystem::unknown1_music,			"unknown1_music"		),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::unknown2_music,			LSD_Reader::ChunkSystem::unknown2_music,			"unknown2_music"		),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::stored_music,			LSD_Reader::ChunkSystem::stored_music,				"stored_music"			),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::boat_music,				LSD_Reader::ChunkSystem::boat_music,				"boat_music"			),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::ship_music,				LSD_Reader::ChunkSystem::ship_music,				"ship_music"			),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::airship_music,			LSD_Reader::ChunkSystem::airship_music,				"airship_music"			),
	new TypedField<RPG::SaveSystem, RPG::Music>				(&RPG::SaveSystem::gameover_music,			LSD_Reader::ChunkSystem::gameover_music,			"gameover_music"		),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::cursor_se,				LSD_Reader::ChunkSystem::cursor_se,					"cursor_se"				),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::decision_se,				LSD_Reader::ChunkSystem::decision_se,				"decision_se"			),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::cancel_se,				LSD_Reader::ChunkSystem::cancel_se,					"cancel_se"				),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::buzzer_se,				LSD_Reader::ChunkSystem::buzzer_se,					"buzzer_se"				),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::battle_se,				LSD_Reader::ChunkSystem::battle_se,					"battle_se"				),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::escape_se,				LSD_Reader::ChunkSystem::escape_se,					"escape_se"				),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::enemy_attack_se,			LSD_Reader::ChunkSystem::enemy_attack_se,			"enemy_attack_se"		),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::enemy_damaged_se,		LSD_Reader::ChunkSystem::enemy_damaged_se,			"enemy_damaged_se"		),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::actor_damaged_se,		LSD_Reader::ChunkSystem::actor_damaged_se,			"actor_damaged_se"		),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::dodge_se,				LSD_Reader::ChunkSystem::dodge_se,					"dodge_se"				),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::enemy_death_se,			LSD_Reader::ChunkSystem::enemy_death_se,			"enemy_death_se"		),
	new TypedField<RPG::SaveSystem, RPG::Sound>				(&RPG::SaveSystem::item_se,					LSD_Reader::ChunkSystem::item_se,					"item_se"				),
	new TypedField<RPG::SaveSystem, uint8_t>				(&RPG::SaveSystem::transition_out,			LSD_Reader::ChunkSystem::transition_out,			"transition_out"		),
	new TypedField<RPG::SaveSystem, uint8_t>				(&RPG::SaveSystem::transition_in,			LSD_Reader::ChunkSystem::transition_in,				"transition_in"			),
	new TypedField<RPG::SaveSystem, uint8_t>				(&RPG::SaveSystem::battle_start_fadeout,	LSD_Reader::ChunkSystem::battle_start_fadeout,		"battle_start_fadeout"	),
	new TypedField<RPG::SaveSystem, uint8_t>				(&RPG::SaveSystem::battle_start_fadein,		LSD_Reader::ChunkSystem::battle_start_fadein,		"battle_start_fadein"	),
	new TypedField<RPG::SaveSystem, uint8_t>				(&RPG::SaveSystem::battle_end_fadeout,		LSD_Reader::ChunkSystem::battle_end_fadeout,		"battle_end_fadeout"	),
	new TypedField<RPG::SaveSystem, uint8_t>				(&RPG::SaveSystem::battle_end_fadein,		LSD_Reader::ChunkSystem::battle_end_fadein,			"battle_end_fadein"		),
	new TypedField<RPG::SaveSystem, bool>					(&RPG::SaveSystem::teleport_allowed,		LSD_Reader::ChunkSystem::teleport_allowed,			"teleport_allowed"		),
	new TypedField<RPG::SaveSystem, bool>					(&RPG::SaveSystem::escape_allowed,			LSD_Reader::ChunkSystem::escape_allowed,			"escape_allowed"		),
	new TypedField<RPG::SaveSystem, bool>					(&RPG::SaveSystem::save_allowed,			LSD_Reader::ChunkSystem::save_allowed,				"save_allowed"			),
	new TypedField<RPG::SaveSystem, bool>					(&RPG::SaveSystem::menu_allowed,			LSD_Reader::ChunkSystem::menu_allowed,				"menu_allowed"			),
	new TypedField<RPG::SaveSystem, std::string>			(&RPG::SaveSystem::background,				LSD_Reader::ChunkSystem::background,				"background"			),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::save_count,				LSD_Reader::ChunkSystem::save_count,				"save_count"			),
	new TypedField<RPG::SaveSystem, int>					(&RPG::SaveSystem::save_slot,				LSD_Reader::ChunkSystem::save_slot,					"save_slot"				),
	NULL
};
