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
RPG::SavePicture LSD_Reader::ReadSavePicture(Reader& stream) {
	RPG::SavePicture picture;
	picture.ID = stream.ReadInt();

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
		case ChunkPicture::name:
			picture.name = stream.ReadString(chunk_info.length);
			break;
		case ChunkPicture::start_x:
			picture.start_x = stream.ReadDouble();
			break;
		case ChunkPicture::start_y:
			picture.start_y = stream.ReadDouble();
			break;
		case ChunkPicture::current_x:
			picture.current_x = stream.ReadDouble();
			break;
		case ChunkPicture::current_y:
			picture.current_y = stream.ReadDouble();
			break;
		case ChunkPicture::picture_scrolls:
			picture.picture_scrolls = stream.ReadBool();
			break;
		case ChunkPicture::current_magnify:
			picture.current_magnify = stream.ReadDouble();
			break;
		case ChunkPicture::current_top_trans:
			picture.current_top_trans = stream.ReadDouble();
			break;
		case ChunkPicture::transparency:
			picture.transparency = stream.ReadBool();
			break;
		case ChunkPicture::current_red:
			picture.current_red = stream.ReadDouble();
			break;
		case ChunkPicture::current_green:
			picture.current_green = stream.ReadDouble();
			break;
		case ChunkPicture::current_blue:
			picture.current_blue = stream.ReadDouble();
			break;
		case ChunkPicture::current_sat:
			picture.current_sat = stream.ReadDouble();
			break;
		case ChunkPicture::effect_mode:
			picture.effect_mode = stream.ReadInt();
			break;
		case ChunkPicture::effect_speed:
			picture.effect_speed = stream.ReadDouble();
			break;
		case ChunkPicture::current_bot_trans:
			picture.current_bot_trans = stream.ReadDouble();
			break;
		case ChunkPicture::finish_x:
			picture.finish_x = stream.ReadDouble();
			break;
		case ChunkPicture::finish_y:
			picture.finish_y = stream.ReadDouble();
			break;
		case ChunkPicture::finish_magnify:
			picture.finish_magnify = stream.ReadInt();
			break;
		case ChunkPicture::finish_top_trans:
			picture.finish_top_trans = stream.ReadInt();
			break;
		case ChunkPicture::finish_bot_trans:
			picture.finish_bot_trans = stream.ReadInt();
			break;
		case ChunkPicture::finish_red:
			picture.finish_red = stream.ReadInt();
			break;
		case ChunkPicture::finish_green:
			picture.finish_green = stream.ReadInt();
			break;
		case ChunkPicture::finish_blue:
			picture.finish_blue = stream.ReadInt();
			break;
		case ChunkPicture::finish_sat:
			picture.finish_sat = stream.ReadInt();
			break;
		case ChunkPicture::effect2_speed:
			picture.effect2_speed = stream.ReadInt();
			break;
		case ChunkPicture::time_left:
			picture.time_left = stream.ReadInt();
			break;
		case ChunkPicture::current_rotation:
			picture.current_rotation = stream.ReadDouble();
			break;
		case ChunkPicture::current_waver:
			picture.current_waver = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return picture;
}

