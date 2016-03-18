/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_struct.h"

template <>
struct RawStruct<RPG::Rect> {
	static void ReadLcf(RPG::Rect& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const RPG::Rect& ref, LcfWriter& stream);
	static int LcfSize(const RPG::Rect& ref, LcfWriter& stream);
	static void WriteXml(const RPG::Rect& ref, XmlWriter& stream);
	static void BeginXml(RPG::Rect& ref, XmlReader& stream);
};

/**
 * Reads MapInfo Rect.
 */
void RawStruct<RPG::Rect>::ReadLcf(RPG::Rect& ref, LcfReader& stream, uint32_t length) {
	assert(length == 16);
	stream.Read(ref.l);
	stream.Read(ref.t);
	stream.Read(ref.r);
	stream.Read(ref.b);
}

void RawStruct<RPG::Rect>::WriteLcf(const RPG::Rect& ref, LcfWriter& stream) {
	stream.Write(ref.l);
	stream.Write(ref.t);
	stream.Write(ref.r);
	stream.Write(ref.b);
}

int RawStruct<RPG::Rect>::LcfSize(const RPG::Rect& /* ref */, LcfWriter& /* stream */) {
	return 4 * 4;
}

void RawStruct<RPG::Rect>::WriteXml(const RPG::Rect& ref, XmlWriter& stream) {
	stream.BeginElement("Rect");
	stream.WriteNode<int>("l", ref.l);
	stream.WriteNode<int>("t", ref.t);
	stream.WriteNode<int>("r", ref.r);
	stream.WriteNode<int>("b", ref.b);
	stream.EndElement("Rect");
}

class RectXmlHandler : public XmlHandler {
private:
	RPG::Rect& ref;
	uint32_t* field;
public:
	RectXmlHandler(RPG::Rect& ref) : ref(ref), field(NULL) {}
	void StartElement(XmlReader& stream, const char* name, const char** /* atts */) {
		if (strcmp(name, "l") == 0)
			field = &ref.l;
		else if (strcmp(name, "t") == 0)
			field = &ref.t;
		else if (strcmp(name, "r") == 0)
			field = &ref.r;
		else if (strcmp(name, "b") == 0)
			field = &ref.b;
		else {
			stream.Error("Unrecognized field '%s'", name);
			field = NULL;
		}
	}
	void EndElement(XmlReader& /* stream */, const char* /* name */) {
		field = NULL;
	}
	void CharacterData(XmlReader& /* stream */, const std::string& data) {
		if (field != NULL)
			XmlReader::Read(*field, data);
	}
};

void RawStruct<RPG::Rect>::BeginXml(RPG::Rect& ref, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler("Rect", new RectXmlHandler(ref)));
}
