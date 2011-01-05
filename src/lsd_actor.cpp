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

////////////////////////////////////////////////////////////
/// Read Save Cover
////////////////////////////////////////////////////////////
RPG::SaveActor LSD_Reader::ReadSaveActor(Reader& stream) {
	RPG::SaveActor actor;
	actor.ID = stream.Read32(Reader::CompressedInteger);

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
		case ChunkActor::unknown_01:
			actor.unknown_01 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::unknown_02:
			actor.unknown_02 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::sprite_name:
			actor.sprite_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkActor::sprite_id:
			actor.sprite_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::face_name:
			actor.face_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkActor::face_id:
			actor.face_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::level:
			actor.level = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::exp:
			actor.exp = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::hp_mod:
			actor.hp_mod = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::sp_mod:
			actor.sp_mod = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::attack_mod:
			actor.attack_mod = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::defense_mod:
			actor.defense_mod = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::spirit_mod:
			actor.spirit_mod = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::agility_mod:
			actor.agility_mod = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::skills_size:
			actor.skills_size = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::skills:
			stream.Read16(actor.skills, chunk_info.length);
			break;
		case ChunkActor::equipped:
			stream.Read16(actor.equipped, chunk_info.length);
			break;
		case ChunkActor::current_hp:
			actor.current_hp = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::current_sp:
			actor.current_sp = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::unknown_50:
			stream.Read8(actor.unknown_50, chunk_info.length);
			break;
		case ChunkActor::unknown_51:
			actor.unknown_51 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkActor::status:
			stream.Read16(actor.status, chunk_info.length);
			break;
		case ChunkActor::unknown_5e:
			actor.unknown_5e = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return actor;
}

