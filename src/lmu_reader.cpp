/*
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <fstream>

#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_lcf.h"
#include "reader_util.h"
#include "reader_struct.h"

std::unique_ptr<RPG::Map> LMU_Reader::Load(const std::string& filename, const std::string& encoding) {
	std::ifstream stream(filename.c_str(), std::ios::binary);
	return LMU_Reader::Load(stream, encoding);
}

bool LMU_Reader::Save(const std::string& filename, const RPG::Map& save, const std::string& encoding) {
	std::ofstream stream(filename.c_str(), std::ios::binary);
	return LMU_Reader::Save(stream, save, encoding);
}

bool LMU_Reader::SaveXml(const std::string& filename, const RPG::Map& save) {
	std::ofstream stream(filename.c_str(), std::ios::binary);
	return LMU_Reader::SaveXml(stream, save);
}

std::unique_ptr<RPG::Map> LMU_Reader::LoadXml(const std::string& filename) {
	std::ifstream stream(filename.c_str(), std::ios::binary);
	return LMU_Reader::LoadXml(stream);
}

std::unique_ptr<RPG::Map> LMU_Reader::Load(std::istream& filestream, const std::string& encoding) {
	LcfReader reader(filestream, encoding);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse map file.\n");
		return std::unique_ptr<RPG::Map>();
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 10) {
		LcfReader::SetError("This is not a valid RPG2000 map.\n");
		return std::unique_ptr<RPG::Map>();
	}
	if (header != "LcfMapUnit") {
		fprintf(stderr, "Warning: This header is not LcfMapUnit and might not be a valid RPG2000 map.\n");
	}

	auto map = std::unique_ptr<RPG::Map>(new RPG::Map());
	Struct<RPG::Map>::ReadLcf(*map, reader);
	return map;
}

bool LMU_Reader::Save(std::ostream& filestream, const RPG::Map& map, const std::string& encoding) {
	LcfWriter writer(filestream, encoding);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse map file.\n");
		return false;
	}
	const std::string header("LcfMapUnit");
	writer.WriteInt(header.size());
	writer.Write(header);

	Struct<RPG::Map>::WriteLcf(map, writer);
	return true;
}

bool LMU_Reader::SaveXml(std::ostream& filestream, const RPG::Map& map) {
	XmlWriter writer(filestream);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse map file.\n");
		return false;
	}
	writer.BeginElement("LMU");
	Struct<RPG::Map>::WriteXml(map, writer);
	writer.EndElement("LMU");
	return true;
}

std::unique_ptr<RPG::Map> LMU_Reader::LoadXml(std::istream& filestream) {
	XmlReader reader(filestream);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse map file.\n");
		return std::unique_ptr<RPG::Map>();
	}

	auto map = std::unique_ptr<RPG::Map>(new RPG::Map());
	reader.SetHandler(new RootXmlHandler<RPG::Map>(*map, "LMU"));
	reader.Parse();
	return map;
}

