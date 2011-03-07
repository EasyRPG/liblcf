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
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read MapInfo Rect
////////////////////////////////////////////////////////////
void TypeReader<RPG::Rect>::ReadLcf(RPG::Rect& ref, LcfReader& stream, uint32_t length) {
	assert(length == 16);
	ref.x = stream.Read32();
	ref.y = stream.Read32();
	ref.w = stream.Read32() - ref.x;
	ref.h = stream.Read32() - ref.y;
}
void TypeReader<RPG::Rect>::WriteLcf(const RPG::Rect& ref, LcfWriter& stream) {
	stream.Write32(ref.x);
	stream.Write32(ref.y);
	stream.Write32(ref.w + ref.x);
	stream.Write32(ref.h + ref.y);
}
int TypeReader<RPG::Rect>::LcfSize(const RPG::Rect& ref, LcfWriter& stream) {
	return 4 * 4;
}
void TypeReader<RPG::Rect>::WriteXml(const RPG::Rect& ref, XmlWriter& stream) {
	stream.BeginElement("Rect");
	stream.WriteNode<int>("x", ref.x);
	stream.WriteNode<int>("y", ref.y);
	stream.WriteNode<int>("w", ref.w);
	stream.WriteNode<int>("h", ref.h);
	stream.EndElement("Rect");
}

class RectXmlHandler : public XmlHandler {
private:
	RPG::Rect& ref;
	int* field;
public:
	RectXmlHandler(RPG::Rect& ref) : ref(ref), field(NULL) {}
	void StartElement(XmlReader& stream, const char* name, const char** atts) {
		if (strcmp(name, "x") == 0)
			field = &ref.x;
		else if (strcmp(name, "y") == 0)
			field = &ref.y;
		else if (strcmp(name, "w") == 0)
			field = &ref.w;
		else if (strcmp(name, "h") == 0)
			field = &ref.h;
		else {
			stream.Error("Unrecognized field '%s'", name);
			field = NULL;
		}
	}
	void EndElement(XmlReader& stream, const char* name) {
		field = NULL;
	}
	void CharacterData(XmlReader& stream, const std::string& data) {
		if (field != NULL)
			XmlReader::Read<int>(*field, data);
	}
};

void TypeReader<RPG::Rect>::BeginXml(RPG::Rect& ref, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler("Rect", new RectXmlHandler(ref)));
}
void TypeReader<RPG::Rect>::ParseXml(RPG::Rect& ref, const std::string& data) {
}
