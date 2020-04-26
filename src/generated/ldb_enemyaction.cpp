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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct_impl.h"

// Read EnemyAction.

template <>
char const* const Struct<RPG::EnemyAction>::name = "EnemyAction";
static TypedField<RPG::EnemyAction, int32_t> static_kind(
	&RPG::EnemyAction::kind,
	LDB_Reader::ChunkEnemyAction::kind,
	"kind",
	1,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_basic(
	&RPG::EnemyAction::basic,
	LDB_Reader::ChunkEnemyAction::basic,
	"basic",
	1,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_skill_id(
	&RPG::EnemyAction::skill_id,
	LDB_Reader::ChunkEnemyAction::skill_id,
	"skill_id",
	0,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_enemy_id(
	&RPG::EnemyAction::enemy_id,
	LDB_Reader::ChunkEnemyAction::enemy_id,
	"enemy_id",
	0,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_condition_type(
	&RPG::EnemyAction::condition_type,
	LDB_Reader::ChunkEnemyAction::condition_type,
	"condition_type",
	1,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_condition_param1(
	&RPG::EnemyAction::condition_param1,
	LDB_Reader::ChunkEnemyAction::condition_param1,
	"condition_param1",
	0,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_condition_param2(
	&RPG::EnemyAction::condition_param2,
	LDB_Reader::ChunkEnemyAction::condition_param2,
	"condition_param2",
	0,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_switch_id(
	&RPG::EnemyAction::switch_id,
	LDB_Reader::ChunkEnemyAction::switch_id,
	"switch_id",
	0,
	0
);
static TypedField<RPG::EnemyAction, bool> static_switch_on(
	&RPG::EnemyAction::switch_on,
	LDB_Reader::ChunkEnemyAction::switch_on,
	"switch_on",
	0,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_switch_on_id(
	&RPG::EnemyAction::switch_on_id,
	LDB_Reader::ChunkEnemyAction::switch_on_id,
	"switch_on_id",
	0,
	0
);
static TypedField<RPG::EnemyAction, bool> static_switch_off(
	&RPG::EnemyAction::switch_off,
	LDB_Reader::ChunkEnemyAction::switch_off,
	"switch_off",
	0,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_switch_off_id(
	&RPG::EnemyAction::switch_off_id,
	LDB_Reader::ChunkEnemyAction::switch_off_id,
	"switch_off_id",
	0,
	0
);
static TypedField<RPG::EnemyAction, int32_t> static_rating(
	&RPG::EnemyAction::rating,
	LDB_Reader::ChunkEnemyAction::rating,
	"rating",
	0,
	0
);


template <>
Field<RPG::EnemyAction> const* Struct<RPG::EnemyAction>::fields[] = {
	&static_kind,
	&static_basic,
	&static_skill_id,
	&static_enemy_id,
	&static_condition_type,
	&static_condition_param1,
	&static_condition_param2,
	&static_switch_id,
	&static_switch_on,
	&static_switch_on_id,
	&static_switch_off,
	&static_switch_off_id,
	&static_rating,
	NULL
};

template class Struct<RPG::EnemyAction>;
