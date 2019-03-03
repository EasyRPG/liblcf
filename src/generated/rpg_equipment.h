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

#ifndef LCF_RPG_EQUIPMENT_H
#define LCF_RPG_EQUIPMENT_H

// Headers
#include <stdint.h>

/**
 * RPG::Equipment class.
 */
namespace RPG {
	class Equipment {
	public:
		int16_t weapon_id = 0;
		int16_t shield_id = 0;
		int16_t armor_id = 0;
		int16_t helmet_id = 0;
		int16_t accessory_id = 0;
	};

	inline bool operator==(const Equipment& l, const Equipment& r) {
		return l.weapon_id == r.weapon_id
		&& l.shield_id == r.shield_id
		&& l.armor_id == r.armor_id
		&& l.helmet_id == r.helmet_id
		&& l.accessory_id == r.accessory_id;
	}

	inline bool operator!=(const Equipment& l, const Equipment& r) {
		return !(l == r);
	}
}

#endif
