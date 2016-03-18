/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_LDB_READER_H
#define LCF_LDB_READER_H

#include <string>
#include <vector>
#include "rpg_actor.h"
#include "rpg_skill.h"
#include "rpg_item.h"
#include "rpg_enemy.h"
#include "rpg_troop.h"
#include "rpg_attribute.h"
#include "rpg_state.h"
#include "rpg_terrain.h"
#include "rpg_chipset.h"
#include "rpg_animation.h"
#include "rpg_terms.h"
#include "rpg_system.h"
#include "rpg_commonevent.h"
#include "rpg_music.h"
#include "rpg_sound.h"
#include "rpg_class.h"
#include "rpg_battlecommand.h"
#include "rpg_battleranimation.h"
#include "rpg_battleranimationdata.h"
#include "rpg_itemanimation.h"
#include "rpg_parameters.h"
#include "rpg_equipment.h"
#include "rpg_database.h"

/**
 * LDB Reader namespace.
 */
namespace LDB_Reader {

	/**
	 * Loads Database.
	 */
	bool Load(const std::string& filename, const std::string& encoding);

	/**
	 * Saves Database.
	 */
	bool Save(const std::string& filename, const std::string& encoding);

	/**
	 * Saves Database as XML.
	 */
	bool SaveXml(const std::string& filename);

	/**
	 * Load Database as XML.
	 */
	bool LoadXml(const std::string& filename);
}

#endif
