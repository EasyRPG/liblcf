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
	picture.ID = stream.Read32(Reader::CompressedInteger);

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
		case ChunkPicture::current_top_trans:
			picture.current_top_trans = stream.ReadDouble();
			break;
		case ChunkPicture::transparency:
			picture.transparency = stream.ReadBool();
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
		case ChunkPicture::finish_top_trans:
			picture.finish_top_trans = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkPicture::finish_bot_trans:
			picture.finish_bot_trans = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return picture;
}

