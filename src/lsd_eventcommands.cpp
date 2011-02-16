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
#include "event_reader.h"
#include "rpg_save.h"

////////////////////////////////////////////////////////////
/// Read Unknown Chunk 0x71:0x01
////////////////////////////////////////////////////////////
RPG::SaveEventCommands LSD_Reader::ReadSaveEventCommands(Reader& stream) {
	RPG::SaveEventCommands result;
	result.ID = stream.Read32(Reader::CompressedInteger);

	Reader::Chunk chunk_info;

	while (!stream.Eof()) {
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID == ChunkSave::END) {
			break;
		} else {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		uint32_t pos = stream.Tell();
		switch (chunk_info.ID) {
		case ChunkEventCommands::commands_size:
			result.commands_size = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkEventCommands::commands:
			for (;;)
			{
				char ch = stream.Read8();
				if (ch == 0) {
					stream.Seek(3, Reader::FromCurrent);
					break;
				}
				stream.Ungetch(ch);
				result.commands.push_back(Event_Reader::ReadEventCommand(stream));
			}
			break;
		case ChunkEventCommands::current_command:
			result.current_command = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkEventCommands::unknown_0c:
			result.unknown_0c = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkEventCommands::unknown_0d:
			result.unknown_0d = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkEventCommands::unknown_15:
			result.unknown_15 = stream.Read8();
			break;
		case ChunkEventCommands::unknown_16:
			stream.Read8(result.unknown_16, chunk_info.length);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return result;
}

