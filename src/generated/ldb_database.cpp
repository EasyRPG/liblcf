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

// Read Database.

template <>
char const* const Struct<RPG::Database>::name = "Database";
static TypedField<RPG::Database, std::vector<RPG::Actor>> static_actors(
	&RPG::Database::actors,
	LDB_Reader::ChunkDatabase::actors,
	"actors",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Skill>> static_skills(
	&RPG::Database::skills,
	LDB_Reader::ChunkDatabase::skills,
	"skills",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Item>> static_items(
	&RPG::Database::items,
	LDB_Reader::ChunkDatabase::items,
	"items",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Enemy>> static_enemies(
	&RPG::Database::enemies,
	LDB_Reader::ChunkDatabase::enemies,
	"enemies",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Troop>> static_troops(
	&RPG::Database::troops,
	LDB_Reader::ChunkDatabase::troops,
	"troops",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Terrain>> static_terrains(
	&RPG::Database::terrains,
	LDB_Reader::ChunkDatabase::terrains,
	"terrains",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Attribute>> static_attributes(
	&RPG::Database::attributes,
	LDB_Reader::ChunkDatabase::attributes,
	"attributes",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::State>> static_states(
	&RPG::Database::states,
	LDB_Reader::ChunkDatabase::states,
	"states",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Animation>> static_animations(
	&RPG::Database::animations,
	LDB_Reader::ChunkDatabase::animations,
	"animations",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Chipset>> static_chipsets(
	&RPG::Database::chipsets,
	LDB_Reader::ChunkDatabase::chipsets,
	"chipsets",
	1,
	0
);
static TypedField<RPG::Database, RPG::Terms> static_terms(
	&RPG::Database::terms,
	LDB_Reader::ChunkDatabase::terms,
	"terms",
	1,
	0
);
static TypedField<RPG::Database, RPG::System> static_system(
	&RPG::Database::system,
	LDB_Reader::ChunkDatabase::system,
	"system",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Switch>> static_switches(
	&RPG::Database::switches,
	LDB_Reader::ChunkDatabase::switches,
	"switches",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::Variable>> static_variables(
	&RPG::Database::variables,
	LDB_Reader::ChunkDatabase::variables,
	"variables",
	1,
	0
);
static TypedField<RPG::Database, std::vector<RPG::CommonEvent>> static_commonevents(
	&RPG::Database::commonevents,
	LDB_Reader::ChunkDatabase::commonevents,
	"commonevents",
	1,
	0
);
static DatabaseVersionField<RPG::Database, int32_t> static_version(
	&RPG::Database::version,
	LDB_Reader::ChunkDatabase::version,
	"version",
	0,
	0
);
static EmptyField<RPG::Database> static_commoneventD2(
	LDB_Reader::ChunkDatabase::commoneventD2,
	"commoneventD2",
	1,
	1
);
static EmptyField<RPG::Database> static_commoneventD3(
	LDB_Reader::ChunkDatabase::commoneventD3,
	"commoneventD3",
	1,
	1
);
static TypedField<RPG::Database, RPG::BattleCommands> static_battlecommands(
	&RPG::Database::battlecommands,
	LDB_Reader::ChunkDatabase::battlecommands,
	"battlecommands",
	1,
	1
);
static TypedField<RPG::Database, std::vector<RPG::Class>> static_classes(
	&RPG::Database::classes,
	LDB_Reader::ChunkDatabase::classes,
	"classes",
	1,
	1
);
static EmptyField<RPG::Database> static_classD1(
	LDB_Reader::ChunkDatabase::classD1,
	"classD1",
	1,
	1
);
static TypedField<RPG::Database, std::vector<RPG::BattlerAnimation>> static_battleranimations(
	&RPG::Database::battleranimations,
	LDB_Reader::ChunkDatabase::battleranimations,
	"battleranimations",
	1,
	1
);


template <>
Field<RPG::Database> const* Struct<RPG::Database>::fields[] = {
	&static_actors,
	&static_skills,
	&static_items,
	&static_enemies,
	&static_troops,
	&static_terrains,
	&static_attributes,
	&static_states,
	&static_animations,
	&static_chipsets,
	&static_terms,
	&static_system,
	&static_switches,
	&static_variables,
	&static_commonevents,
	&static_version,
	&static_commoneventD2,
	&static_commoneventD3,
	&static_battlecommands,
	&static_classes,
	&static_classD1,
	&static_battleranimations,
	NULL
};

template class Struct<RPG::Database>;
