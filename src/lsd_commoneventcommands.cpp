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
/// Read Unknown Chunk 0x66
////////////////////////////////////////////////////////////
RPG::SaveCommonEventCommands LSD_Reader::ReadCommonEventCommands(Reader& stream) {
	RPG::SaveCommonEventCommands result;
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
		switch (chunk_info.ID) {
		case ChunkCommonEventCommands::commands_size:
			result.commands_size = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkCommonEventCommands::commands:
			// Event Commands is a special array
			// Has no size information. Is terminated by 4 times 0x00.
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
		case ChunkCommonEventCommands::current_command:
			result.current_command = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return result;
}

