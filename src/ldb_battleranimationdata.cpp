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
/// Read BattlerAnimation
////////////////////////////////////////////////////////////
RPG::BattlerAnimationData LDB_Reader::ReadBattlerAnimationData(Reader& stream) {
	RPG::BattlerAnimationData battler_animation_data;
	battler_animation_data.ID = stream.ReadInt();

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
		case ChunkBattlerAnimationData::move:
			battler_animation_data.move = stream.ReadInt();
			break;
		case ChunkBattlerAnimationData::after_image:
			battler_animation_data.after_image = stream.ReadInt();
			break;
		case ChunkBattlerAnimationData::pose:
			battler_animation_data.pose = stream.ReadInt();
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
	return battler_animation_data;
}
