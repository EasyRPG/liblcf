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
		case ChunkScreen::tint_finish_red:
			result.tint_finish_red = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::tint_finish_green:
			result.tint_finish_green = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::tint_finish_blue:
			result.tint_finish_blue = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::tint_finish_sat:
			result.tint_finish_sat = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::tint_current_red:
			result.tint_current_red = stream.ReadDouble();
			break;
		case ChunkScreen::tint_current_green:
			result.tint_current_green = stream.ReadDouble();
			break;
		case ChunkScreen::tint_current_blue:
			result.tint_current_blue = stream.ReadDouble();
			break;
		case ChunkScreen::tint_current_sat:
			result.tint_current_sat = stream.ReadDouble();
			break;
		case ChunkScreen::tint_time_left:
			result.tint_time_left = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_status:
			result.flash_status = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_red:
			result.flash_red = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_green:
			result.flash_green = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_blue:
			result.flash_blue = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::flash_current_level:
			result.flash_current_level = stream.ReadDouble();
			break;
		case ChunkScreen::flash_time_left:
			result.flash_time_left = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_status:
			result.shake_status = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_strength:
			result.shake_strength = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_speed:
			result.shake_speed = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_position:
			result.shake_position = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::shake_time_left:
			result.shake_time_left = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::pan_x:
			result.pan_x = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::pan_y:
			result.pan_y = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::battleanim_id:
			result.battleanim_id = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::battleanim_target:
			result.battleanim_target = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::battleanim_unk_2d:
			result.battleanim_unk_2d = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::battleanim_global:
			result.battleanim_global = stream.ReadBool();
			break;
		case ChunkScreen::weather:
			result.weather = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkScreen::weather_strength:
			result.weather_strength = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return result;
}

