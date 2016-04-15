/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include <cmath>
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "ldb_reader.h"
#include "rpg_save.h"
#include "reader_util.h"
#include "reader_struct.h"


double LSD_Reader::ToTDateTime(std::time_t const t) {
	// 25569 is UnixDateDelta: number of days between 1970-01-01 and 1900-01-01
	return(t / 86400.0 + 25569.0);
}

std::time_t LSD_Reader::ToUnixTimestamp(double const ms) {
	return(std::time_t(ms * 86400.0 - 25569.0 * 86400.0 + 0.5));
}

double LSD_Reader::GenerateTimestamp(std::time_t const t) {
	return ToTDateTime(t);
}

std::unique_ptr<RPG::Save> LSD_Reader::Load(const std::string& filename, const std::string &encoding) {
	LcfReader reader(filename, encoding);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't find %s save file.\n", filename.c_str());
		return std::unique_ptr<RPG::Save>();
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 11) {
		LcfReader::SetError("%s is not a valid RPG2000 save.\n", filename.c_str());
		return std::unique_ptr<RPG::Save>();
	}
	if (header != "LcfSaveData") {
		fprintf(stderr, "Warning: %s header is not LcfSaveData and might not be a valid RPG2000 save.\n", filename.c_str());
	}
	RPG::Save* save = new RPG::Save();
	Struct<RPG::Save>::ReadLcf(*save, reader);
	return std::unique_ptr<RPG::Save>(save);
}

bool LSD_Reader::Save(const std::string& filename, const RPG::Save& save, const std::string &encoding) {
	LcfWriter writer(filename, encoding);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't find %s save file.\n", filename.c_str());
		return false;
	}
	const std::string header("LcfSaveData");
	writer.WriteInt(header.size());
	writer.Write(header);

	const_cast<RPG::Save&>(save).title.timestamp = GenerateTimestamp();

	Struct<RPG::Save>::WriteLcf(save, writer);
	return true;
}

bool LSD_Reader::SaveXml(const std::string& filename, const RPG::Save& save) {
	XmlWriter writer(filename);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't find %s save file.\n", filename.c_str());
		return false;
	}

	writer.BeginElement("LSD");
	Struct<RPG::Save>::WriteXml(save, writer);
	writer.EndElement("LSD");
	return true;
}

std::unique_ptr<RPG::Save> LSD_Reader::LoadXml(const std::string& filename) {
	XmlReader reader(filename);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't find %s save file.\n", filename.c_str());
		return std::unique_ptr<RPG::Save>();
	}

	RPG::Save* save = new RPG::Save();
	reader.SetHandler(new RootXmlHandler<RPG::Save>(*save, "LSD"));
	reader.Parse();
	return std::unique_ptr<RPG::Save>(save);
}
