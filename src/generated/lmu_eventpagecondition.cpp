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

// Read EventPageCondition.

#define LCF_CHUNK_SUFFIX LMU_Reader
#define LCF_CURRENT_STRUCT EventPageCondition

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(RPG::EventPageCondition::Flags, flags),
	LCF_STRUCT_TYPED_FIELD(int, switch_a_id),
	LCF_STRUCT_TYPED_FIELD(int, switch_b_id),
	LCF_STRUCT_TYPED_FIELD(int, variable_id),
	LCF_STRUCT_TYPED_FIELD(int, variable_value),
	LCF_STRUCT_TYPED_FIELD(int, item_id),
	LCF_STRUCT_TYPED_FIELD(int, actor_id),
	LCF_STRUCT_TYPED_FIELD(int, timer_sec),
	LCF_STRUCT_TYPED_FIELD(int, timer2_sec),
	LCF_STRUCT_TYPED_FIELD(int, compare_operator),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
