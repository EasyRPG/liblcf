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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "data.h"
#include "reader_util.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Load Map Tree
////////////////////////////////////////////////////////////
bool LMT_Reader::Load(const std::string& filename) {
	Reader reader(filename, ReaderUtil::GetEncoding());
	if (!reader.IsOk()) {
		Reader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	std::string header = reader.ReadString(reader.ReadInt());
	if (header != "LcfMapTree") {
		Reader::SetError("%s is not a valid RPG2000 map tree.\n", filename.c_str());
		return false;
	}
	ReadTreeMap(Data::treemap, reader);
	return true;
}

////////////////////////////////////////////////////////////
/// Read Tree Map
////////////////////////////////////////////////////////////
void LMT_Reader::ReadTreeMap(RPG::TreeMap& treemap, Reader& stream) {
	// Array - RPG::MapInfo
	treemap.maps.resize(stream.ReadInt() + 1);
	for (unsigned int i = 1; i < treemap.maps.size(); i++)
		Struct<RPG::MapInfo>::ReadLcf(treemap.maps[i], stream);

	// Array - Integer
	for (int i = stream.ReadInt(); i > 0; i--) {
		treemap.tree_order.push_back(stream.ReadInt());
	}

	// Integer
	treemap.active_node = stream.ReadInt();

	// RPG::TreeMap
	Struct<RPG::TreeMap>::ReadLcf(Data::treemap, stream);
}

////////////////////////////////////////////////////////////
/// Save Map Tree
////////////////////////////////////////////////////////////
bool LMT_Reader::Save(const std::string& filename) {
	Writer writer(filename, ReaderUtil::GetEncoding());
	if (!writer.IsOk()) {
		Reader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	const std::string header("LcfMapTree");
	writer.WriteInt(header.size());
	writer.WriteString(header);
	WriteTreeMap(Data::treemap, writer);
	return true;
}

////////////////////////////////////////////////////////////
/// Write Tree Map
////////////////////////////////////////////////////////////
void LMT_Reader::WriteTreeMap(const RPG::TreeMap& treemap, Writer& stream) {
	// Array - RPG::MapInfo
	stream.WriteInt(treemap.maps.size() - 1);
	for (unsigned int i = 1; i < treemap.maps.size(); i++)
		Struct<RPG::MapInfo>::WriteLcf(treemap.maps[i], stream);

	// Array - Integer
	int count = treemap.tree_order.size();
	stream.WriteInt(count);
	for (int i = 0; i < count; i++)
		stream.WriteInt(treemap.tree_order[i]);

	// Integer
	stream.WriteInt(treemap.active_node);

	// RPG::TreeMap
	Struct<RPG::TreeMap>::WriteLcf(Data::treemap, stream);
}
