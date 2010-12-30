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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader.h"

////////////////////////////////////////////////////////////
/// Read Switches
////////////////////////////////////////////////////////////
std::vector<std::string> LDB_Reader::ReadSwitches(Reader& stream) {
	std::vector<std::string> switches;
	switches.resize(stream.Read32(Reader::CompressedInteger) + 1);

	int pos;
	Reader::Chunk chunk_info;
	for (int i = switches.size() - 1; i > 0; i--) {
		pos = stream.Read32(Reader::CompressedInteger);
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID != ChunkData::END) {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkData::END:
			break;
		case ChunkSwitch::name:
			// This string is null-terminated
			switches[pos] = stream.ReadString(chunk_info.length + 1);
			break;
		default:
			stream.Skip(chunk_info, __FILE__);
		}
	}
	return switches;
}
