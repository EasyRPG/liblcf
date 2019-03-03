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

// Read TroopPage.

template <>
char const* const Struct<RPG::TroopPage>::name = "TroopPage";

template <>
Field<RPG::TroopPage> const* Struct<RPG::TroopPage>::fields[] = {
	new TypedField<RPG::TroopPage, RPG::TroopPageCondition>(
		&RPG::TroopPage::condition,
		LDB_Reader::ChunkTroopPage::condition,
		"condition",
		1,
		0
	),
	new SizeField<RPG::TroopPage, RPG::EventCommand>(
		&RPG::TroopPage::event_commands,
		LDB_Reader::ChunkTroopPage::event_commands_size,
		1,
		0
	),
	new TypedField<RPG::TroopPage, std::vector<RPG::EventCommand>>(
		&RPG::TroopPage::event_commands,
		LDB_Reader::ChunkTroopPage::event_commands,
		"event_commands",
		1,
		0
	),
	NULL
};

template class Struct<RPG::TroopPage>;
