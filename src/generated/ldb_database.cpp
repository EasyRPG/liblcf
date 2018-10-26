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
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_struct.h"

// Read Database.

#define LCF_CHUNK_SUFFIX LDB_Reader
#define LCF_CURRENT_STRUCT Database

LCF_STRUCT_FIELDS_BEGIN()
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Actor>, actors, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Skill>, skills, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Item>, items, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Enemy>, enemies, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Troop>, troops, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Terrain>, terrains, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Attribute>, attributes, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::State>, states, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Animation>, animations, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Chipset>, chipsets, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::Terms, terms, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::System, system, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Switch>, switches, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Variable>, variables, 0),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::CommonEvent>, commonevents, 0),
	LCF_STRUCT_TYPED_FIELD(int32_t, version, 0),
	LCF_STRUCT_TYPED_FIELD(RPG::BattleCommands, battlecommands, 1),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::Class>, classes, 1),
	LCF_STRUCT_TYPED_FIELD(std::vector<RPG::BattlerAnimation>, battleranimations, 1),
LCF_STRUCT_FIELDS_END()

#undef LCF_CURRENT_STRUCT
#undef LCF_CHUNK_SUFFIX
