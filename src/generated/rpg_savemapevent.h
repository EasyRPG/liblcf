/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_SAVEMAPEVENT_H
#define LCF_RPG_SAVEMAPEVENT_H

// Headers
#include "rpg_savemapeventbase.h"
#include <stdint.h>
#include "rpg_event.h"
#include "rpg_saveeventdata.h"

/**
 * RPG::SaveMapEvent class.
 */
namespace RPG {
	class SaveMapEvent : public SaveMapEventBase {
	public:
		void Setup(const RPG::Event& event);
		void Fixup(const RPG::EventPage& page);
		void UnFixup(const RPG::EventPage& page);
		int ID = 0;
		bool running = false;
		int32_t original_move_route_index = 0;
		bool pending = false;
		SaveEventData event_data;
	};
}

#endif
