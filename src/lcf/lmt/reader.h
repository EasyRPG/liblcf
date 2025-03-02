/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
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
	std::unique_ptr<lcf::rpg::TreeMap> Load(std::string_view filename, std::string_view encoding = "");

	/**
	 * Saves Map Tree.
	 */
	bool Save(std::string_view filename, const lcf::rpg::TreeMap& tmap, EngineVersion engine, std::string_view encoding = "", SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves Map Tree as XML.
	 */
	bool SaveXml(std::string_view filename, const lcf::rpg::TreeMap& tmap, EngineVersion engine);

	/**
	 * Loads Map Tree as XML.
	 */
	std::unique_ptr<lcf::rpg::TreeMap> LoadXml(std::string_view filename);

	/**
	 * Loads Map Tree.
	 */
	std::unique_ptr<lcf::rpg::TreeMap> Load(std::istream& filestream, std::string_view encoding = "");

	/**
	 * Saves Map Tree.
	 */
	bool Save(std::ostream& filestream, const lcf::rpg::TreeMap& tmap, EngineVersion engine, std::string_view encoding = "", SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves Map Tree as XML.
	 */
	bool SaveXml(std::ostream& filestream, const lcf::rpg::TreeMap& tmap, EngineVersion engine);

	/**
	 * Loads Map Tree as XML.
	 */
	std::unique_ptr<lcf::rpg::TreeMap> LoadXml(std::istream& filestream);
}

} //namespace lcf

#endif
