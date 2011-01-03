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
/// Read Save Title
////////////////////////////////////////////////////////////
RPG::SaveTitle LSD_Reader::ReadSaveTitle(Reader& stream) {
	RPG::SaveTitle title;
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
		case ChunkTitle::timestamp:
			stream.Read8(title.timestamp, chunk_info.length);
			break;
		case ChunkTitle::hero_name:
			title.hero_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkTitle::hero_level:
			title.hero_level = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTitle::hero_hp:
			title.hero_hp = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTitle::face1_name:
			title.face1_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkTitle::face1_id:
			title.face1_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTitle::face2_name:
			title.face2_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkTitle::face2_id:
			title.face2_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTitle::face3_name:
			title.face3_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkTitle::face3_id:
			title.face3_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTitle::face4_name:
			title.face4_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkTitle::face4_id:
			title.face4_id = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return title;
}

