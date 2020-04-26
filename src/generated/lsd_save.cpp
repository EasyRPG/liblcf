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

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read Save.

template <>
char const* const Struct<RPG::Save>::name = "Save";
static TypedField<RPG::Save, RPG::SaveTitle> static_title(
	&RPG::Save::title,
	LSD_Reader::ChunkSave::title,
	"title",
	0,
	0
);
static TypedField<RPG::Save, RPG::SaveSystem> static_system(
	&RPG::Save::system,
	LSD_Reader::ChunkSave::system,
	"system",
	1,
	0
);
static TypedField<RPG::Save, RPG::SaveScreen> static_screen(
	&RPG::Save::screen,
	LSD_Reader::ChunkSave::screen,
	"screen",
	1,
	0
);
static TypedField<RPG::Save, std::vector<RPG::SavePicture>> static_pictures(
	&RPG::Save::pictures,
	LSD_Reader::ChunkSave::pictures,
	"pictures",
	1,
	0
);
static TypedField<RPG::Save, RPG::SavePartyLocation> static_party_location(
	&RPG::Save::party_location,
	LSD_Reader::ChunkSave::party_location,
	"party_location",
	1,
	0
);
static TypedField<RPG::Save, RPG::SaveVehicleLocation> static_boat_location(
	&RPG::Save::boat_location,
	LSD_Reader::ChunkSave::boat_location,
	"boat_location",
	1,
	0
);
static TypedField<RPG::Save, RPG::SaveVehicleLocation> static_ship_location(
	&RPG::Save::ship_location,
	LSD_Reader::ChunkSave::ship_location,
	"ship_location",
	1,
	0
);
static TypedField<RPG::Save, RPG::SaveVehicleLocation> static_airship_location(
	&RPG::Save::airship_location,
	LSD_Reader::ChunkSave::airship_location,
	"airship_location",
	1,
	0
);
static TypedField<RPG::Save, std::vector<RPG::SaveActor>> static_actors(
	&RPG::Save::actors,
	LSD_Reader::ChunkSave::actors,
	"actors",
	1,
	0
);
static TypedField<RPG::Save, RPG::SaveInventory> static_inventory(
	&RPG::Save::inventory,
	LSD_Reader::ChunkSave::inventory,
	"inventory",
	1,
	0
);
static TypedField<RPG::Save, std::vector<RPG::SaveTarget>> static_targets(
	&RPG::Save::targets,
	LSD_Reader::ChunkSave::targets,
	"targets",
	1,
	0
);
static TypedField<RPG::Save, RPG::SaveMapInfo> static_map_info(
	&RPG::Save::map_info,
	LSD_Reader::ChunkSave::map_info,
	"map_info",
	1,
	0
);
static TypedField<RPG::Save, RPG::SavePanorama> static_panorama(
	&RPG::Save::panorama,
	LSD_Reader::ChunkSave::panorama,
	"panorama",
	1,
	0
);
static TypedField<RPG::Save, RPG::SaveEventExecState> static_foreground_event_execstate(
	&RPG::Save::foreground_event_execstate,
	LSD_Reader::ChunkSave::foreground_event_execstate,
	"foreground_event_execstate",
	1,
	0
);
static TypedField<RPG::Save, std::vector<RPG::SaveCommonEvent>> static_common_events(
	&RPG::Save::common_events,
	LSD_Reader::ChunkSave::common_events,
	"common_events",
	1,
	0
);
static TypedField<RPG::Save, RPG::SaveEasyRpgData> static_easyrpg_data(
	&RPG::Save::easyrpg_data,
	LSD_Reader::ChunkSave::easyrpg_data,
	"easyrpg_data",
	0,
	0
);


template <>
Field<RPG::Save> const* Struct<RPG::Save>::fields[] = {
	&static_title,
	&static_system,
	&static_screen,
	&static_pictures,
	&static_party_location,
	&static_boat_location,
	&static_ship_location,
	&static_airship_location,
	&static_actors,
	&static_inventory,
	&static_targets,
	&static_map_info,
	&static_panorama,
	&static_foreground_event_execstate,
	&static_common_events,
	&static_easyrpg_data,
	NULL
};

template class Struct<RPG::Save>;
