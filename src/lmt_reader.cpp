/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <fstream>
#include <cerrno>
#include <cstring>

#include "lcf/lmt/reader.h"
#include "lcf/lmt/chunks.h"
#include "lcf/data.h"
#include "lcf/reader_util.h"
#include "reader_struct.h"

namespace lcf {

bool LMT_Reader::Load(const std::string& filename, const std::string& encoding) {
	std::ifstream stream(filename.c_str(), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMT file `%s' for reading : %s\n", filename.c_str(), strerror(errno));
		return false;
	}
	return LMT_Reader::Load(stream, encoding);
}

bool LMT_Reader::Save(const std::string& filename, const std::string& encoding, SaveOpt opt) {
	std::ofstream stream(filename.c_str(), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMT file `%s' for writing : %s\n", filename.c_str(), strerror(errno));
		return false;
	}
	return LMT_Reader::Save(stream, encoding, opt);
}

bool LMT_Reader::SaveXml(const std::string& filename) {
	std::ofstream stream(filename.c_str(), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMT XML file `%s' for writing : %s\n", filename.c_str(), strerror(errno));
		return false;
	}
	return LMT_Reader::SaveXml(stream);
}

bool LMT_Reader::LoadXml(const std::string& filename) {
	std::ifstream stream(filename.c_str(), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMT XML file `%s' for reading : %s\n", filename.c_str(), strerror(errno));
		return false;
	}
	return LMT_Reader::LoadXml(stream);
}

bool LMT_Reader::Load(std::istream& filestream, const std::string &encoding) {
	LcfReader reader(filestream, encoding);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse map tree file.\n");
		return false;
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 10) {
		LcfReader::SetError("This is not a valid RPG2000 map tree.\n");
		return false;
	}
	if (header != "LcfMapTree") {
		fprintf(stderr, "Warning: This header is not LcfMapTree and might not be a valid RPG2000 map tree.\n");
	}
	Data::treemap.lmt_header = std::move(header);
	TypeReader<rpg::TreeMap>::ReadLcf(Data::treemap, reader, 0);
	return true;
}

bool LMT_Reader::Save(std::ostream& filestream, const std::string &encoding, SaveOpt opt) {
	LcfWriter writer(filestream, encoding);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse map tree file.\n");
		return false;
	}
	std::string header;
	if ( Data::treemap.lmt_header.empty() || !bool(opt & SaveOpt::ePreserveHeader)) {
		header = "LcfMapTree";
	} else {
		header= Data::treemap.lmt_header;
	}
	writer.WriteInt(header.size());
	writer.Write(header);
	TypeReader<rpg::TreeMap>::WriteLcf(Data::treemap, writer);
	return true;
}

bool LMT_Reader::SaveXml(std::ostream& filestream) {
	XmlWriter writer(filestream);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse map tree file.\n");
		return false;
	}
	writer.BeginElement("LMT");
	TypeReader<rpg::TreeMap>::WriteXml(Data::treemap, writer);
	writer.EndElement("LMT");
	return true;
}

bool LMT_Reader::LoadXml(std::istream& filestream) {
	XmlReader reader(filestream);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse map tree file.\n");
		return false;
	}
	reader.SetHandler(new RootXmlHandler<rpg::TreeMap>(Data::treemap, "LMT"));
	reader.Parse();
	return true;
}

} //namespace lcf
