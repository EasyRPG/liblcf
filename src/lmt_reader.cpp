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
#include "data.h"

////////////////////////////////////////////////////////////
/// Load Map Tree
////////////////////////////////////////////////////////////
bool LMT_Reader::Load(const std::string& filename) {
	Reader reader(filename);
	if (!reader.IsOk()) {
		Reader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	std::string header = reader.ReadString(reader.Read32(Reader::CompressedInteger));
	if (header != "LcfMapTree") {
		Reader::SetError("%s is not a valid RPG2000 map tree.\n", filename.c_str());
		return false;
	}
	ReadTreeMap(reader);
	return true;
}

////////////////////////////////////////////////////////////
/// Read Tree Map
////////////////////////////////////////////////////////////
void LMT_Reader::ReadTreeMap(Reader& stream) {
	// Array - RPG::MapInfo
	Data::treemap.maps.resize(stream.Read32(Reader::CompressedInteger) + 1);
	for (unsigned int i = 1; i < Data::treemap.maps.size(); i++) {
		Data::treemap.maps[i] = ReadMapInfo(stream);
	}

	// Array - Integer
	for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
		Data::treemap.tree_order.push_back(stream.Read32(Reader::CompressedInteger));
	}

	// Integer
	Data::treemap.active_node = stream.Read32(Reader::CompressedInteger);

	// RPG::TreeMap
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
		case ChunkTreeMap::start_map_id:
			Data::treemap.start_map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::start_x:
			Data::treemap.start_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::start_y:
			Data::treemap.start_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::boat_map_id:
			Data::treemap.boat_map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::boat_x:
			Data::treemap.boat_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::boat_y:
			Data::treemap.boat_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::ship_map_id:
			Data::treemap.ship_map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::ship_x:
			Data::treemap.ship_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::ship_y:
			Data::treemap.ship_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::airship_map_id:
			Data::treemap.airship_map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::airship_x:
			Data::treemap.airship_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkTreeMap::airship_y:
			Data::treemap.airship_y = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Seek(chunk_info.length, Reader::FromCurrent);
		}
	}
}
