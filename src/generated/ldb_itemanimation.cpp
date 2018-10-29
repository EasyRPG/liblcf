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

// Read ItemAnimation.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT ItemAnimation

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, type, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, weapon_anim, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, movement, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, after_image, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, attacks, 0, 0),
	LCF_STRUCT_TYPED_FIELD(bool, ranged, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, ranged_anim, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, ranged_speed, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, battle_anim, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
