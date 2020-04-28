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
#include "lcf/rpg/actor.h"
#include "lcf/rpg/skill.h"
#include "lcf/rpg/item.h"
#include "lcf/rpg/enemy.h"
#include "lcf/rpg/troop.h"
#include "lcf/rpg/attribute.h"
#include "lcf/rpg/state.h"
#include "lcf/rpg/terrain.h"
#include "lcf/rpg/chipset.h"
#include "lcf/rpg/animation.h"
#include "lcf/rpg/terms.h"
#include "lcf/rpg/system.h"
#include "lcf/rpg/commonevent.h"
#include "lcf/rpg/music.h"
#include "lcf/rpg/sound.h"
#include "lcf/rpg/class.h"
#include "lcf/rpg/battlecommand.h"
#include "lcf/rpg/battleranimation.h"
#include "lcf/rpg/battleranimationdata.h"
#include "lcf/rpg/itemanimation.h"
#include "lcf/rpg/parameters.h"
#include "lcf/rpg/equipment.h"
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
	bool Load(const std::string& filename, const std::string& encoding);

	/**
	 * Saves Database.
	 */
	bool Save(const std::string& filename, const std::string& encoding, SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves Database as XML.
	 */
	bool SaveXml(const std::string& filename);

	/**
	 * Load Database as XML.
	 */
	bool LoadXml(const std::string& filename);

	/**
	 * Loads Database.
	 */
	bool Load(std::istream& filestream, const std::string& encoding);

	/**
	 * Saves Database.
	 */
	bool Save(std::ostream& filestream, const std::string& encoding, SaveOpt opt = SaveOpt::eNone);

	/**
	 * Saves Database as XML.
	 */
	bool SaveXml(std::ostream& filestream);

	/**
	 * Load Database as XML.
	 */
	bool LoadXml(std::istream& filestream);
}

} // namespace lcf

#endif
