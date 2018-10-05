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
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct.h"

// Read EventPage.

#define LCF_CHUNK_SUFFIX LMU_Reader
#define LCF_CURRENT_STRUCT EventPage

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(RPG::EventPageCondition, condition, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::string, character_name, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, character_index, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, character_direction, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, character_pattern, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, translucent, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_frequency, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, trigger, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, layer, 1, 0),
	LCF_STRUCT_TYPED_FIELD(bool, overlap_forbidden, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, animation_type, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, move_speed, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::MoveRoute, move_route, 0, 0),
	LCF_STRUCT_SIZE_FIELD(RPG::EventCommand, event_commands, 1, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::EventCommand>, event_commands, 1, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
