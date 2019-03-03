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

// Read Enemy.

template <>
char const* const Struct<RPG::Enemy>::name = "Enemy";

template <>
Field<RPG::Enemy> const* Struct<RPG::Enemy>::fields[] = {
	new TypedField<RPG::Enemy, std::string>(
		&RPG::Enemy::name,
		LDB_Reader::ChunkEnemy::name,
		"name",
		0,
		0
	),
	new TypedField<RPG::Enemy, std::string>(
		&RPG::Enemy::battler_name,
		LDB_Reader::ChunkEnemy::battler_name,
		"battler_name",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::battler_hue,
		LDB_Reader::ChunkEnemy::battler_hue,
		"battler_hue",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::max_hp,
		LDB_Reader::ChunkEnemy::max_hp,
		"max_hp",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::max_sp,
		LDB_Reader::ChunkEnemy::max_sp,
		"max_sp",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::attack,
		LDB_Reader::ChunkEnemy::attack,
		"attack",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::defense,
		LDB_Reader::ChunkEnemy::defense,
		"defense",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::spirit,
		LDB_Reader::ChunkEnemy::spirit,
		"spirit",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::agility,
		LDB_Reader::ChunkEnemy::agility,
		"agility",
		0,
		0
	),
	new TypedField<RPG::Enemy, bool>(
		&RPG::Enemy::transparent,
		LDB_Reader::ChunkEnemy::transparent,
		"transparent",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::exp,
		LDB_Reader::ChunkEnemy::exp,
		"exp",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::gold,
		LDB_Reader::ChunkEnemy::gold,
		"gold",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::drop_id,
		LDB_Reader::ChunkEnemy::drop_id,
		"drop_id",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::drop_prob,
		LDB_Reader::ChunkEnemy::drop_prob,
		"drop_prob",
		0,
		0
	),
	new TypedField<RPG::Enemy, bool>(
		&RPG::Enemy::critical_hit,
		LDB_Reader::ChunkEnemy::critical_hit,
		"critical_hit",
		0,
		0
	),
	new TypedField<RPG::Enemy, int32_t>(
		&RPG::Enemy::critical_hit_chance,
		LDB_Reader::ChunkEnemy::critical_hit_chance,
		"critical_hit_chance",
		0,
		0
	),
	new TypedField<RPG::Enemy, bool>(
		&RPG::Enemy::miss,
		LDB_Reader::ChunkEnemy::miss,
		"miss",
		0,
		0
	),
	new TypedField<RPG::Enemy, bool>(
		&RPG::Enemy::levitate,
		LDB_Reader::ChunkEnemy::levitate,
		"levitate",
		0,
		0
	),
	new SizeField<RPG::Enemy, uint8_t>(
		&RPG::Enemy::state_ranks,
		LDB_Reader::ChunkEnemy::state_ranks_size,
		0,
		0
	),
	new TypedField<RPG::Enemy, std::vector<uint8_t>>(
		&RPG::Enemy::state_ranks,
		LDB_Reader::ChunkEnemy::state_ranks,
		"state_ranks",
		1,
		0
	),
	new SizeField<RPG::Enemy, uint8_t>(
		&RPG::Enemy::attribute_ranks,
		LDB_Reader::ChunkEnemy::attribute_ranks_size,
		0,
		0
	),
	new TypedField<RPG::Enemy, std::vector<uint8_t>>(
		&RPG::Enemy::attribute_ranks,
		LDB_Reader::ChunkEnemy::attribute_ranks,
		"attribute_ranks",
		1,
		0
	),
	new TypedField<RPG::Enemy, std::vector<RPG::EnemyAction>>(
		&RPG::Enemy::actions,
		LDB_Reader::ChunkEnemy::actions,
		"actions",
		1,
		0
	),
	NULL
};

template class Struct<RPG::Enemy>;
