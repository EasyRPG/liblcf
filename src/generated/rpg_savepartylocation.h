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

#ifndef LCF_RPG_SAVEPARTYLOCATION_H
#define LCF_RPG_SAVEPARTYLOCATION_H

// Headers
#include "rpg_savemapeventbase.h"
#include <stdint.h>
#include "enum_tags.h"

/**
 * RPG::SavePartyLocation class.
 */
namespace RPG {
	class SavePartyLocation : public SaveMapEventBase {
	public:
		// Equal to 9 tiles in 1/16th pixels
		static constexpr int kPanXDefault = 9 * 256;
		// Equal to 7 tiles in 1/16th pixels
		static constexpr int kPanYDefault = 7 * 256;
		// Frame speed in 1/16th pixels
		static constexpr int kPanSpeedDefault = 2 << 3;

		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};
		static constexpr auto kVehicleTypeTags = makeEnumTags<VehicleType>(
			"none",
			"skiff",
			"ship",
			"airship"
		);
		enum PanState {
			PanState_fixed = 0,
			PanState_follow = 1
		};
		static constexpr auto kPanStateTags = makeEnumTags<PanState>(
			"fixed",
			"follow"
		);

		bool boarding = false;
		bool aboard = false;
		int32_t vehicle = 0;
		bool unboarding = false;
		int32_t preboard_move_speed = 4;
		bool menu_calling = false;
		int32_t pan_state = 1;
		int32_t pan_current_x = kPanXDefault;
		int32_t pan_current_y = kPanYDefault;
		int32_t pan_finish_x = kPanXDefault;
		int32_t pan_finish_y = kPanYDefault;
		int32_t pan_speed = kPanSpeedDefault;
		int32_t encounter_steps = 0;
		bool encounter_calling = false;
		int32_t map_save_count = 0;
		int32_t database_save_count = 0;
	};
}

#endif
