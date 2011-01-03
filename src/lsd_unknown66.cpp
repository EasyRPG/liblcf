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
/// Read Unknown Chunk 0x66
////////////////////////////////////////////////////////////
RPG::SaveUnknown66 LSD_Reader::ReadUnknown66(Reader& stream) {
	RPG::SaveUnknown66 result;
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
		case ChunkUnknown66::unknown_01:
			result.unknown_01 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_02:
			result.unknown_02 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_03:
			result.unknown_03 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_0b:
			result.unknown_0b = stream.ReadDouble();
			break;
		case ChunkUnknown66::unknown_0c:
			result.unknown_0c = stream.ReadDouble();
			break;
		case ChunkUnknown66::unknown_0d:
			result.unknown_0d = stream.ReadDouble();
			break;
		case ChunkUnknown66::unknown_1e:
			result.unknown_1e = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_1f:
			result.unknown_1f = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_20:
			result.unknown_20 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_29:
			result.unknown_29 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_2a:
			result.unknown_2a = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_2b:
			result.unknown_2b = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_2c:
			result.unknown_2c = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_2d:
			result.unknown_2d = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_2f:
			result.unknown_2f = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkUnknown66::unknown_31:
			result.unknown_31 = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return result;
}

