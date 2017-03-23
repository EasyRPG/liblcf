/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
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

// Read MoveRoute.

#define LCF_CHUNK_SUFFIX LMU_Reader
#define LCF_CURRENT_STRUCT MoveRoute

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_SIZE_FIELD(RPG::MoveCommand, move_commands),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::MoveCommand>, move_commands),
	LCF_STRUCT_TYPED_FIELD(bool, repeat),
	LCF_STRUCT_TYPED_FIELD(bool, skippable),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
