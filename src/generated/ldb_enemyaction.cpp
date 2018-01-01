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

// Read EnemyAction.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT EnemyAction

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, kind),
	LCF_STRUCT_TYPED_FIELD(int32_t, basic),
	LCF_STRUCT_TYPED_FIELD(int32_t, skill_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, enemy_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, condition_type),
	LCF_STRUCT_TYPED_FIELD(int32_t, condition_param1),
	LCF_STRUCT_TYPED_FIELD(int32_t, condition_param2),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_id),
	LCF_STRUCT_TYPED_FIELD(bool, switch_on),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_on_id),
	LCF_STRUCT_TYPED_FIELD(bool, switch_off),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_off_id),
	LCF_STRUCT_TYPED_FIELD(int32_t, rating),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
