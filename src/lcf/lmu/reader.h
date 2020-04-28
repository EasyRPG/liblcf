/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_LMU_READER_H
#define LCF_LMU_READER_H

#include <string>
#include <memory>
#include "lcf/rpg/map.h"
#include "lcf/saveopt.h"

namespace lcf {

/**
 * LMU Reader namespace.
 */
namespace LMU_Reader {

	/**
	 * Increment the map save count.
	 */
	void PrepareSave(rpg::Map& map);

	/**
	 * Loads map.
	 */
	std::unique_ptr<rpg::Map> Load(const std::string& filename, const std::string& encoding);

	/**
	 * Saves map.
	 */
	bool Save(const std::string& filename, const rpg::Map& map, const std::string& encoding, SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves map as XML.
	 */
	bool SaveXml(const std::string& filename, const rpg::Map& map);

	/**
	 * Loads map as XML.
	 */
	std::unique_ptr<rpg::Map> LoadXml(const std::string& filename);

	/**
	 * Loads map.
	 */
	std::unique_ptr<rpg::Map> Load(std::istream& filestream, const std::string& encoding);

	/**
	 * Saves map.
	 */
	bool Save(std::ostream& filestream, const rpg::Map& map, const std::string& encoding, SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves map as XML.
	 */
	bool SaveXml(std::ostream& filestream, const rpg::Map& map);

	/**
	 * Loads map as XML.
	 */
	std::unique_ptr<rpg::Map> LoadXml(std::istream& filestream);
}

} //namespace lcf

#endif
