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
/// Read Save Cover
////////////////////////////////////////////////////////////
RPG::SaveInventory LSD_Reader::ReadSaveInventory(Reader& stream) {
	RPG::SaveInventory inventory;

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
		case ChunkInventory::party_size:
			inventory.party_size = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkInventory::party:
			stream.Read16(inventory.party, chunk_info.length);
			break;
		case ChunkInventory::items_size:
			inventory.items_size = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkInventory::item_ids:
			stream.Read16(inventory.item_ids, chunk_info.length);
			break;
		case ChunkInventory::item_counts:
			stream.Read8(inventory.item_counts, chunk_info.length);
			break;
		case ChunkInventory::item_usage:
			stream.Read8(inventory.item_usage, chunk_info.length);
			break;
		case ChunkInventory::gold:
			inventory.gold = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkInventory::battles:
			inventory.battles = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkInventory::defeats:
			inventory.defeats = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkInventory::unknown_22:
			inventory.unknown_22 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkInventory::unknown_23:
			inventory.unknown_23 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkInventory::unknown_29:
			inventory.unknown_29 = stream.Read32(Reader::CompressedInteger);
			break;
		case ChunkInventory::steps:
			inventory.steps = stream.Read32(Reader::CompressedInteger);
			break;
		default:
			stream.Skip(chunk_info);
		}
	}

	return inventory;
}

