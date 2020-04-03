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
#include "lcf/rpg_actor.h"
#include "lcf/rpg_skill.h"
#include "lcf/rpg_item.h"
#include "lcf/rpg_enemy.h"
#include "lcf/rpg_troop.h"
#include "lcf/rpg_attribute.h"
#include "lcf/rpg_state.h"
#include "lcf/rpg_terrain.h"
#include "lcf/rpg_chipset.h"
#include "lcf/rpg_animation.h"
#include "lcf/rpg_terms.h"
#include "lcf/rpg_system.h"
#include "lcf/rpg_commonevent.h"
#include "lcf/rpg_music.h"
#include "lcf/rpg_sound.h"
#include "lcf/rpg_class.h"
#include "lcf/rpg_battlecommand.h"
#include "lcf/rpg_battleranimation.h"
#include "lcf/rpg_battleranimationdata.h"
#include "lcf/rpg_itemanimation.h"
#include "lcf/rpg_parameters.h"
#include "lcf/rpg_equipment.h"
#include "lcf/rpg_database.h"
#include "lcf/lcf_saveopt.h"

namespace lcf {

/**
 * LDB Reader namespace.
 */
namespace LDB_Reader {
	/**
	 * Increment the database save_count.
	 */
	void PrepareSave(RPG::Database& db);

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