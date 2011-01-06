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
RPG::SaveMapEvent LSD_Reader::ReadSaveMapEvent(Reader& stream) {
	RPG::SaveMapEvent map_event;
	map_event.ID = stream.Read32(Reader::CompressedInteger);

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
		case ChunkMapEvent::unknown_01:
			map_event.unknown_01 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::map_id:
			map_event.map_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::position_x:
			map_event.position_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::position_y:
			map_event.position_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::facing1:
			map_event.facing1 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::facing2:
			map_event.facing2 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::anim_frame:
			map_event.anim_frame = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_18:
			map_event.unknown_18 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_1f:
			map_event.unknown_1f = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_20:
			map_event.unknown_20 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::layer:
			map_event.layer = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_22:
			map_event.unknown_22 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_23:
			map_event.unknown_23 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_24:
			map_event.unknown_24 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_25:
			map_event.unknown_25 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::move_route:
			map_event.move_route = LMU_Reader::ReadMoveRoute(stream);
			break;
		case ChunkMapEvent::unknown_2a:
			map_event.unknown_2a = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_2b:
			map_event.unknown_2b = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::anim_paused:
			map_event.anim_paused = stream.ReadBool();
			break;
		case ChunkMapEvent::unknown_33:
			map_event.unknown_33 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_34:
			map_event.unknown_34 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_35:
			map_event.unknown_35 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_36:
			map_event.unknown_36 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_47:
			map_event.unknown_47 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::sprite_name:
			map_event.sprite_name = stream.ReadString(chunk_info.length);
			break;
		case ChunkMapEvent::sprite_id:
			map_event.sprite_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_4b:
			map_event.unknown_4b = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::flash_red:
			map_event.flash_red = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::flash_green:
			map_event.flash_green = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::flash_blue:
			map_event.flash_blue = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::flash_current_level:
			map_event.flash_current_level = stream.ReadDouble();
			break;
		case ChunkMapEvent::flash_time_left:
			map_event.flash_time_left = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_66:
			map_event.unknown_66 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::unknown_67:
			map_event.unknown_67 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkMapEvent::event_data:
			map_event.event_data = ReadSaveEventData(stream);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return map_event;
}

