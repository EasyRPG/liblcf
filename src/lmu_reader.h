/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
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
