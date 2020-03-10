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
static TypedField<RPG::TroopPage, RPG::TroopPageCondition> static_condition(
	&RPG::TroopPage::condition,
	LDB_Reader::ChunkTroopPage::condition,
	"condition",
	1,
	0
);
static SizeField<RPG::TroopPage, RPG::EventCommand> static_size_event_commands(
	&RPG::TroopPage::event_commands,
	LDB_Reader::ChunkTroopPage::event_commands_size,
	1,
	0
);
static TypedField<RPG::TroopPage, std::vector<RPG::EventCommand>> static_event_commands(
	&RPG::TroopPage::event_commands,
	LDB_Reader::ChunkTroopPage::event_commands,
	"event_commands",
	1,
	0
);


template <>
Field<RPG::TroopPage> const* Struct<RPG::TroopPage>::fields[] = {
	&static_condition,
	&static_size_event_commands,
	&static_event_commands,
	NULL
};

template class Struct<RPG::TroopPage>;
