/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVE_H
#define LCF_RPG_SAVE_H

// Headers
#include <vector>
#include "rpg_saveactor.h"
#include "rpg_savecommonevent.h"
#include "rpg_saveeasyrpgdata.h"
#include "rpg_saveeventexecstate.h"
#include "rpg_saveinventory.h"
#include "rpg_savemapinfo.h"
#include "rpg_savepanorama.h"
#include "rpg_savepartylocation.h"
#include "rpg_savepicture.h"
#include "rpg_savescreen.h"
#include "rpg_savesystem.h"
#include "rpg_savetarget.h"
#include "rpg_savetitle.h"
#include "rpg_savevehiclelocation.h"

/**
 * RPG::Save class.
 */
namespace RPG {
	class Save {
	public:
		void Setup();
		SaveTitle title;
		SaveSystem system;
		SaveScreen screen;
		std::vector<SavePicture> pictures;
		SavePartyLocation party_location;
		SaveVehicleLocation boat_location;
		SaveVehicleLocation ship_location;
		SaveVehicleLocation airship_location;
		std::vector<SaveActor> actors;
		SaveInventory inventory;
		std::vector<SaveTarget> targets;
		SaveMapInfo map_info;
		SavePanorama panorama;
		SaveEventExecState foreground_event_execstate;
		std::vector<SaveCommonEvent> common_events;
		SaveEasyRpgData easyrpg_data;
	};

	inline bool operator==(const Save& l, const Save& r) {
		return l.title == r.title
		&& l.system == r.system
		&& l.screen == r.screen
		&& l.pictures == r.pictures
		&& l.party_location == r.party_location
		&& l.boat_location == r.boat_location
		&& l.ship_location == r.ship_location
		&& l.airship_location == r.airship_location
		&& l.actors == r.actors
		&& l.inventory == r.inventory
		&& l.targets == r.targets
		&& l.map_info == r.map_info
		&& l.panorama == r.panorama
		&& l.foreground_event_execstate == r.foreground_event_execstate
		&& l.common_events == r.common_events
		&& l.easyrpg_data == r.easyrpg_data;
	}

	inline bool operator!=(const Save& l, const Save& r) {
		return !(l == r);
	}
}

#endif
