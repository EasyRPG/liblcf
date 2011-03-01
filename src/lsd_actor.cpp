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
	actor.ID = stream.ReadInt();

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
		case ChunkActor::name:
			actor.name = stream.ReadString(chunk_info.length);
			break;
		case ChunkActor::title:
			actor.title = stream.ReadString(chunk_info.length);
			break;
		case ChunkActor::sprite_name:
			actor.sprite_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkActor::sprite_id:
			actor.sprite_id = stream.ReadInt();
			break;
		case ChunkActor::sprite_flags:
			actor.sprite_flags = stream.ReadInt();
			break;
		case ChunkActor::face_name:
			actor.face_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkActor::face_id:
			actor.face_id = stream.ReadInt();
			break;
		case ChunkActor::level:
			actor.level = stream.ReadInt();
			break;
		case ChunkActor::exp:
			actor.exp = stream.ReadInt();
			break;
		case ChunkActor::hp_mod:
			actor.hp_mod = stream.ReadInt();
			break;
		case ChunkActor::sp_mod:
			actor.sp_mod = stream.ReadInt();
			break;
		case ChunkActor::attack_mod:
			actor.attack_mod = stream.ReadInt();
			break;
		case ChunkActor::defense_mod:
			actor.defense_mod = stream.ReadInt();
			break;
		case ChunkActor::spirit_mod:
			actor.spirit_mod = stream.ReadInt();
			break;
		case ChunkActor::agility_mod:
			actor.agility_mod = stream.ReadInt();
			break;
		case ChunkActor::skills_size:
			actor.skills_size = stream.ReadInt();
			break;
		case ChunkActor::skills:
			stream.Read16(actor.skills, chunk_info.length);
			break;
		case ChunkActor::equipped:
			stream.Read16(actor.equipped, chunk_info.length);
			break;
		case ChunkActor::current_hp:
			actor.current_hp = stream.ReadInt();
			break;
		case ChunkActor::current_sp:
			actor.current_sp = stream.ReadInt();
			break;
		case ChunkActor::battle_commands:
			stream.Read32(actor.battle_commands, chunk_info.length);
			break;
		case ChunkActor::status_size:
			actor.status_size = stream.ReadInt();
			break;
		case ChunkActor::status:
			stream.Read16(actor.status, chunk_info.length);
			break;
		case ChunkActor::changed_class:
			actor.changed_class = stream.ReadBool();
			break;
		case ChunkActor::class_id:
			actor.class_id = stream.ReadInt();
			break;
		case ChunkActor::unknown_5b:
			actor.unknown_5b = stream.ReadInt();
			break;
		case ChunkActor::two_weapon:
			actor.two_weapon = stream.ReadBool();
			break;
		case ChunkActor::lock_equipment:
			actor.lock_equipment = stream.ReadBool();
			break;
		case ChunkActor::auto_battle:
			actor.auto_battle = stream.ReadBool();
			break;
		case ChunkActor::mighty_guard:
			actor.mighty_guard = stream.ReadBool();
			break;
		case ChunkActor::unknown_60:
			actor.unknown_60 = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return actor;
}

