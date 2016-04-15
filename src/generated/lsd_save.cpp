/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read Save.

#define LCF_CHUNK_SUFFIX LSD_Reader
#define LCF_CURRENT_STRUCT Save

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(RPG::SaveTitle, title),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveSystem, system),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveScreen, screen),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SavePicture>, pictures),
	LCF_STRUCT_TYPED_FIELD(RPG::SavePartyLocation, party_location),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveVehicleLocation, boat_location),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveVehicleLocation, ship_location),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveVehicleLocation, airship_location),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveActor>, actors),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveInventory, inventory),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveTarget>, targets),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveMapInfo, map_info),
	LCF_STRUCT_TYPED_FIELD(int, panorama_data),
	LCF_STRUCT_TYPED_FIELD(RPG::SaveEventData, events),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::SaveCommonEvent>, common_events),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
