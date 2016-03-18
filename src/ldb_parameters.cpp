/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

template <>
struct RawStruct<RPG::Parameters> {
	static void ReadLcf(RPG::Parameters& ref, LcfReader& stream, uint32_t length);
	static void WriteLcf(const RPG::Parameters& ref, LcfWriter& stream);
	static int LcfSize(const RPG::Parameters& ref, LcfWriter& stream);
	static void WriteXml(const RPG::Parameters& ref, XmlWriter& stream);
	static void BeginXml(RPG::Parameters& ref, XmlReader& stream);
};

/**
 * Reads Parameters.
 */
void RawStruct<RPG::Parameters>::ReadLcf(RPG::Parameters& ref, LcfReader& stream, uint32_t length) {
	int n = length / 6;
	stream.Read(ref.maxhp, n);
	stream.Read(ref.maxsp, n);
	stream.Read(ref.attack, n);
	stream.Read(ref.defense, n);
	stream.Read(ref.spirit, n);
	stream.Read(ref.agility, n);
}

void RawStruct<RPG::Parameters>::WriteLcf(const RPG::Parameters& ref, LcfWriter& stream) {
	stream.Write(ref.maxhp);
	stream.Write(ref.maxsp);
	stream.Write(ref.attack);
	stream.Write(ref.defense);
	stream.Write(ref.spirit);
	stream.Write(ref.agility);
}

int RawStruct<RPG::Parameters>::LcfSize(const RPG::Parameters& ref, LcfWriter& /* stream */) {
	return ref.maxhp.size() * 2 * 6;
}

void RawStruct<RPG::Parameters>::WriteXml(const RPG::Parameters& ref, XmlWriter& stream) {
	stream.BeginElement("Parameters");
	stream.WriteNode<std::vector<int16_t> >("maxhp", ref.maxhp);
	stream.WriteNode<std::vector<int16_t> >("maxsp", ref.maxsp);
	stream.WriteNode<std::vector<int16_t> >("attack", ref.attack);
	stream.WriteNode<std::vector<int16_t> >("defense", ref.defense);
	stream.WriteNode<std::vector<int16_t> >("spirit", ref.spirit);
	stream.WriteNode<std::vector<int16_t> >("agility", ref.agility);
	stream.EndElement("Parameters");
}

class ParametersXmlHandler : public XmlHandler {
private:
	RPG::Parameters& ref;
	std::vector<int16_t>* field;
public:
	ParametersXmlHandler(RPG::Parameters& ref) : ref(ref), field(NULL) {}
	void StartElement(XmlReader& stream, const char* name, const char** /* atts */) {
		if (strcmp(name, "maxhp") == 0)
			field = &ref.maxhp;
		else if (strcmp(name, "maxsp") == 0)
			field = &ref.maxsp;
		else if (strcmp(name, "attack") == 0)
			field = &ref.attack;
		else if (strcmp(name, "defense") == 0)
			field = &ref.defense;
		else if (strcmp(name, "spirit") == 0)
			field = &ref.spirit;
		else if (strcmp(name, "agility") == 0)
			field = &ref.agility;
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
			XmlReader::Read<std::vector<int16_t> >(*field, data);
	}
};

void RawStruct<RPG::Parameters>::BeginXml(RPG::Parameters& ref, XmlReader& stream) {
	stream.SetHandler(new WrapperXmlHandler("Parameters", new ParametersXmlHandler(ref)));
}
