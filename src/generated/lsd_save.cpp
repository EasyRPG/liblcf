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

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read Save.

template <>
char const* const Struct<RPG::Save>::name = "Save";

template <>
Field<RPG::Save> const* Struct<RPG::Save>::fields[] = {
	new TypedField<RPG::Save, RPG::SaveTitle>(
		&RPG::Save::title,
		LSD_Reader::ChunkSave::title,
		"title",
		0,
		0
	),
	new TypedField<RPG::Save, RPG::SaveSystem>(
		&RPG::Save::system,
		LSD_Reader::ChunkSave::system,
		"system",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SaveScreen>(
		&RPG::Save::screen,
		LSD_Reader::ChunkSave::screen,
		"screen",
		1,
		0
	),
	new TypedField<RPG::Save, std::vector<RPG::SavePicture>>(
		&RPG::Save::pictures,
		LSD_Reader::ChunkSave::pictures,
		"pictures",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SavePartyLocation>(
		&RPG::Save::party_location,
		LSD_Reader::ChunkSave::party_location,
		"party_location",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>(
		&RPG::Save::boat_location,
		LSD_Reader::ChunkSave::boat_location,
		"boat_location",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>(
		&RPG::Save::ship_location,
		LSD_Reader::ChunkSave::ship_location,
		"ship_location",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SaveVehicleLocation>(
		&RPG::Save::airship_location,
		LSD_Reader::ChunkSave::airship_location,
		"airship_location",
		1,
		0
	),
	new TypedField<RPG::Save, std::vector<RPG::SaveActor>>(
		&RPG::Save::actors,
		LSD_Reader::ChunkSave::actors,
		"actors",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SaveInventory>(
		&RPG::Save::inventory,
		LSD_Reader::ChunkSave::inventory,
		"inventory",
		1,
		0
	),
	new TypedField<RPG::Save, std::vector<RPG::SaveTarget>>(
		&RPG::Save::targets,
		LSD_Reader::ChunkSave::targets,
		"targets",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SaveMapInfo>(
		&RPG::Save::map_info,
		LSD_Reader::ChunkSave::map_info,
		"map_info",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SavePanorama>(
		&RPG::Save::panorama,
		LSD_Reader::ChunkSave::panorama,
		"panorama",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SaveEventExecState>(
		&RPG::Save::foreground_event_execstate,
		LSD_Reader::ChunkSave::foreground_event_execstate,
		"foreground_event_execstate",
		1,
		0
	),
	new TypedField<RPG::Save, std::vector<RPG::SaveCommonEvent>>(
		&RPG::Save::common_events,
		LSD_Reader::ChunkSave::common_events,
		"common_events",
		1,
		0
	),
	new TypedField<RPG::Save, RPG::SaveEasyRpgData>(
		&RPG::Save::easyrpg_data,
		LSD_Reader::ChunkSave::easyrpg_data,
		"easyrpg_data",
		0,
		0
	),
	NULL
};

template class Struct<RPG::Save>;
