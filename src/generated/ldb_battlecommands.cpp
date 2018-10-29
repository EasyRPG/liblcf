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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read BattleCommands.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT BattleCommands

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, placement, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, death_handler1, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, row, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_type, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, unused_display_normal_parameters, 0, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::BattleCommand>, commands, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, death_handler2, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, death_event, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, window_size, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, transparency, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, teleport, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, teleport_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, teleport_x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, teleport_y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, teleport_face, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
