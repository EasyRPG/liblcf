/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_LSD_READER_H
#define LCF_LSD_READER_H

#include <string>
#include <vector>
#include <memory>
#include <ctime>
#include <stdint.h>
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
	 * Increment the save save_count and update the timestamp.
	 */
	void PrepareSave(RPG::Save& save, int32_t version = 0);

	/**
	 * Returns a copy of the save data with defaults cleared.
	 */
	RPG::Save ClearDefaults(const RPG::Save& save, const RPG::MapInfo& map_info, const RPG::Map& map);

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

	/**
	 * Loads Savegame.
	 */
	std::unique_ptr<RPG::Save> Load(std::istream& filestream, const std::string &encoding);

	/**
	 * Saves Savegame.
	 */
	bool Save(std::ostream& filestream, const RPG::Save& save, const std::string &encoding);

	/*
	 * Saves Savegame as XML.
	 */
	bool SaveXml(std::ostream& filestream, const RPG::Save& save);

	/**
	 * Loads Savegame as XML.
	 */
	std::unique_ptr<RPG::Save> LoadXml(std::istream& filestream);
}

#endif
