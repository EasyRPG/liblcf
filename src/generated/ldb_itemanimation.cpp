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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read ItemAnimation.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT ItemAnimation

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int, type),
	LCF_STRUCT_TYPED_FIELD(int, weapon_anim),
	LCF_STRUCT_TYPED_FIELD(int, movement),
	LCF_STRUCT_TYPED_FIELD(int, after_image),
	LCF_STRUCT_TYPED_FIELD(int, attacks),
	LCF_STRUCT_TYPED_FIELD(bool, ranged),
	LCF_STRUCT_TYPED_FIELD(int, ranged_anim),
	LCF_STRUCT_TYPED_FIELD(int, ranged_speed),
	LCF_STRUCT_TYPED_FIELD(int, battle_anim),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
