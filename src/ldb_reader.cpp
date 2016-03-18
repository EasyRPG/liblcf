/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "data.h"
#include "reader_util.h"
#include "reader_struct.h"

bool LDB_Reader::Load(const std::string& filename, const std::string& encoding) {
	LcfReader reader(filename, encoding);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't find %s database file.\n", filename.c_str());
		return false;
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 11) {
		LcfReader::SetError("%s is not a valid RPG2000 database.\n", filename.c_str());
		return false;
	}
	if (header != "LcfDataBase") {
		fprintf(stderr, "Warning: %s header is not LcfDataBase and might not be a valid RPG2000 database.\n", filename.c_str());
	}
	TypeReader<RPG::Database>::ReadLcf(Data::data, reader, 0);

	// Delayed initialization of some actor fields because they are engine
	// dependent
	std::vector<RPG::Actor>::iterator it;
	for (it = Data::actors.begin(); it != Data::actors.end(); ++it) {
		(*it).Setup();
	}

	return true;
}

bool LDB_Reader::Save(const std::string& filename, const std::string& encoding) {
	LcfWriter writer(filename, encoding);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't open %s database file.\n", filename.c_str());
		return false;
	}
	const std::string header("LcfDataBase");
	writer.WriteInt(header.size());
	writer.Write(header);
	TypeReader<RPG::Database>::WriteLcf(Data::data, writer);
	return true;
}

bool LDB_Reader::SaveXml(const std::string& filename) {
	XmlWriter writer(filename);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't open %s database file.\n", filename.c_str());
		return false;
	}
	writer.BeginElement("LDB");
	TypeReader<RPG::Database>::WriteXml(Data::data, writer);
	writer.EndElement("LDB");
	return true;
}

bool LDB_Reader::LoadXml(const std::string& filename) {
	XmlReader reader(filename);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't open %s database file.\n", filename.c_str());
		return false;
	}
	reader.SetHandler(new RootXmlHandler<RPG::Database>(Data::data, "LDB"));
	reader.Parse();
	return true;
}
