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

// Read Database.

template <>
char const* const Struct<RPG::Database>::name = "Database";

template <>
Field<RPG::Database> const* Struct<RPG::Database>::fields[] = {
	new TypedField<RPG::Database, std::vector<RPG::Actor>>(
		&RPG::Database::actors,
		LDB_Reader::ChunkDatabase::actors,
		"actors",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Skill>>(
		&RPG::Database::skills,
		LDB_Reader::ChunkDatabase::skills,
		"skills",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Item>>(
		&RPG::Database::items,
		LDB_Reader::ChunkDatabase::items,
		"items",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Enemy>>(
		&RPG::Database::enemies,
		LDB_Reader::ChunkDatabase::enemies,
		"enemies",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Troop>>(
		&RPG::Database::troops,
		LDB_Reader::ChunkDatabase::troops,
		"troops",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Terrain>>(
		&RPG::Database::terrains,
		LDB_Reader::ChunkDatabase::terrains,
		"terrains",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Attribute>>(
		&RPG::Database::attributes,
		LDB_Reader::ChunkDatabase::attributes,
		"attributes",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::State>>(
		&RPG::Database::states,
		LDB_Reader::ChunkDatabase::states,
		"states",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Animation>>(
		&RPG::Database::animations,
		LDB_Reader::ChunkDatabase::animations,
		"animations",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Chipset>>(
		&RPG::Database::chipsets,
		LDB_Reader::ChunkDatabase::chipsets,
		"chipsets",
		1,
		0
	),
	new TypedField<RPG::Database, RPG::Terms>(
		&RPG::Database::terms,
		LDB_Reader::ChunkDatabase::terms,
		"terms",
		1,
		0
	),
	new TypedField<RPG::Database, RPG::System>(
		&RPG::Database::system,
		LDB_Reader::ChunkDatabase::system,
		"system",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Switch>>(
		&RPG::Database::switches,
		LDB_Reader::ChunkDatabase::switches,
		"switches",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::Variable>>(
		&RPG::Database::variables,
		LDB_Reader::ChunkDatabase::variables,
		"variables",
		1,
		0
	),
	new TypedField<RPG::Database, std::vector<RPG::CommonEvent>>(
		&RPG::Database::commonevents,
		LDB_Reader::ChunkDatabase::commonevents,
		"commonevents",
		1,
		0
	),
	new DatabaseVersionField<RPG::Database, int32_t>(
		&RPG::Database::version,
		LDB_Reader::ChunkDatabase::version,
		"version",
		0,
		0
	),
	new EmptyField<RPG::Database>(
		LDB_Reader::ChunkDatabase::commoneventD2,
		"commoneventD2",
		1,
		1
	),
	new EmptyField<RPG::Database>(
		LDB_Reader::ChunkDatabase::commoneventD3,
		"commoneventD3",
		1,
		1
	),
	new TypedField<RPG::Database, RPG::BattleCommands>(
		&RPG::Database::battlecommands,
		LDB_Reader::ChunkDatabase::battlecommands,
		"battlecommands",
		1,
		1
	),
	new TypedField<RPG::Database, std::vector<RPG::Class>>(
		&RPG::Database::classes,
		LDB_Reader::ChunkDatabase::classes,
		"classes",
		1,
		1
	),
	new EmptyField<RPG::Database>(
		LDB_Reader::ChunkDatabase::classD1,
		"classD1",
		1,
		1
	),
	new TypedField<RPG::Database, std::vector<RPG::BattlerAnimation>>(
		&RPG::Database::battleranimations,
		LDB_Reader::ChunkDatabase::battleranimations,
		"battleranimations",
		1,
		1
	),
	NULL
};

template class Struct<RPG::Database>;
