/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lcf/ldb/reader.h"
#include "lcf/ldb/chunks.h"
#include "reader_struct_impl.h"

namespace lcf {

// Read StringVariable.

template <>
char const* const Struct<rpg::StringVariable>::name = "StringVariable";
static TypedField<rpg::StringVariable, DBString> static_name(
	&rpg::StringVariable::name,
	LDB_Reader::ChunkStringVariable::name,
	"name",
	0,
	0
);


template <>
Field<rpg::StringVariable> const* Struct<rpg::StringVariable>::fields[] = {
	&static_name,
	NULL
};

template class Struct<rpg::StringVariable>;

} //namespace lcf
