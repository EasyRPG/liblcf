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
#include "data.h"

////////////////////////////////////////////////////////////
/// Load Database
////////////////////////////////////////////////////////////
bool LDB_Reader::Load(const std::string& filename) {
	Reader reader(filename);
	if (!reader.IsOk()) {
		Reader::SetError("Couldn't find %s database file.\n", filename.c_str());
		return false;
	}
	std::string header = reader.ReadString(reader.Read32(Reader::CompressedInteger));
	if (header != "LcfDataBase") {
		Reader::SetError("%s is not a valid RPG2000 database.\n", filename.c_str());
		return false;
	}
	LoadChunks(reader);
	return true;
}

////////////////////////////////////////////////////////////
/// Load data chunks
////////////////////////////////////////////////////////////
void LDB_Reader::LoadChunks(Reader& stream) {
	Reader::Chunk chunk_info;

	while (!stream.Eof()) {
		chunk_info.ID = stream.Read32(Reader::CompressedInteger);
		if (chunk_info.ID == ChunkData::END) {
			break;
		} else {
			chunk_info.length = stream.Read32(Reader::CompressedInteger);
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
			case ChunkData::Actor:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::actors.push_back(ReadActor(stream));
				}
				break;
			case ChunkData::Skill:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::skills.push_back(ReadSkill(stream));
				}
				break;
			case ChunkData::Item:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::items.push_back(ReadItem(stream));
				}
				break;
			case ChunkData::Enemy:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::enemies.push_back(ReadEnemy(stream));
				}
				break;
			case ChunkData::Troop:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::troops.push_back(ReadTroop(stream));
				}
				break;
			case ChunkData::Terrain:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::terrains.push_back(ReadTerrain(stream));
				}
				break;
			case ChunkData::Attribute:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::attributes.push_back(ReadAttribute(stream));
				}
				break;
			case ChunkData::State:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::states.push_back(ReadState(stream));
				}
				break;
			case ChunkData::Animation:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::animations.push_back(ReadAnimation(stream));
				}
				break;
			case ChunkData::Chipset:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::chipsets.push_back(ReadChipset(stream));
				}
				break;
			case ChunkData::Terms:
				Data::terms = ReadTerms(stream);
				break;
			case ChunkData::System:
				Data::system = ReadSystem(stream);
				break;
			case ChunkData::Switches:
				Data::switches = ReadSwitches(stream);
				break;
			case ChunkData::Variables:
				Data::variables = ReadVariables(stream);
				break;
			case ChunkData::CommonEvent:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::commonevents.push_back(ReadCommonEvent(stream));
				}
				break;
			case ChunkData::BattleCommand:
				Data::battlecommands = ReadBattleCommands(stream);
				break;
			case ChunkData::Class:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::classes.push_back(ReadClass(stream));
				}
				break;
			case ChunkData::BattlerAnimation:
				for (int i = stream.Read32(Reader::CompressedInteger); i > 0; i--) {
					Data::battleranimations.push_back(ReadBattlerAnimation(stream));
				}
				break;
			default:
				stream.Seek(chunk_info.length, Reader::FromCurrent);
		}
	}
}
