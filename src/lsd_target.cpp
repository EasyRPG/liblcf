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
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "rpg_save.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Saved Target
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::SaveTarget>* Struct<RPG::SaveTarget>::ID_reader = new IDReaderT<RPG::SaveTarget, WithID>();

template <>
char const* const Struct<RPG::SaveTarget>::name("SaveTarget");

template <>
const Field<RPG::SaveTarget>* Struct<RPG::SaveTarget>::fields[] = {
	new TypedField<RPG::SaveTarget, int>	(&RPG::SaveTarget::map_id,		LSD_Reader::ChunkTarget::map_id,	"map_id"	),
	new TypedField<RPG::SaveTarget, int>	(&RPG::SaveTarget::map_x,		LSD_Reader::ChunkTarget::map_x,		"map_x"		),
	new TypedField<RPG::SaveTarget, int>	(&RPG::SaveTarget::map_y,		LSD_Reader::ChunkTarget::map_y,		"map_y"		),
	new TypedField<RPG::SaveTarget, bool>	(&RPG::SaveTarget::switch_on,	LSD_Reader::ChunkTarget::switch_on,	"switch_on"	),
	new TypedField<RPG::SaveTarget, int>	(&RPG::SaveTarget::switch_id,	LSD_Reader::ChunkTarget::switch_id,	"switch_id"	),
	NULL
};
