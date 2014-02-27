/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * This file is part of EasyRPG.
 *
 * EasyRPG is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Player. If not, see <http: *www.gnu.org/licenses/>.
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct.h"

// Read SavePartyLocation.

#define EASYRPG_CHUNK_SUFFIX LSD_Reader
#define EASYRPG_CURRENT_STRUCT SavePartyLocation

EASYRPG_STRUCT_FIELDS_BEGIN()
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_01),
	EASYRPG_STRUCT_TYPED_FIELD(int, map_id),
	EASYRPG_STRUCT_TYPED_FIELD(int, position_x),
	EASYRPG_STRUCT_TYPED_FIELD(int, position_y),
	EASYRPG_STRUCT_TYPED_FIELD(int, prelock_direction),
	EASYRPG_STRUCT_TYPED_FIELD(int, direction),
	EASYRPG_STRUCT_TYPED_FIELD(int, anim_frame),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_18),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_1f),
	EASYRPG_STRUCT_TYPED_FIELD(int, move_frequency),
	EASYRPG_STRUCT_TYPED_FIELD(int, layer),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_22),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_23),
	EASYRPG_STRUCT_TYPED_FIELD(bool, lock_facing),
	EASYRPG_STRUCT_TYPED_FIELD(int, move_speed),
	EASYRPG_STRUCT_TYPED_FIELD(RPG::MoveRoute, move_route),
	EASYRPG_STRUCT_TYPED_FIELD(bool, move_route_overwrite),
	EASYRPG_STRUCT_TYPED_FIELD(int, move_route_index),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_2c),
	EASYRPG_STRUCT_TYPED_FIELD(bool, sprite_transparent),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_2f),
	EASYRPG_STRUCT_TYPED_FIELD(int, anim_paused),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_33),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_34),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_35),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_36),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_3d),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_3e),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_3f),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_47),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_48),
	EASYRPG_STRUCT_TYPED_FIELD(std::string, sprite_name),
	EASYRPG_STRUCT_TYPED_FIELD(int, sprite_id),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_4b),
	EASYRPG_STRUCT_TYPED_FIELD(int, flash_red),
	EASYRPG_STRUCT_TYPED_FIELD(int, flash_green),
	EASYRPG_STRUCT_TYPED_FIELD(int, flash_blue),
	EASYRPG_STRUCT_TYPED_FIELD(double, flash_current_level),
	EASYRPG_STRUCT_TYPED_FIELD(int, flash_time_left),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_65),
	EASYRPG_STRUCT_TYPED_FIELD(int, original_move_route_index),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_67),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_68),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_69),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_6c),
	EASYRPG_STRUCT_TYPED_FIELD(int, pan_state),
	EASYRPG_STRUCT_TYPED_FIELD(int, pan_current_x),
	EASYRPG_STRUCT_TYPED_FIELD(int, pan_current_y),
	EASYRPG_STRUCT_TYPED_FIELD(int, pan_finish_x),
	EASYRPG_STRUCT_TYPED_FIELD(int, pan_finish_y),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_79),
	EASYRPG_STRUCT_TYPED_FIELD(int, encounter_steps),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_7d),
	EASYRPG_STRUCT_TYPED_FIELD(int, map_save_count),
	EASYRPG_STRUCT_TYPED_FIELD(int, unknown_84),
EASYRPG_STRUCT_FIELDS_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
