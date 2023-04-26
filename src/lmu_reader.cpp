/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <fstream>
#include <cerrno>
#include <cstring>
#include <memory>

#include "lcf/lmu/reader.h"
#include "lcf/lmu/chunks.h"
#include "lcf/reader_lcf.h"
#include "lcf/reader_util.h"
#include "reader_struct.h"

namespace lcf {

void LMU_Reader::PrepareSave(rpg::Map& map) {
	++map.save_count;
}

std::unique_ptr<rpg::Map> LMU_Reader::Load(StringView filename, StringView encoding) {
	std::ifstream stream(ToString(filename), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMU file `%s' for reading : %s\n", ToString(filename).c_str(), strerror(errno));
		return nullptr;
	}
	return LMU_Reader::Load(stream, encoding);
}

bool LMU_Reader::Save(StringView filename, const rpg::Map& save, EngineVersion engine, StringView encoding, SaveOpt opt) {
	std::ofstream stream(ToString(filename), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMU file `%s' for writing : %s\n", ToString(filename).c_str(), strerror(errno));
		return false;
	}
	return LMU_Reader::Save(stream, save, engine, encoding, opt);
}

bool LMU_Reader::SaveXml(StringView filename, const rpg::Map& save, EngineVersion engine) {
	std::ofstream stream(ToString(filename), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMU XML file `%s' for writing : %s\n", ToString(filename).c_str(), strerror(errno));
		return false;
	}
	return LMU_Reader::SaveXml(stream, save, engine);
}

std::unique_ptr<rpg::Map> LMU_Reader::LoadXml(StringView filename) {
	std::ifstream stream(ToString(filename), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMU XML file `%s' for reading : %s\n", ToString(filename).c_str(), strerror(errno));
		return nullptr;
	}
	return LMU_Reader::LoadXml(stream);
}

std::unique_ptr<rpg::Map> LMU_Reader::Load(std::istream& filestream, StringView encoding) {
	LcfReader reader(filestream, ToString(encoding));
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse map file.\n");
		return std::unique_ptr<rpg::Map>();
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 10) {
		LcfReader::SetError("This is not a valid RPG2000 map.\n");
		return std::unique_ptr<rpg::Map>();
	}
	if (header != "LcfMapUnit") {
		fprintf(stderr, "Warning: This header is not LcfMapUnit and might not be a valid RPG2000 map.\n");
	}

	auto map = std::make_unique<rpg::Map>();
	map->lmu_header = std::move(header);
	Struct<rpg::Map>::ReadLcf(*map, reader);
	return map;
}

bool LMU_Reader::Save(std::ostream& filestream, const rpg::Map& map, EngineVersion engine, StringView encoding, SaveOpt opt) {
	LcfWriter writer(filestream, engine, ToString(encoding));
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse map file.\n");
		return false;
	}
	std::string header;
	if ( map.lmu_header.empty() || !bool(opt & SaveOpt::ePreserveHeader)) {
		header = "LcfMapUnit";
	} else {
		header= map.lmu_header;
	}
	writer.WriteInt(header.size());
	writer.Write(header);

	Struct<rpg::Map>::WriteLcf(map, writer);
	return true;
}

bool LMU_Reader::SaveXml(std::ostream& filestream, const rpg::Map& map, EngineVersion engine) {
	XmlWriter writer(filestream, engine);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse map file.\n");
		return false;
	}
	writer.BeginElement("LMU");
	Struct<rpg::Map>::WriteXml(map, writer);
	writer.EndElement("LMU");
	return true;
}

std::unique_ptr<rpg::Map> LMU_Reader::LoadXml(std::istream& filestream) {
	XmlReader reader(filestream);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse map file.\n");
		return std::unique_ptr<rpg::Map>();
	}

	auto map = std::make_unique<rpg::Map>();
	reader.SetHandler(new RootXmlHandler<rpg::Map>(*map, "LMU"));
	reader.Parse();
	return map;
}

} //namespace lcf
