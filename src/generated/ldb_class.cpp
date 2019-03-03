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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct_impl.h"

// Read Class.

template <>
char const* const Struct<RPG::Class>::name = "Class";

template <>
Field<RPG::Class> const* Struct<RPG::Class>::fields[] = {
	new TypedField<RPG::Class, std::string>(
		&RPG::Class::name,
		LDB_Reader::ChunkClass::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::Class, bool>(
		&RPG::Class::two_weapon,
		LDB_Reader::ChunkClass::two_weapon,
		"two_weapon",
		0,
		0
	),
	new TypedField<RPG::Class, bool>(
		&RPG::Class::lock_equipment,
		LDB_Reader::ChunkClass::lock_equipment,
		"lock_equipment",
		0,
		0
	),
	new TypedField<RPG::Class, bool>(
		&RPG::Class::auto_battle,
		LDB_Reader::ChunkClass::auto_battle,
		"auto_battle",
		0,
		0
	),
	new TypedField<RPG::Class, bool>(
		&RPG::Class::super_guard,
		LDB_Reader::ChunkClass::super_guard,
		"super_guard",
		0,
		0
	),
	new TypedField<RPG::Class, RPG::Parameters>(
		&RPG::Class::parameters,
		LDB_Reader::ChunkClass::parameters,
		"parameters",
		0,
		0
	),
	new TypedField<RPG::Class, int32_t>(
		&RPG::Class::exp_base,
		LDB_Reader::ChunkClass::exp_base,
		"exp_base",
		0,
		0
	),
	new TypedField<RPG::Class, int32_t>(
		&RPG::Class::exp_inflation,
		LDB_Reader::ChunkClass::exp_inflation,
		"exp_inflation",
		0,
		0
	),
	new TypedField<RPG::Class, int32_t>(
		&RPG::Class::exp_correction,
		LDB_Reader::ChunkClass::exp_correction,
		"exp_correction",
		0,
		0
	),
	new TypedField<RPG::Class, int32_t>(
		&RPG::Class::battler_animation,
		LDB_Reader::ChunkClass::battler_animation,
		"battler_animation",
		0,
		0
	),
	new TypedField<RPG::Class, std::vector<RPG::Learning>>(
		&RPG::Class::skills,
		LDB_Reader::ChunkClass::skills,
		"skills",
		1,
		0
	),
	new SizeField<RPG::Class, uint8_t>(
		&RPG::Class::state_ranks,
		LDB_Reader::ChunkClass::state_ranks_size,
		0,
		0
	),
	new TypedField<RPG::Class, std::vector<uint8_t>>(
		&RPG::Class::state_ranks,
		LDB_Reader::ChunkClass::state_ranks,
		"state_ranks",
		1,
		0
	),
	new SizeField<RPG::Class, uint8_t>(
		&RPG::Class::attribute_ranks,
		LDB_Reader::ChunkClass::attribute_ranks_size,
		0,
		0
	),
	new TypedField<RPG::Class, std::vector<uint8_t>>(
		&RPG::Class::attribute_ranks,
		LDB_Reader::ChunkClass::attribute_ranks,
		"attribute_ranks",
		1,
		0
	),
	new TypedField<RPG::Class, std::vector<int32_t>>(
		&RPG::Class::battle_commands,
		LDB_Reader::ChunkClass::battle_commands,
		"battle_commands",
		1,
		0
	),
	NULL
};

template class Struct<RPG::Class>;
