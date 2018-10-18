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

// Read AnimationTiming.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT AnimationTiming

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, frame, 0, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Sound, se, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_scope, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_red, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_green, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_blue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, flash_power, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, screen_shake, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
