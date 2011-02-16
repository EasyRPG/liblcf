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
#include "lmu_reader.h"
#include "rpg_save.h"

////////////////////////////////////////////////////////////
/// Read Save Cover
////////////////////////////////////////////////////////////
RPG::SavePartyLocation LSD_Reader::ReadSavePartyLocation(Reader& stream) {
	RPG::SavePartyLocation location;

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
		case ChunkPartyLocation::map_id:
			location.map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::position_x:
			location.position_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::position_y:
			location.position_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::facing1:
			location.facing1 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::facing2:
			location.facing2 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_17:
			location.unknown_17 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_20:
			location.unknown_20 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_21:
			location.unknown_21 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_23:
			location.unknown_23 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_25:
			location.unknown_25 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::move_route:
			location.move_route = LMU_Reader::ReadMoveRoute(stream);
			break;
		case ChunkPartyLocation::unknown_2a:
			location.unknown_2a = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_2b:
			location.unknown_2b = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_2c:
			location.unknown_2c = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_2f:
			location.unknown_2f = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_33:
			location.unknown_33 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_34:
			location.unknown_34 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_35:
			location.unknown_35 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_36:
			location.unknown_36 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_3e:
			location.unknown_3e = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_3f:
			location.unknown_3f = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::sprite_name:
			location.sprite_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkPartyLocation::sprite_id:
			location.sprite_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_4b:
			location.unknown_4b = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_51:
			location.unknown_51 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_52:
			location.unknown_52 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_53:
			location.unknown_53 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::pan_state:
			location.pan_state = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::pan_current_x:
			location.pan_current_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::pan_current_y:
			location.pan_current_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::pan_finish_x:
			location.pan_finish_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::pan_finish_y:
			location.pan_finish_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_79:
			location.unknown_79 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_7c:
			location.unknown_7c = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_83:
			location.unknown_83 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPartyLocation::unknown_84:
			location.unknown_84 = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return location;
}

