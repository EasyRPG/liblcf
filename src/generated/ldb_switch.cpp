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

// Read Switch.

template <>
char const* const Struct<RPG::Switch>::name = "Switch";

template <>
Field<RPG::Switch> const* Struct<RPG::Switch>::fields[] = {
	new TypedField<RPG::Switch, std::string>(
		&RPG::Switch::name,
		LDB_Reader::ChunkSwitch::name,
		"name",
		0,
		0
	),
	NULL
};

template class Struct<RPG::Switch>;
