/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
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
#include "lcf/rpg/save.h"

namespace lcf {

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
	void PrepareSave(rpg::Save& save, int32_t version = 0);

	/**
	 * Loads Savegame.
	 */
	std::unique_ptr<rpg::Save> Load(const std::string& filename, const std::string &encoding);

	/**
	 * Saves Savegame.
	 */
	bool Save(const std::string& filename, const rpg::Save& save, const std::string &encoding);

	/*
	 * Saves Savegame as XML.
	 */
	bool SaveXml(const std::string& filename, const rpg::Save& save);

	/**
	 * Loads Savegame as XML.
	 */
	std::unique_ptr<rpg::Save> LoadXml(const std::string& filename);

	/**
	 * Loads Savegame.
	 */
	std::unique_ptr<rpg::Save> Load(std::istream& filestream, const std::string &encoding);

	/**
	 * Saves Savegame.
	 */
	bool Save(std::ostream& filestream, const rpg::Save& save, const std::string &encoding);

	/*
	 * Saves Savegame as XML.
	 */
	bool SaveXml(std::ostream& filestream, const rpg::Save& save);

	/**
	 * Loads Savegame as XML.
	 */
	std::unique_ptr<rpg::Save> LoadXml(std::istream& filestream);
}

} //namespace lcf

#endif
