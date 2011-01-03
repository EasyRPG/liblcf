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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "ldb_reader.h"
#include "reader.h"

////////////////////////////////////////////////////////////
/// Read MapInfo
////////////////////////////////////////////////////////////
RPG::MapInfo LMT_Reader::ReadMapInfo(Reader& stream) {
	RPG::MapInfo mapinfo;
	mapinfo.ID = stream.Read32(Reader::CompressedInteger);

	Reader::Chunk chunk_info;
	while (!stream.Eof()) {
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID == ChunkData::END) {
			break;
		} else {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkMapInfo::name:
			mapinfo.name = stream.ReadString(chunk_info.length);
			break;
		case ChunkMapInfo::parent_map:
			mapinfo.parent_map = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::indentation:
			mapinfo.indentation = stream.Read32(Reader::CompressedInteger);
			break;
 		case ChunkMapInfo::type:
 			mapinfo.type = stream.Read32(Reader::CompressedInteger);
 			break;
		case ChunkMapInfo::scrollbar_x:
			mapinfo.scrollbar_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::scrollbar_y:
			mapinfo.scrollbar_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::expanded_node:
			mapinfo.expanded_node = stream.ReadBool();
			break;
		case ChunkMapInfo::music_type:
			mapinfo.music_type = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::music_name:
			mapinfo.music = LDB_Reader::ReadMusic(stream);
			break;
		case ChunkMapInfo::background_type:
			mapinfo.background_type = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::background_name:
			mapinfo.background_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkMapInfo::teleport:
			mapinfo.teleport = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::escape:
			mapinfo.escape = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::save:
			mapinfo.save = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::encounters:
			for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
				mapinfo.encounters.push_back(ReadEncounter(stream));
			}
			break;
		case ChunkMapInfo::encounter_steps:
			mapinfo.encounter_steps = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapInfo::area_rect:
			mapinfo.area_x = stream.Read32(Reader::NormalInteger);
			mapinfo.area_y = stream.Read32(Reader::NormalInteger);
			mapinfo.area_w = stream.Read32(Reader::NormalInteger) - mapinfo.area_x;
			mapinfo.area_h = stream.Read32(Reader::NormalInteger) - mapinfo.area_y;
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
	return mapinfo;
}
