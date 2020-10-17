/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_LMT_READER_H
#define LCF_LMT_READER_H

#include <string>
#include <memory>
#include "lcf/rpg/treemap.h"
#include "lcf/saveopt.h"

namespace lcf {

/**
 * LMT Reader namespace.
 */
namespace LMT_Reader {

	/**
	 * Loads Map Tree.
	 */
	std::unique_ptr<lcf::rpg::TreeMap> Load(const std::string& filename, const std::string &encoding);

	/**
	 * Saves Map Tree.
	 */
	bool Save(const std::string& filename, const lcf::rpg::TreeMap& tmap, bool is2k3, const std::string &encoding, SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves Map Tree as XML.
	 */
	bool SaveXml(const std::string& filename, const lcf::rpg::TreeMap& tmap, bool is2k3);

	/**
	 * Loads Map Tree as XML.
	 */
	std::unique_ptr<lcf::rpg::TreeMap> LoadXml(const std::string& filename);

	/**
	 * Loads Map Tree.
	 */
	std::unique_ptr<lcf::rpg::TreeMap> Load(std::istream& filestream, const std::string &encoding);

	/**
	 * Saves Map Tree.
	 */
	bool Save(std::ostream& filestream, const lcf::rpg::TreeMap& tmap, bool is2k3, const std::string &encoding, SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves Map Tree as XML.
	 */
	bool SaveXml(std::ostream& filestream, const lcf::rpg::TreeMap& tmap, bool is2k3);

	/**
	 * Loads Map Tree as XML.
	 */
	std::unique_ptr<lcf::rpg::TreeMap> LoadXml(std::istream& filestream);
}

} //namespace lcf

#endif
