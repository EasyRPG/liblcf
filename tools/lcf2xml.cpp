/*
 * Copyright (c) 2020 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include <lcf/ldb/reader.h>
#include <lcf/lmt/reader.h>
#include <lcf/lmu/reader.h>
#include <lcf/lsd/reader.h>
#include <lcf/reader_util.h>

#ifndef _WIN32
#include <dirent.h>
#endif

#ifdef __MINGW64_VERSION_MAJOR
int _dowildcard = -1; /* enable wildcard expansion for mingw-w64 */
#endif

enum FileCategories
{
	FileCategory_LCF,
	FileCategory_XML,
	FileCategory_Invalid
};

enum FileTypes
{
	FileType_LCF_MapUnit,
	FileType_LCF_SaveData,
	FileType_LCF_Database,
	FileType_LCF_MapTree,
	FileType_XML_MapUnit,
	FileType_XML_SaveData,
	FileType_XML_Database,
	FileType_XML_MapTree,
	FileType_Invalid
};

std::string GetFilename(const std::string& str);
FileCategories GetFilecategory(const std::string& in_file);
FileTypes GetFiletype(const std::string& in_file, std::string& out_extension);
void PrintReaderError(const std::string data);
int ReaderWriteToFile(const std::string& in, const std::string& out, FileTypes in_type);

int main(int argc, char** argv)
{
	if (argc <= 1)
	{
		std::cerr << "LCF2XML - Converts RPG Maker 2000/2003 Files into XML and vice versa" << std::endl;
		std::cerr << "Usage: " << argv[0] << " file1 [... fileN]" << std::endl;

		return 1;
	}

	std::vector<std::string> infiles;
	std::string outfile;

	FileCategories category = FileCategory_Invalid;
	FileTypes type;
	std::string extension;
	unsigned int errors = 0;

	for (int i = 1; i < argc; ++i) {
		if (category == FileCategory_Invalid) {
			category = GetFilecategory(argv[i]);
			if (category == FileCategory_Invalid) {
				std::cerr << "Invalid file " << argv[i] << "." << std::endl;
				errors++;
				continue;
			}
		}

		if (category == GetFilecategory(argv[i])) {
			infiles.push_back(argv[i]);
		}
	}

	for (std::vector<std::string>::iterator it = infiles.begin(); it != infiles.end(); ++it) {
		outfile = GetFilename(*it);
		type = GetFiletype(*it, extension);
		outfile += extension;
		if (ReaderWriteToFile(*it, outfile, type) != 0) {
			errors++;
		}
	}

	if (errors > 0) {
		return 1;
	}

	return 0;
}

/** Returns the filename (without extension). */
std::string GetFilename(const std::string& str)
{
	std::string s = str;
#ifdef _WIN32
	std::replace(s.begin(), s.end(), '\\', '/');
#endif
	// Extension
	size_t found = s.find_last_of(".");
	if (found != std::string::npos)
	{
		s = s.substr(0, found);
	}

	// Filename
	found = s.find_last_of("/");
	if (found == std::string::npos)
	{
		return s;
	}

	s = s.substr(found + 1);
	return s;
}

/** Returns that path (everything left to the last /) */
std::string GetPath(const std::string& str) {
	std::string s = str;
#ifdef _WIN32
	std::replace(s.begin(), s.end(), '\\', '/');
#endif

	// Path
	size_t found = s.find_last_of("/");
	if (found == std::string::npos)
	{
		return ".";
	}

	s = s.substr(0, found);
	return s;
}

FileCategories GetFilecategory(const std::string& in_file)
{
	std::ifstream in(in_file.c_str());

	char buf[4];
	memset(buf, '\0', 4);

	in.seekg(1, std::ios::beg);
	in.read(buf, 3);
	std::string input(buf);

	if (input == "Lcf") {
		return FileCategory_LCF;
	} else if (input == "?xm") {
		return FileCategory_XML;
	}

	return FileCategory_Invalid;
}

/** Uses heuristics to detect the file type. */
FileTypes GetFiletype(const std::string& in_file, std::string& out_extension)
{
	std::ifstream in(in_file.c_str());

	char buf[128];
	memset(buf, '\0', 128);

	in.seekg(1, std::ios::beg);
	in.read(buf, 10);
	std::string input(buf);

	out_extension = ".xml";
	if (input == "LcfDataBas") {
		out_extension = ".edb";
		return FileType_LCF_Database;
	} else if (input == "LcfMapTree") {
		out_extension = ".emt";
		return FileType_LCF_MapTree;
	} else if (input == "LcfSaveDat") {
		out_extension = ".esd";
		return FileType_LCF_SaveData;
	} else if (input == "LcfMapUnit") {
		out_extension = ".emu";
		return FileType_LCF_MapUnit;
	} else if (input == "?xml versi") {
		in.read(buf, 128);
		std::string in(buf);

		size_t pos = in.find('<');
		if (pos != std::string::npos)
		{
			in = in.substr(pos + 1, 3);
			if (in == "LDB") {
				out_extension = ".ldb";
				return FileType_XML_Database;
			} else if (in == "LMT") {
				out_extension = ".lmt";
				return FileType_XML_MapTree;
			} else if (in == "LSD") {
				out_extension = ".lsd";
				return FileType_XML_SaveData;
			} else if (in == "LMU") {
				out_extension = ".lmu";
				return FileType_XML_MapUnit;
			}
		}
	}

	out_extension = "";
	return FileType_Invalid;
}

