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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader.h"

////////////////////////////////////////////////////////////
/// Read Item Animation
////////////////////////////////////////////////////////////
RPG::ItemAnimation LDB_Reader::ReadItemAnimation(Reader& stream) {
	RPG::ItemAnimation item_animation;
	item_animation.ID = stream.ReadInt();

	Reader::Chunk chunk_info;
	while (!stream.Eof()) {
		chunk_info.ID = stream.ReadInt();
		if (chunk_info.ID == ChunkData::END) {
			break;
		} else {
			chunk_info.length = stream.ReadInt();
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkItemAnimation::type:
			item_animation.type = stream.ReadInt();
			break;
		case ChunkItemAnimation::weapon_anim:
			item_animation.weapon_anim = stream.ReadInt();
			break;
		case ChunkItemAnimation::movement:
			item_animation.movement = stream.ReadInt();
			break;
		case ChunkItemAnimation::after_image:
			item_animation.after_image = stream.ReadInt();
			break;
		case ChunkItemAnimation::attacks:
			item_animation.attacks = stream.ReadInt();
			break;
		case ChunkItemAnimation::ranged:
			item_animation.ranged = stream.ReadBool();
			break;
		case ChunkItemAnimation::ranged_anim:
			item_animation.ranged_anim = stream.ReadInt();
			break;
		case ChunkItemAnimation::ranged_speed:
			item_animation.ranged_speed = stream.ReadInt();
			break;
		case ChunkItemAnimation::battle_anim:
			item_animation.battle_anim = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
	return item_animation;
}
