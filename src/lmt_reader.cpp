/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "data.h"
#include "reader_util.h"
#include "reader_struct.h"

bool LMT_Reader::Load(const std::string& filename, const std::string &encoding) {
	LcfReader reader(filename, encoding);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 10) {
		LcfReader::SetError("%s is not a valid RPG2000 map tree.\n", filename.c_str());
		return false;
	}
	if (header != "LcfMapTree") {
		fprintf(stderr, "Warning: %s header is not LcfMapTree and might not be a valid RPG2000 map tree.\n", filename.c_str());
	}
	TypeReader<RPG::TreeMap>::ReadLcf(Data::treemap, reader, 0);
	return true;
}

bool LMT_Reader::Save(const std::string& filename, const std::string &encoding) {
	LcfWriter writer(filename, encoding);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't find %s map tree file.\n", filename.c_str());
		return false;
	}
	const std::string header("LcfMapTree");
	writer.WriteInt(header.size());
	writer.Write(header);
	TypeReader<RPG::TreeMap>::WriteLcf(Data::treemap, writer);
	return true;
}

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
