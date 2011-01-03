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
RPG::SaveData LSD_Reader::ReadSaveData(Reader& stream) {
	RPG::SaveData data;
	Reader::Chunk chunk_info;

	while (!stream.Eof()) {
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID == ChunkSave::END) {
			break;
		} else {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkData::screen:
			data.screen = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::frame_count:
			data.frame_count = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::switches_size:
			data.switches_size = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::switches:
			stream.ReadBool(data.switches, chunk_info.length);
			break;
		case ChunkData::variables_size:
			data.variables_size = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::variables:
			stream.Read32(data.variables, chunk_info.length);
			break;
		case ChunkData::message_transparent:
			data.message_transparent = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::message_position:
			data.message_position = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::message_placement:
			data.message_placement = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::message_continue:
			data.message_continue = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::face_name:
			data.face_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkData::face_id:
			data.face_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::transparent:
			data.transparent = stream.ReadBool();
			break;
		case ChunkData::title_music:
			data.title_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::battle_music:
			data.battle_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::battle_end_music:
			data.battle_end_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::inn_music:
			data.inn_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::current_music:
			data.current_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::unknown1_music:
			data.unknown1_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::unknown2_music:
			data.unknown2_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::stored_music:
			data.stored_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::boat_music:
			data.boat_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::ship_music:
			data.ship_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::airship_music:
			data.airship_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::gameover_music:
			data.gameover_music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkData::cursor_se:
			data.cursor_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::decision_se:
			data.decision_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::cancel_se:
			data.cancel_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::buzzer_se:
			data.buzzer_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::battle_se:
			data.battle_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::escape_se:
			data.escape_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::enemy_attack_se:
			data.enemy_attack_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::enemy_damaged_se:
			data.enemy_damaged_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::actor_damaged_se:
			data.actor_damaged_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::dodge_se:
			data.dodge_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::enemy_death_se:
			data.enemy_death_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::item_se:
			data.item_se = LDB_Reader::ReadSound(stream);
			break;
		case ChunkData::transition_out:
			data.transition_out = stream.Read8();
			break;
		case ChunkData::transition_in:
			data.transition_in = stream.Read8();
			break;
		case ChunkData::battle_start_fadeout:
			data.battle_start_fadeout = stream.Read8();
			break;
		case ChunkData::battle_start_fadein:
			data.battle_start_fadein = stream.Read8();
			break;
		case ChunkData::battle_end_fadeout:
			data.battle_end_fadeout = stream.Read8();
			break;
		case ChunkData::battle_end_fadein:
			data.battle_end_fadein = stream.Read8();
			break;
		case ChunkData::teleport_allowed:
			data.teleport_allowed = stream.ReadBool();
			break;
		case ChunkData::escape_allowed:
			data.escape_allowed = stream.ReadBool();
			break;
		case ChunkData::save_allowed:
			data.save_allowed = stream.ReadBool();
			break;
		case ChunkData::menu_allowed:
			data.menu_allowed = stream.ReadBool();
			break;
		case ChunkData::save_count:
			data.save_count = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkData::save_slot:
			data.save_slot = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return data;
}

