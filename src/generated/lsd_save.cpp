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

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read Save.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT Save

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(RPG::SaveTitle, title, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveSystem, system, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveScreen, screen, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SavePicture>, pictures, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SavePartyLocation, party_location, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveVehicleLocation, boat_location, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveVehicleLocation, ship_location, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveVehicleLocation, airship_location, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveActor>, actors, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveInventory, inventory, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveTarget>, targets, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveMapInfo, map_info, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SavePanorama, panorama, 1, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveEventData, events, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveCommonEvent>, common_events, 1, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
