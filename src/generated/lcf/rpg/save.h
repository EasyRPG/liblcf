/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
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
#include "lcf/rpg/saveactor.h"
#include "lcf/rpg/savecommonevent.h"
#include "lcf/rpg/saveeasyrpgdata.h"
#include "lcf/rpg/saveeventexecstate.h"
#include "lcf/rpg/saveinventory.h"
#include "lcf/rpg/savemapinfo.h"
#include "lcf/rpg/savepanorama.h"
#include "lcf/rpg/savepartylocation.h"
#include "lcf/rpg/savepicture.h"
#include "lcf/rpg/savescreen.h"
#include "lcf/rpg/savesystem.h"
#include "lcf/rpg/savetarget.h"
#include "lcf/rpg/savetitle.h"
#include "lcf/rpg/savevehiclelocation.h"
#include <ostream>

/**
 * rpg::Save class.
 */
namespace lcf {
namespace rpg {
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

	std::ostream& operator<<(std::ostream& os, const Save& obj);
} // namespace rpg
} // namespace lcf

#endif
