/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader_struct_impl.h"

// Read EventPageCondition.

template <>
char const* const Struct<RPG::EventPageCondition>::name = "EventPageCondition";
static TypedField<RPG::EventPageCondition, RPG::EventPageCondition::Flags> static_flags(
	&RPG::EventPageCondition::flags,
	LMU_Reader::ChunkEventPageCondition::flags,
	"flags",
	1,
	0
);
static TypedField<RPG::EventPageCondition, int32_t> static_switch_a_id(
	&RPG::EventPageCondition::switch_a_id,
	LMU_Reader::ChunkEventPageCondition::switch_a_id,
	"switch_a_id",
	0,
	0
);
static TypedField<RPG::EventPageCondition, int32_t> static_switch_b_id(
	&RPG::EventPageCondition::switch_b_id,
	LMU_Reader::ChunkEventPageCondition::switch_b_id,
	"switch_b_id",
	0,
	0
);
static TypedField<RPG::EventPageCondition, int32_t> static_variable_id(
	&RPG::EventPageCondition::variable_id,
	LMU_Reader::ChunkEventPageCondition::variable_id,
	"variable_id",
	0,
	0
);
static TypedField<RPG::EventPageCondition, int32_t> static_variable_value(
	&RPG::EventPageCondition::variable_value,
	LMU_Reader::ChunkEventPageCondition::variable_value,
	"variable_value",
	0,
	0
);
static TypedField<RPG::EventPageCondition, int32_t> static_item_id(
	&RPG::EventPageCondition::item_id,
	LMU_Reader::ChunkEventPageCondition::item_id,
	"item_id",
	0,
	0
);
static TypedField<RPG::EventPageCondition, int32_t> static_actor_id(
	&RPG::EventPageCondition::actor_id,
	LMU_Reader::ChunkEventPageCondition::actor_id,
	"actor_id",
	1,
	0
);
static TypedField<RPG::EventPageCondition, int32_t> static_timer_sec(
	&RPG::EventPageCondition::timer_sec,
	LMU_Reader::ChunkEventPageCondition::timer_sec,
	"timer_sec",
	0,
	0
);
static TypedField<RPG::EventPageCondition, int32_t> static_timer2_sec(
	&RPG::EventPageCondition::timer2_sec,
	LMU_Reader::ChunkEventPageCondition::timer2_sec,
	"timer2_sec",
	0,
	1
);
static TypedField<RPG::EventPageCondition, int32_t> static_compare_operator(
	&RPG::EventPageCondition::compare_operator,
	LMU_Reader::ChunkEventPageCondition::compare_operator,
	"compare_operator",
	0,
	1
);


template <>
Field<RPG::EventPageCondition> const* Struct<RPG::EventPageCondition>::fields[] = {
	&static_flags,
	&static_switch_a_id,
	&static_switch_b_id,
	&static_variable_id,
	&static_variable_value,
	&static_item_id,
	&static_actor_id,
	&static_timer_sec,
	&static_timer2_sec,
	&static_compare_operator,
	NULL
};

template class Struct<RPG::EventPageCondition>;