/** Utility func for errors. */
void PrintReaderError(const std::string data)
{
	std::cerr << data << " error: " << lcf::LcfReader::GetError() << std::endl;
}

#define LCFXML_ERROR(cond, text) \
	if (cond) {\
		PrintReaderError(text);\
		return 2;\
	}

/** Takes data from in and writes converted data into out using liblcf. */
int ReaderWriteToFile(const std::string& in, const std::string& out, FileTypes in_type)
{
	std::string path = GetPath(in) + "/";
	std::string encoding = "";

#ifdef _WIN32
	encoding = lcf::ReaderUtil::GetEncoding(path + "RPG_RT.ini");
#else
	DIR* dir = opendir(path.c_str());
	if (dir) {
		struct dirent* ent;
		while ((ent = ::readdir(dir)) != NULL) {
			if (ent->d_name[0] == '.') { continue; }
			std::string name = ent->d_name;

			std::transform(name.begin(), name.end(), name.begin(), ::tolower);

			if (name == "rpg_rt.ini") {
				encoding = lcf::ReaderUtil::GetEncoding(path + ent->d_name);
				closedir(dir);
				goto dirsuccess;
				break;
			}
		}
		closedir(dir);
	}
	else {
		std::cerr << "Failed opening directory " << path << std::endl;
	}

	dirsuccess:
#endif

	switch (in_type)
	{
		case FileType_LCF_MapUnit:
		{
			std::unique_ptr<lcf::rpg::Map> file = lcf::LMU_Reader::Load(in, encoding);
			LCFXML_ERROR(file.get() == NULL, "LMU load");
			LCFXML_ERROR(!lcf::LMU_Reader::SaveXml(out, *file), "LMU XML save");
			break;
		}
		case FileType_LCF_SaveData:
		{
			std::unique_ptr<lcf::rpg::Save> file = lcf::LSD_Reader::Load(in, encoding);
			LCFXML_ERROR(file.get() == NULL, "LSD load");
			LCFXML_ERROR(!lcf::LSD_Reader::SaveXml(out, *file), "LSD XML save");
			break;
		}
		case FileType_LCF_Database:
		{
			LCFXML_ERROR(!lcf::LDB_Reader::Load(in, encoding), "LDB load");
			LCFXML_ERROR(!lcf::LDB_Reader::SaveXml(out), "LDB XML save");
			break;
		}
		case FileType_LCF_MapTree:
		{
			LCFXML_ERROR(!lcf::LMT_Reader::Load(in, encoding), "LMT load");
			LCFXML_ERROR(!lcf::LMT_Reader::SaveXml(out), "LMT XML save");
			break;
		}
		case FileType_XML_MapUnit:
		{
			std::unique_ptr<lcf::rpg::Map> file = lcf::LMU_Reader::LoadXml(in);
			LCFXML_ERROR(file.get() == NULL, "LMU XML load");
			LCFXML_ERROR(!lcf::LMU_Reader::Save(out, *file, encoding), "LMU save");
			break;
		}
		case FileType_XML_SaveData:
		{
			std::unique_ptr<lcf::rpg::Save> file = lcf::LSD_Reader::LoadXml(in);
			LCFXML_ERROR(file.get() == NULL, "LSD XML load");
			LCFXML_ERROR(!lcf::LSD_Reader::Save(out, *file, encoding), "LSD save");
			break;
		}
		case FileType_XML_Database:
		{
			LCFXML_ERROR(!lcf::LDB_Reader::LoadXml(in), "LDB XML load");
			LCFXML_ERROR(!lcf::LDB_Reader::Save(out, encoding), "LDB save");
			break;
		}
		case FileType_XML_MapTree:
		{
			LCFXML_ERROR(!lcf::LMT_Reader::LoadXml(in), "LMT XML load");
			LCFXML_ERROR(!lcf::LMT_Reader::Save(out, encoding), "LMT save");
			break;
		}
		case FileType_Invalid:
		{
			std::cerr << in << " unsupported" << std::endl;
			return 2;
		}
	}

	return 0;
}
