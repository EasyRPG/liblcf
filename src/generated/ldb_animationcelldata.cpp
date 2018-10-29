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

// Read AnimationCellData.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT AnimationCellData

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(int32_t, valid, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, cell_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, x, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, y, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, zoom, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, tone_red, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, tone_green, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, tone_blue, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, tone_gray, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, transparency, 0, 0),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
