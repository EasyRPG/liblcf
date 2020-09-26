/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <cmath>
#include <fstream>
#include <cerrno>
#include <cstring>

#include "lcf/lsd/reader.h"
#include "lcf/lsd/chunks.h"
#include "lcf/rpg/save.h"
#include "lcf/reader_util.h"
#include "reader_struct.h"

namespace lcf {

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

void LSD_Reader::PrepareSave(rpg::Save& save, int32_t version) {
	++save.system.save_count;
	save.title.timestamp = LSD_Reader::GenerateTimestamp();
	save.easyrpg_data.version = version;
}

std::unique_ptr<rpg::Save> LSD_Reader::Load(const std::string& filename, const std::string& encoding) {
	std::ifstream stream(filename.c_str(), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LSD file `%s' for reading : %s\n", filename.c_str(), strerror(errno));
		return nullptr;
	}
	return LSD_Reader::Load(stream, encoding);
}

bool LSD_Reader::Save(const std::string& filename, const rpg::Save& save, const std::string& encoding) {
	std::ofstream stream(filename.c_str(), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LSD file `%s' for writing : %s\n", filename.c_str(), strerror(errno));
		return false;
	}
	return LSD_Reader::Save(stream, save, encoding);
}

bool LSD_Reader::SaveXml(const std::string& filename, const rpg::Save& save) {
	std::ofstream stream(filename.c_str(), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LSD XML file `%s' for writing : %s\n", filename.c_str(), strerror(errno));
		return false;
	}
	return LSD_Reader::SaveXml(stream, save);
}

std::unique_ptr<rpg::Save> LSD_Reader::LoadXml(const std::string& filename) {
	std::ifstream stream(filename.c_str(), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LSD XML file `%s' for reading : %s\n", filename.c_str(), strerror(errno));
		return nullptr;
	}
	return LSD_Reader::LoadXml(stream);
}

std::unique_ptr<rpg::Save> LSD_Reader::Load(std::istream& filestream, const std::string &encoding) {
	LcfReader reader(filestream, encoding);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse save file.\n");
		return std::unique_ptr<rpg::Save>();
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 11) {
		LcfReader::SetError("This is not a valid RPG2000 save.\n");
		return std::unique_ptr<rpg::Save>();
	}
	if (header != "LcfSaveData") {
		fprintf(stderr, "Warning: This header is not LcfSaveData and might not be a valid RPG2000 save.\n");
	}
	rpg::Save* save = new rpg::Save();
	Struct<rpg::Save>::ReadLcf(*save, reader);
	return std::unique_ptr<rpg::Save>(save);
}

bool LSD_Reader::Save(std::ostream& filestream, const rpg::Save& save, const std::string &encoding) {
	LcfWriter writer(filestream, encoding);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse save file.\n");
		return false;
	}
	const std::string header("LcfSaveData");
	writer.WriteInt(header.size());
	writer.Write(header);

	Struct<rpg::Save>::WriteLcf(save, writer);
	return true;
}

bool LSD_Reader::SaveXml(std::ostream& filestream, const rpg::Save& save) {
	XmlWriter writer(filestream);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse save file.\n");
		return false;
	}

	writer.BeginElement("LSD");
	Struct<rpg::Save>::WriteXml(save, writer);
	writer.EndElement("LSD");
	return true;
}

std::unique_ptr<rpg::Save> LSD_Reader::LoadXml(std::istream& filestream) {
	XmlReader reader(filestream);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse save file.\n");
		return std::unique_ptr<rpg::Save>();
	}

	rpg::Save* save = new rpg::Save();
	reader.SetHandler(new RootXmlHandler<rpg::Save>(*save, "LSD"));
	reader.Parse();
	return std::unique_ptr<rpg::Save>(save);
}

} //namespace lcf
