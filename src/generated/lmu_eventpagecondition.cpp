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

// Read EventPageCondition.

#define LCF_CHUNK_SUFFIX LMU_Reader
#define LCF_CURRENT_STRUCT EventPageCondition

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(RPG::EventPageCondition::Flags, flags, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_a_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, switch_b_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, variable_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, variable_value, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, item_id, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, actor_id, 1, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, timer_sec, 0, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, timer2_sec, 0, 1),
	LCF_STRUCT_TYPED_FIELD(int32_t, compare_operator, 0, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
