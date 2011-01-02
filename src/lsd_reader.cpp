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
/// Load Database
////////////////////////////////////////////////////////////
RPG::Save* LSD_Reader::Load(const std::string& filename) {
	Reader reader(filename);
	if (!reader.IsOk()) {
		Reader::SetError("Couldn't find %s save file.\n", filename.c_str());
		return false;
	}
	std::string header = reader.ReadString(reader.Read32(Reader::CompressedInteger));
	if (header != "LcfSaveData") {
		Reader::SetError("%s is not a valid RPG2000 save.\n", filename.c_str());
		return false;
	}
	return LoadChunks(reader);
}

////////////////////////////////////////////////////////////
/// Load data chunks
////////////////////////////////////////////////////////////
RPG::Save* LSD_Reader::LoadChunks(Reader& stream) {
	RPG::Save* save = new RPG::Save();
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
			default:
				stream.Skip(chunk_info);
		}
	}
	return save;
}
