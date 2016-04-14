/*
 * Copyright (c) 2016 liblcf authors
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
	/**
	 * Converts from UNIX timestamp to Delphi's TDateTime format.
	 */
	double ToTDateTime(std::time_t const t);


	/**
	 * Converts from Delphi's TDateTime format to UNIX timestamp.
	 */
	std::time_t ToUnixTimestamp(double const ms);

	/**
	 * Returns current system time encoded in Delphi's TDateTime format.
	 */
	double GenerateTimestamp(std::time_t const t = std::time(NULL));

	/**
	 * Loads Savegame.
	 */
	std::unique_ptr<RPG::Save> Load(const std::string& filename, const std::string &encoding);

	/**
	 * Saves Savegame.
	 */
	bool Save(const std::string& filename, const RPG::Save& save, const std::string &encoding);

	/*
	 * Saves Savegame as XML.
	 */
	bool SaveXml(const std::string& filename, const RPG::Save& save);

	/**
	 * Loads Savegame as XML.
	 */
	std::unique_ptr<RPG::Save> LoadXml(const std::string& filename);
}

#endif
