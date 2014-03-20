/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef _LSD_READER_H_
#define _LSD_READER_H_

#include <string>
#include <vector>
#include <memory>
#include <ctime>
#include "rpg_save.h"

/**
 * LSD Reader namespace.
 */
namespace LSD_Reader {
	double ToMicrosoftAccessTime(std::time_t const t);
	std::time_t ToUnixTime(double const ms);
	double GenerateTimeStamp(std::time_t const t = std::time(NULL));

	std::auto_ptr<RPG::Save> Load(const std::string &filename, const std::string &encoding);
	bool Save(const std::string& filename, const RPG::Save& save, const std::string &encoding);
	bool SaveXml(const std::string& filename, const RPG::Save& save);
	std::auto_ptr<RPG::Save> LoadXml(const std::string &filename);
}

#endif
