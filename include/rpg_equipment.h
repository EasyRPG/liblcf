/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_EQUIPMENT_H
#define LCF_RPG_EQUIPMENT_H

// Headers
#include "reader_types.h"

/**
 * RPG::Equipment class.
 */
namespace RPG {
	class Equipment {
	public:
		Equipment();

		int16_t weapon_id;
		int16_t shield_id;
		int16_t armor_id;
		int16_t helmet_id;
		int16_t accessory_id;
	};
}

#endif
