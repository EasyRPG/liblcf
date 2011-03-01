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
/// Read Event Data
////////////////////////////////////////////////////////////
RPG::SaveEventData LSD_Reader::ReadSaveEventData(Reader& stream) {
	RPG::SaveEventData result;
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
		case ChunkEventData::time_left:
			result.time_left = stream.ReadInt();
			break;
		case ChunkEventData::commands:
			for (int i = stream.ReadInt(); i > 0; i--) {
				result.commands.push_back(ReadSaveEventCommands(stream));
			}
			break;
		case ChunkEventData::unknown_16:
			result.unknown_16 = stream.ReadInt();
			break;
		case ChunkEventData::unknown_17:
			result.unknown_17 = stream.ReadInt();
			break;
		case ChunkEventData::unknown_20:
			result.unknown_20 = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return result;
}

