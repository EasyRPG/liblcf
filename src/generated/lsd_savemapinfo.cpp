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

// Read SaveMapInfo.

template <>
char const* const Struct<RPG::SaveMapInfo>::name = "SaveMapInfo";
static TypedField<RPG::SaveMapInfo, int32_t> static_position_x(
	&RPG::SaveMapInfo::position_x,
	LSD_Reader::ChunkSaveMapInfo::position_x,
	"position_x",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, int32_t> static_position_y(
	&RPG::SaveMapInfo::position_y,
	LSD_Reader::ChunkSaveMapInfo::position_y,
	"position_y",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, int32_t> static_encounter_rate(
	&RPG::SaveMapInfo::encounter_rate,
	LSD_Reader::ChunkSaveMapInfo::encounter_rate,
	"encounter_rate",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, int32_t> static_chipset_id(
	&RPG::SaveMapInfo::chipset_id,
	LSD_Reader::ChunkSaveMapInfo::chipset_id,
	"chipset_id",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, std::vector<RPG::SaveMapEvent>> static_events(
	&RPG::SaveMapInfo::events,
	LSD_Reader::ChunkSaveMapInfo::events,
	"events",
	1,
	0
);
static TypedField<RPG::SaveMapInfo, std::vector<uint8_t>> static_lower_tiles(
	&RPG::SaveMapInfo::lower_tiles,
	LSD_Reader::ChunkSaveMapInfo::lower_tiles,
	"lower_tiles",
	1,
	0
);
static TypedField<RPG::SaveMapInfo, std::vector<uint8_t>> static_upper_tiles(
	&RPG::SaveMapInfo::upper_tiles,
	LSD_Reader::ChunkSaveMapInfo::upper_tiles,
	"upper_tiles",
	1,
	0
);
static TypedField<RPG::SaveMapInfo, std::string> static_parallax_name(
	&RPG::SaveMapInfo::parallax_name,
	LSD_Reader::ChunkSaveMapInfo::parallax_name,
	"parallax_name",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, bool> static_parallax_horz(
	&RPG::SaveMapInfo::parallax_horz,
	LSD_Reader::ChunkSaveMapInfo::parallax_horz,
	"parallax_horz",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, bool> static_parallax_vert(
	&RPG::SaveMapInfo::parallax_vert,
	LSD_Reader::ChunkSaveMapInfo::parallax_vert,
	"parallax_vert",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, bool> static_parallax_horz_auto(
	&RPG::SaveMapInfo::parallax_horz_auto,
	LSD_Reader::ChunkSaveMapInfo::parallax_horz_auto,
	"parallax_horz_auto",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, int32_t> static_parallax_horz_speed(
	&RPG::SaveMapInfo::parallax_horz_speed,
	LSD_Reader::ChunkSaveMapInfo::parallax_horz_speed,
	"parallax_horz_speed",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, bool> static_parallax_vert_auto(
	&RPG::SaveMapInfo::parallax_vert_auto,
	LSD_Reader::ChunkSaveMapInfo::parallax_vert_auto,
	"parallax_vert_auto",
	0,
	0
);
static TypedField<RPG::SaveMapInfo, int32_t> static_parallax_vert_speed(
	&RPG::SaveMapInfo::parallax_vert_speed,
	LSD_Reader::ChunkSaveMapInfo::parallax_vert_speed,
	"parallax_vert_speed",
	0,
	0
);


template <>
Field<RPG::SaveMapInfo> const* Struct<RPG::SaveMapInfo>::fields[] = {
	&static_position_x,
	&static_position_y,
	&static_encounter_rate,
	&static_chipset_id,
	&static_events,
	&static_lower_tiles,
	&static_upper_tiles,
	&static_parallax_name,
	&static_parallax_horz,
	&static_parallax_vert,
	&static_parallax_horz_auto,
	&static_parallax_horz_speed,
	&static_parallax_vert_auto,
	&static_parallax_vert_speed,
	NULL
};

template class Struct<RPG::SaveMapInfo>;
