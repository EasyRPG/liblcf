/*
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
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
#include "rpg_map.h"

/**
 * LMU Reader namespace.
 */
namespace LMU_Reader {

	/**
	 * Loads map.
	 */
	std::unique_ptr<RPG::Map> Load(const std::string& filename, const std::string& encoding);

	/**
	 * Saves map.
	 */
	bool Save(const std::string& filename, const RPG::Map& map, const std::string& encoding);

	/**
	 * Saves map as XML.
	 */
	bool SaveXml(const std::string& filename, const RPG::Map& map);

	/**
	 * Loads map as XML.
	 */
	std::unique_ptr<RPG::Map> LoadXml(const std::string& filename);
}

#endif
