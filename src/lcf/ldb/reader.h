/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_LDB_READER_H
#define LCF_LDB_READER_H

#include <string>
#include <vector>
#include <memory>
#include "lcf/rpg/database.h"
#include "lcf/saveopt.h"

namespace lcf {

/**
 * LDB Reader namespace.
 */
namespace LDB_Reader {
	/**
	 * Increment the database save_count.
	 */
	void PrepareSave(rpg::Database& db);

	/**
	 * Loads Database.
	 */
	std::unique_ptr<lcf::rpg::Database> Load(const std::string& filename, const std::string& encoding);

	/**
	 * Saves Database.
	 */
	bool Save(const std::string& filename, const lcf::rpg::Database& db, const std::string& encoding, SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves Database as XML.
	 */
	bool SaveXml(const std::string& filename, const lcf::rpg::Database& db);

	/**
	 * Load Database as XML.
	 */
	std::unique_ptr<lcf::rpg::Database> LoadXml(const std::string& filename);

	/**
	 * Loads Database.
	 */
	std::unique_ptr<lcf::rpg::Database> Load(std::istream& filestream, const std::string& encoding);

	/**
	 * Saves Database.
	 */
	bool Save(std::ostream& filestream, const lcf::rpg::Database& db, const std::string& encoding, SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves Database as XML.
	 */
	bool SaveXml(std::ostream& filestream, const lcf::rpg::Database& db);

	/**
	 * Load Database as XML.
	 */
	std::unique_ptr<lcf::rpg::Database> LoadXml(std::istream& filestream);
}

} // namespace lcf

#endif
