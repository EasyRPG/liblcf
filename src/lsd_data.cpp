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

////////////////////////////////////////////////////////////
/// Read Save Cover
////////////////////////////////////////////////////////////
RPG::SaveSystem LSD_Reader::ReadSaveSystem(Reader& stream) {
	RPG::SaveSystem data;
	Reader::Chunk chunk_info;

	while (!stream.Eof()) {
		chunk_info.ID = stream.ReadInt();
		if (chunk_info.ID == ChunkSave::END) {
			break;
		} else {
			chunk_info.length = stream.ReadInt();
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkSystem::screen:
			data.screen = stream.ReadInt();
			break;
		case ChunkSystem::frame_count:
			data.frame_count = stream.ReadInt();
			break;
		case ChunkSystem::graphics_name:
			data.graphics_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkSystem::switches_size:
			data.switches_size = stream.ReadInt();
			break;
		case ChunkSystem::switches:
			stream.ReadBool(data.switches, chunk_info.length);
			break;
		case ChunkSystem::variables_size:
			data.variables_size = stream.ReadInt();
			break;
		case ChunkSystem::variables:
			stream.Read32(data.variables, chunk_info.length);
			break;
		case ChunkSystem::message_transparent:
			data.message_transparent = stream.ReadInt();
			break;
		case ChunkSystem::message_position:
			data.message_position = stream.ReadInt();
			break;
		case ChunkSystem::message_placement:
			data.message_placement = stream.ReadInt();
			break;
		case ChunkSystem::message_continue:
			data.message_continue = stream.ReadInt();
			break;
		case ChunkSystem::face_name:
			data.face_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkSystem::face_id:
			data.face_id = stream.ReadInt();
			break;
		case ChunkSystem::face_right:
			data.face_right = stream.ReadBool();
			break;
		case ChunkSystem::face_flip:
			data.face_flip = stream.ReadBool();
			break;
		case ChunkSystem::transparent:
			data.transparent = stream.ReadBool();
			break;
		case ChunkSystem::unknown_3d:
			data.unknown_3d = stream.ReadInt();
			break;
		case ChunkSystem::title_music:
			data.title_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::battle_music:
			data.battle_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::battle_end_music:
			data.battle_end_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::inn_music:
			data.inn_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::current_music:
			data.current_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::unknown1_music:
			data.unknown1_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::unknown2_music:
			data.unknown2_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::stored_music:
			data.stored_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::boat_music:
			data.boat_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::ship_music:
			data.ship_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::airship_music:
			data.airship_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::gameover_music:
			data.gameover_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkSystem::cursor_se:
			data.cursor_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::decision_se:
			data.decision_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::cancel_se:
			data.cancel_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::buzzer_se:
			data.buzzer_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::battle_se:
			data.battle_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::escape_se:
			data.escape_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::enemy_attack_se:
			data.enemy_attack_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::enemy_damaged_se:
			data.enemy_damaged_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::actor_damaged_se:
			data.actor_damaged_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::dodge_se:
			data.dodge_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::enemy_death_se:
			data.enemy_death_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::item_se:
			data.item_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkSystem::transition_out:
			data.transition_out = stream.Read8();
			break;
		case ChunkSystem::transition_in:
			data.transition_in = stream.Read8();
			break;
		case ChunkSystem::battle_start_fadeout:
			data.battle_start_fadeout = stream.Read8();
			break;
		case ChunkSystem::battle_start_fadein:
			data.battle_start_fadein = stream.Read8();
			break;
		case ChunkSystem::battle_end_fadeout:
			data.battle_end_fadeout = stream.Read8();
			break;
		case ChunkSystem::battle_end_fadein:
			data.battle_end_fadein = stream.Read8();
			break;
		case ChunkSystem::teleport_allowed:
			data.teleport_allowed = stream.ReadBool();
			break;
		case ChunkSystem::escape_allowed:
			data.escape_allowed = stream.ReadBool();
			break;
		case ChunkSystem::save_allowed:
			data.save_allowed = stream.ReadBool();
			break;
		case ChunkSystem::menu_allowed:
			data.menu_allowed = stream.ReadBool();
			break;
		case ChunkSystem::background:
			data.background = stream.ReadString(chunk_info.length);
			break;
		case ChunkSystem::save_count:
			data.save_count = stream.ReadInt();
			break;
		case ChunkSystem::save_slot:
			data.save_slot = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return data;
}

