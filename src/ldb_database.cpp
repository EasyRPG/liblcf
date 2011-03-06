/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Database
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::Database>* Struct<RPG::Database>::ID_reader = new IDReaderT<RPG::Database, NoID>();

template <>
char const* const Struct<RPG::Database>::name("Database");

template <>
const Field<RPG::Database>* Struct<RPG::Database>::fields[] = {
	new TypedField<RPG::Database, std::vector<RPG::Actor> >				(&RPG::Database::actors,			LDB_Reader::ChunkData::Actor,				"actors"			),
	new TypedField<RPG::Database, std::vector<RPG::Skill> >				(&RPG::Database::skills,			LDB_Reader::ChunkData::Skill,				"skills"			),
	new TypedField<RPG::Database, std::vector<RPG::Item> >				(&RPG::Database::items,				LDB_Reader::ChunkData::Item,				"items"				),
	new TypedField<RPG::Database, std::vector<RPG::Enemy> >				(&RPG::Database::enemies,			LDB_Reader::ChunkData::Enemy,				"enemies"			),
	new TypedField<RPG::Database, std::vector<RPG::Troop> >				(&RPG::Database::troops,			LDB_Reader::ChunkData::Troop,				"troops"			),
	new TypedField<RPG::Database, std::vector<RPG::Terrain> >			(&RPG::Database::terrains,			LDB_Reader::ChunkData::Terrain,				"terrains"			),
	new TypedField<RPG::Database, std::vector<RPG::Attribute> >			(&RPG::Database::attributes,		LDB_Reader::ChunkData::Attribute,			"attributes"		),
	new TypedField<RPG::Database, std::vector<RPG::State> >				(&RPG::Database::states,			LDB_Reader::ChunkData::State,				"states"			),
	new TypedField<RPG::Database, std::vector<RPG::Animation> >			(&RPG::Database::animations,		LDB_Reader::ChunkData::Animation,			"animations"		),
	new TypedField<RPG::Database, std::vector<RPG::Chipset> >			(&RPG::Database::chipsets,			LDB_Reader::ChunkData::Chipset,				"chipsets"			),
	new TypedField<RPG::Database, std::vector<RPG::CommonEvent> >		(&RPG::Database::commonevents,		LDB_Reader::ChunkData::CommonEvent,			"commonevents"		),
	new TypedField<RPG::Database, RPG::BattleCommands>					(&RPG::Database::battlecommands,	LDB_Reader::ChunkData::BattleCommand,		"battlecommands"	),
	new TypedField<RPG::Database, std::vector<RPG::Class> >				(&RPG::Database::classes,			LDB_Reader::ChunkData::Class,				"classes"			),
	new TypedField<RPG::Database, std::vector<RPG::BattlerAnimation> >	(&RPG::Database::battleranimations,	LDB_Reader::ChunkData::BattlerAnimation,	"battleranimations"	),
	new TypedField<RPG::Database, RPG::Terms>							(&RPG::Database::terms,				LDB_Reader::ChunkData::Terms,				"terms"				),
	new TypedField<RPG::Database, RPG::System>							(&RPG::Database::system,			LDB_Reader::ChunkData::System,				"system"			),
	new TypedField<RPG::Database, std::vector<RPG::Switch> >			(&RPG::Database::switches,			LDB_Reader::ChunkData::Switches,			"switches"			),
	new TypedField<RPG::Database, std::vector<RPG::Variable> >			(&RPG::Database::variables,			LDB_Reader::ChunkData::Variables,			"variables"			),
	NULL
};

