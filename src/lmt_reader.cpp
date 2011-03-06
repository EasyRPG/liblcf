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
/// Map Tree
////////////////////////////////////////////////////////////
template <>
struct TypeReader<RPG::TreeMap> {
	static inline void ReadLcf(RPG::TreeMap& ref, LcfReader& stream, uint32_t length) {
		ref.maps.resize(stream.ReadInt() + 1);
		for (unsigned int i = 1; i < ref.maps.size(); i++)
			Struct<RPG::MapInfo>::ReadLcf(ref.maps[i], stream);
		for (int i = stream.ReadInt(); i > 0; i--)
			ref.tree_order.push_back(stream.ReadInt());
		ref.active_node = stream.ReadInt();
		Struct<RPG::Start>::ReadLcf(ref.start, stream);
	}

	static inline void WriteLcf(const RPG::TreeMap& ref, LcfWriter& stream) {
		stream.WriteInt(ref.maps.size() - 1);
		for (unsigned int i = 1; i < ref.maps.size(); i++)
			Struct<RPG::MapInfo>::WriteLcf(ref.maps[i], stream);
		int count = ref.tree_order.size();
		stream.WriteInt(count);
		for (int i = 0; i < count; i++)
			stream.WriteInt(ref.tree_order[i]);
		stream.WriteInt(ref.active_node);
		Struct<RPG::Start>::WriteLcf(ref.start, stream);
	}
	static inline int LcfSize(const RPG::TreeMap& ref, LcfWriter& stream) {
		// doesn't matter; this structure never occurs within a chunk
		return 0;
	}
	static inline void WriteXml(const RPG::TreeMap& ref, XmlWriter& stream) {
		stream.BeginElement("TreeMap");

		stream.BeginElement("maps");
		Struct<RPG::MapInfo>::WriteXml(ref.maps, stream);
		stream.EndElement("maps");

		stream.BeginElement("tree_order");
		stream.Write<std::vector<int> >(ref.tree_order);
		stream.EndElement("tree_order");

		stream.WriteNode<int>("active_node", ref.active_node);

		stream.BeginElement("start");
		Struct<RPG::Start>::WriteXml(ref.start, stream);
		stream.EndElement("start");

		stream.EndElement("TreeMap");
	}

	class TreeMapXmlHandler : public XmlHandler {
	private:
		RPG::TreeMap& ref;
		bool active_node;
		bool tree_order;
	public:
		TreeMapXmlHandler(RPG::TreeMap& ref) :
			ref(ref), active_node(false), tree_order(false) {}

		void StartElement(XmlReader& stream, const char* name, const char** atts) {
			active_node = false;
			tree_order = false;
			if (strcmp(name, "maps") == 0)
				TypeReader<std::vector<RPG::MapInfo> >::BeginXml(ref.maps, stream);
			else if (strcmp(name, "tree_order") == 0)
				tree_order = true;
			else if (strcmp(name, "active_node") == 0)
				active_node = true;
			else if (strcmp(name, "start") == 0)
				TypeReader<RPG::Start>::BeginXml(ref.start, stream);
			else {
				// error
			}
		}
		void CharacterData(XmlReader& stream, const char* s, int len) {
			if (active_node)
				XmlReader::Read<int>(ref.active_node, std::string(s, len));
			if (tree_order)
				XmlReader::Read<std::vector<int> >(ref.tree_order, std::string(s, len));
		}
	};

	static inline void BeginXml(RPG::TreeMap& ref, XmlReader& stream) {
		stream.SetHandler(new WrapperXmlHandler("TreeMap", new TreeMapXmlHandler(ref)));
	}
	static void ParseXml(RPG::TreeMap& ref, const std::string& data) {
	}
};

////////////////////////////////////////////////////////////
/// Load Map Tree
////////////////////////////////////////////////////////////
bool LMT_Reader::Load(const std::string& filename) {
	LcfReader reader(filename, ReaderUtil::GetEncoding());
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	std::string header = reader.ReadString(reader.ReadInt());
	if (header != "LcfMapTree") {
		LcfReader::SetError("%s is not a valid RPG2000 map tree.\n", filename.c_str());
		return false;
	}
	TypeReader<RPG::TreeMap>::ReadLcf(Data::treemap, reader, 0);
	return true;
}

////////////////////////////////////////////////////////////
/// Save Map Tree
////////////////////////////////////////////////////////////
bool LMT_Reader::Save(const std::string& filename) {
	LcfWriter writer(filename, ReaderUtil::GetEncoding());
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	const std::string header("LcfMapTree");
	writer.WriteInt(header.size());
	writer.WriteString(header);
	TypeReader<RPG::TreeMap>::WriteLcf(Data::treemap, writer);
	return true;
}

////////////////////////////////////////////////////////////
/// Save Map Tree as Xml
////////////////////////////////////////////////////////////
bool LMT_Reader::SaveXml(const std::string& filename) {
	XmlWriter writer(filename);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	writer.BeginElement("LMT");
	TypeReader<RPG::TreeMap>::WriteXml(Data::treemap, writer);
	writer.EndElement("LMT");
	return true;
}

////////////////////////////////////////////////////////////
/// Load Map Tree as XML
////////////////////////////////////////////////////////////
bool LMT_Reader::LoadXml(const std::string& filename) {
	XmlReader reader(filename);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't open %s map tree file.\n", filename.c_str());
		return false;
	}
	reader.SetHandler(new RootXmlHandler<RPG::TreeMap>(Data::treemap, "LMT"));
	reader.Parse();
	return true;
}

