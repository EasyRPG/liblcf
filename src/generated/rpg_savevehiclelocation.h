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

#ifndef LCF_RPG_SAVEVEHICLELOCATION_H
#define LCF_RPG_SAVEVEHICLELOCATION_H

// Headers
#include "rpg_savemapeventbase.h"
#include <stdint.h>
#include <string>
#include "enum_tags.h"

/**
 * RPG::SaveVehicleLocation class.
 */
namespace RPG {
	class SaveVehicleLocation : public SaveMapEventBase {
	public:
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

		int32_t vehicle = 0;
		int32_t remaining_ascent = 0;
		int32_t remaining_descent = 0;
		std::string orig_sprite_name;
		int32_t orig_sprite_id = 0;
	};

	inline bool operator==(const SaveVehicleLocation& l, const SaveVehicleLocation& r) {
		return l.vehicle == r.vehicle
		&& l.remaining_ascent == r.remaining_ascent
		&& l.remaining_descent == r.remaining_descent
		&& l.orig_sprite_name == r.orig_sprite_name
		&& l.orig_sprite_id == r.orig_sprite_id;
	}

	inline bool operator!=(const SaveVehicleLocation& l, const SaveVehicleLocation& r) {
		return !(l == r);
	}
}

#endif
