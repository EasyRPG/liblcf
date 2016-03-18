/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
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
		int16_t weapon_id = 0;
		int16_t shield_id = 0;
		int16_t armor_id = 0;
		int16_t helmet_id = 0;
		int16_t accessory_id = 0;
	};
}

#endif
