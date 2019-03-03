/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
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

template <>
Field<RPG::EventPageCondition> const* Struct<RPG::EventPageCondition>::fields[] = {
	new TypedField<RPG::EventPageCondition, RPG::EventPageCondition::Flags>(
		&RPG::EventPageCondition::flags,
		LMU_Reader::ChunkEventPageCondition::flags,
		"flags",
		1,
		0
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::switch_a_id,
		LMU_Reader::ChunkEventPageCondition::switch_a_id,
		"switch_a_id",
		0,
		0
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::switch_b_id,
		LMU_Reader::ChunkEventPageCondition::switch_b_id,
		"switch_b_id",
		0,
		0
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::variable_id,
		LMU_Reader::ChunkEventPageCondition::variable_id,
		"variable_id",
		0,
		0
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::variable_value,
		LMU_Reader::ChunkEventPageCondition::variable_value,
		"variable_value",
		0,
		0
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::item_id,
		LMU_Reader::ChunkEventPageCondition::item_id,
		"item_id",
		0,
		0
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::actor_id,
		LMU_Reader::ChunkEventPageCondition::actor_id,
		"actor_id",
		1,
		0
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::timer_sec,
		LMU_Reader::ChunkEventPageCondition::timer_sec,
		"timer_sec",
		0,
		0
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::timer2_sec,
		LMU_Reader::ChunkEventPageCondition::timer2_sec,
		"timer2_sec",
		0,
		1
	),
	new TypedField<RPG::EventPageCondition, int32_t>(
		&RPG::EventPageCondition::compare_operator,
		LMU_Reader::ChunkEventPageCondition::compare_operator,
		"compare_operator",
		0,
		1
	),
	NULL
};

template class Struct<RPG::EventPageCondition>;
