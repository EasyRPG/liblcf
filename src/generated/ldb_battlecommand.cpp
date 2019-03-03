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

// Read BattleCommand.

template <>
char const* const Struct<RPG::BattleCommand>::name = "BattleCommand";

template <>
Field<RPG::BattleCommand> const* Struct<RPG::BattleCommand>::fields[] = {
	new TypedField<RPG::BattleCommand, std::string>(
		&RPG::BattleCommand::name,
		LDB_Reader::ChunkBattleCommand::name,
		"name",
		1,
		0
	),
	new TypedField<RPG::BattleCommand, int32_t>(
		&RPG::BattleCommand::type,
		LDB_Reader::ChunkBattleCommand::type,
		"type",
		0,
		0
	),
	NULL
};

template class Struct<RPG::BattleCommand>;
