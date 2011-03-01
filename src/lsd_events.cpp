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
/// Read Saved Events
////////////////////////////////////////////////////////////
RPG::SaveEvents LSD_Reader::ReadSaveEvents(Reader& stream) {
	RPG::SaveEvents events;

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
		case ChunkEvents::events:
			for (int i = stream.ReadInt(); i > 0; i--) {
				events.events.push_back(ReadSaveEventCommands(stream));
			}
			break;
		case ChunkEvents::events_size:
			events.events_size = stream.ReadInt();
			break;
		case ChunkEvents::unknown_16:
			events.unknown_16 = stream.ReadInt();
			break;
		case ChunkEvents::unknown_17:
			events.unknown_17 = stream.ReadInt();
			break;
		case ChunkEvents::unknown_18:
			events.unknown_18 = stream.ReadInt();
			break;
		case ChunkEvents::unknown_1c:
			events.unknown_1c = stream.ReadInt();
			break;
		case ChunkEvents::unknown_20:
			events.unknown_20 = stream.ReadInt();
			break;
		case ChunkEvents::unknown_24:
			events.unknown_24 = stream.ReadInt();
			break;
		case ChunkEvents::unknown_25:
			events.unknown_25 = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return events;
}

