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
RPG::SaveMapInfo LSD_Reader::ReadSaveMapInfo(Reader& stream) {
	RPG::SaveMapInfo map_info;
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
		case ChunkMapInfo::pan_x:
			map_info.pan_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::pan_y:
			map_info.pan_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::encounter_rate:
			map_info.encounter_rate = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::events:
			for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
				map_info.events.push_back(ReadSaveMapEvent(stream));
			}
			break;
		case ChunkMapInfo::lower_tiles:
			stream.Read8(map_info.lower_tiles, chunk_info.length);
			break;
		case ChunkMapInfo::upper_tiles:
			stream.Read8(map_info.upper_tiles, chunk_info.length);
			break;
		case ChunkMapInfo::parallax_name:
			map_info.parallax_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkMapInfo::parallax_horz:
			map_info.parallax_horz = stream.ReadBool();
			break;
		case ChunkMapInfo::parallax_vert:
			map_info.parallax_vert = stream.ReadBool();
			break;
		case ChunkMapInfo::parallax_horz_auto:
			map_info.parallax_horz_auto = stream.ReadBool();
			break;
		case ChunkMapInfo::parallax_horz_speed:
			map_info.parallax_horz_speed = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::parallax_vert_auto:
			map_info.parallax_vert_auto = stream.ReadBool();
			break;
		case ChunkMapInfo::parallax_vert_speed:
			map_info.parallax_vert_speed = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return map_info;
}

