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
/// Read Troop
////////////////////////////////////////////////////////////
RPG::Troop LDB_Reader::ReadTroop(Reader& stream) {
	RPG::Troop troop;
	troop.ID = stream.ReadInt();

	Reader::Chunk chunk_info;
	while (!stream.Eof()) {
		chunk_info.ID = stream.ReadInt();
		if (chunk_info.ID == ChunkData::END) {
			break;
		} else {
			chunk_info.length = stream.ReadInt();
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkTroop::name:
			troop.name = stream.ReadString(chunk_info.length);
			break;
		case ChunkTroop::members:
			for (int i = stream.ReadInt(); i > 0; i--) {
				troop.members.push_back(ReadTroopMember(stream));
			}
			break;
		case ChunkTroop::terrain_set_size:
			stream.ReadInt();
			break;
		case ChunkTroop::terrain_set:
			stream.ReadBool(troop.terrain_set, chunk_info.length);
			break;
		case ChunkTroop::pages:
			for (int i = stream.ReadInt(); i > 0; i--) {
				troop.pages.push_back(ReadTroopPage(stream));
			}
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
	return troop;
}
