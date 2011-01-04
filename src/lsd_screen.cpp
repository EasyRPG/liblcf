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
/// Read Screen Appearance
////////////////////////////////////////////////////////////
RPG::SaveScreen LSD_Reader::ReadSaveScreen(Reader& stream) {
	RPG::SaveScreen result;
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
		case ChunkScreen::unknown_01:
			result.unknown_01 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::unknown_02:
			result.unknown_02 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::unknown_03:
			result.unknown_03 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::tint_04:
			result.tint_04 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::unknown_0b:
			result.unknown_0b = stream.ReadDouble();
			break;
		case ChunkScreen::unknown_0c:
			result.unknown_0c = stream.ReadDouble();
			break;
		case ChunkScreen::unknown_0d:
			result.unknown_0d = stream.ReadDouble();
			break;
		case ChunkScreen::tint_0e:
			result.tint_0e = stream.ReadDouble();
			break;
		case ChunkScreen::tint_0f:
			result.tint_0f = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_14:
			result.flash_14 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_16:
			result.flash_16 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_17:
			result.flash_17 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_18:
			result.flash_18 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_19:
			result.flash_19 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_1e:
			result.shake_1e = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_1f:
			result.shake_1f = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_20:
			result.shake_20 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_21:
			result.shake_21 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_23:
			result.shake_23 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::pan_x:
			result.pan_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::pan_y:
			result.pan_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::unknown_2b:
			result.unknown_2b = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::unknown_2c:
			result.unknown_2c = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::unknown_2d:
			result.unknown_2d = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::unknown_2f:
			result.unknown_2f = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::weather:
			result.weather = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::unknown_31:
			result.unknown_31 = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return result;
}

