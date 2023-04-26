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

#include "lcf/lmt/reader.h"
#include "lcf/lmt/chunks.h"
#include "lcf/reader_util.h"
#include "reader_struct.h"

namespace lcf {

std::unique_ptr<lcf::rpg::TreeMap> LMT_Reader::Load(StringView filename, StringView encoding) {
	std::ifstream stream(ToString(filename), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMT file `%s' for reading : %s\n", ToString(filename).c_str(), strerror(errno));
		return nullptr;
	}
	return LMT_Reader::Load(stream, encoding);
}

bool LMT_Reader::Save(StringView filename, const lcf::rpg::TreeMap& tmap, EngineVersion engine, StringView encoding, SaveOpt opt) {
	std::ofstream stream(ToString(filename), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMT file `%s' for writing : %s\n", ToString(filename).c_str(), strerror(errno));
		return false;
	}
	return LMT_Reader::Save(stream, tmap, engine, encoding, opt);
}

bool LMT_Reader::SaveXml(StringView filename, const lcf::rpg::TreeMap& tmap, EngineVersion engine) {
	std::ofstream stream(ToString(filename), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMT XML file `%s' for writing : %s\n", ToString(filename).c_str(), strerror(errno));
		return false;
	}
	return LMT_Reader::SaveXml(stream, tmap, engine);
}

std::unique_ptr<lcf::rpg::TreeMap> LMT_Reader::LoadXml(StringView filename) {
	std::ifstream stream(ToString(filename), std::ios::binary);
	if (!stream.is_open()) {
		fprintf(stderr, "Failed to open LMT XML file `%s' for reading : %s\n", ToString(filename).c_str(), strerror(errno));
		return nullptr;
	}
	return LMT_Reader::LoadXml(stream);
}

std::unique_ptr<lcf::rpg::TreeMap> LMT_Reader::Load(std::istream& filestream, StringView encoding) {
	LcfReader reader(filestream, ToString(encoding));
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse map tree file.\n");
		return nullptr;
	}
	std::string header;
	reader.ReadString(header, reader.ReadInt());
	if (header.length() != 10) {
		LcfReader::SetError("This is not a valid RPG2000 map tree.\n");
		return nullptr;
	}
	if (header != "LcfMapTree") {
		fprintf(stderr, "Warning: This header is not LcfMapTree and might not be a valid RPG2000 map tree.\n");
	}
	auto tmap = std::make_unique<lcf::rpg::TreeMap>();
	tmap->lmt_header = std::move(header);
	TypeReader<rpg::TreeMap>::ReadLcf(*tmap, reader, 0);
	return tmap;
}

bool LMT_Reader::Save(std::ostream& filestream, const lcf::rpg::TreeMap& tmap, EngineVersion engine, StringView encoding, SaveOpt opt) {
	LcfWriter writer(filestream, engine, ToString(encoding));
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse map tree file.\n");
		return false;
	}
	std::string header;
	if ( tmap.lmt_header.empty() || !bool(opt & SaveOpt::ePreserveHeader)) {
		header = "LcfMapTree";
	} else {
		header= tmap.lmt_header;
	}
	writer.WriteInt(header.size());
	writer.Write(header);
	TypeReader<rpg::TreeMap>::WriteLcf(tmap, writer);
	return true;
}

bool LMT_Reader::SaveXml(std::ostream& filestream, const lcf::rpg::TreeMap& tmap, EngineVersion engine) {
	XmlWriter writer(filestream, engine);
	if (!writer.IsOk()) {
		LcfReader::SetError("Couldn't parse map tree file.\n");
		return false;
	}
	writer.BeginElement("LMT");
	TypeReader<rpg::TreeMap>::WriteXml(tmap, writer);
	writer.EndElement("LMT");
	return true;
}

std::unique_ptr<lcf::rpg::TreeMap> LMT_Reader::LoadXml(std::istream& filestream) {
	XmlReader reader(filestream);
	if (!reader.IsOk()) {
		LcfReader::SetError("Couldn't parse map tree file.\n");
		return nullptr;
	}
	auto tmap = std::make_unique<lcf::rpg::TreeMap>();
	reader.SetHandler(new RootXmlHandler<rpg::TreeMap>(*tmap, "LMT"));
	reader.Parse();
	return tmap;
}

} //namespace lcf
