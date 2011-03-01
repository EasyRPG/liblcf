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
/// Read AnimationCellData
////////////////////////////////////////////////////////////
RPG::AnimationCellData LDB_Reader::ReadAnimationCellData(Reader& stream) {
	RPG::AnimationCellData celldata;
	stream.ReadInt();

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
		case ChunkAnimationCellData::priority:
			celldata.priority = stream.ReadInt();
			break;
		case ChunkAnimationCellData::ID:
			celldata.ID = stream.ReadInt();
			break;
		case ChunkAnimationCellData::x:
			celldata.x = stream.ReadInt();
			break;
		case ChunkAnimationCellData::y:
			celldata.y = stream.ReadInt();
			break;
		case ChunkAnimationCellData::zoom:
			celldata.zoom = stream.ReadInt();
			break;
		case ChunkAnimationCellData::tone_red:
			celldata.tone_red = stream.ReadInt();
			break;
		case ChunkAnimationCellData::tone_green:
			celldata.tone_green = stream.ReadInt();
			break;
		case ChunkAnimationCellData::tone_blue:
			celldata.tone_blue = stream.ReadInt();
			break;
		case ChunkAnimationCellData::tone_gray:
			celldata.tone_gray = stream.ReadInt();
			break;
		case ChunkAnimationCellData::transparency:
			celldata.transparency = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
	return celldata;
}
