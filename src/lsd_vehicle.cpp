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
RPG::SaveVehicleLocation LSD_Reader::ReadSaveVehicleLocation(Reader& stream) {
	RPG::SaveVehicleLocation location;

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
		case ChunkVehicleLocation::map_id:
			location.map_id = stream.ReadInt();
			break;
		case ChunkVehicleLocation::position_x:
			location.position_x = stream.ReadInt();
			break;
		case ChunkVehicleLocation::position_y:
			location.position_y = stream.ReadInt();
			break;
		case ChunkVehicleLocation::facing1:
			location.facing1 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::facing2:
			location.facing2 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::unknown_17:
			location.unknown_17 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::unknown_21:
			location.unknown_21 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::unknown_23:
			location.unknown_23 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::unknown_25:
			location.unknown_25 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::move_route:
			location.move_route = LMU_Reader::ReadMoveRoute(stream);
			break;
		case ChunkVehicleLocation::unknown_34:
			location.unknown_34 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::unknown_35:
			location.unknown_35 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::sprite_name:
			location.sprite_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkVehicleLocation::sprite_id:
			location.sprite_id = stream.ReadInt();
			break;
		case ChunkVehicleLocation::unknown_4b:
			location.unknown_4b = stream.ReadInt();
			break;
		case ChunkVehicleLocation::unknown_65:
			location.unknown_65 = stream.ReadInt();
			break;
		case ChunkVehicleLocation::sprite2_name:
			location.sprite2_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkVehicleLocation::sprite2_id:
			location.sprite2_id = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return location;
}

