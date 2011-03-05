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
/// Read AnimationTiming
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::AnimationTiming>* Struct<RPG::AnimationTiming>::ID_reader = new IDReaderT<RPG::AnimationTiming, WithID>();

template <>
const std::string Struct<RPG::AnimationTiming>::name("AnimationTiming");

template <>
const Field<RPG::AnimationTiming>* Struct<RPG::AnimationTiming>::fields[] = {
	new TypedField<RPG::AnimationTiming, int>		(&RPG::AnimationTiming::frame,			LDB_Reader::ChunkAnimationTiming::frame,		"frame"			),
	new TypedField<RPG::AnimationTiming, RPG::Sound>(&RPG::AnimationTiming::se,				LDB_Reader::ChunkAnimationTiming::se,			"se"			),
	new TypedField<RPG::AnimationTiming, int>		(&RPG::AnimationTiming::flash_scope,	LDB_Reader::ChunkAnimationTiming::flash_scope,	"flash_scope"	),
	new TypedField<RPG::AnimationTiming, int>		(&RPG::AnimationTiming::flash_red,		LDB_Reader::ChunkAnimationTiming::flash_red,	"flash_red"		),
	new TypedField<RPG::AnimationTiming, int>		(&RPG::AnimationTiming::flash_green,	LDB_Reader::ChunkAnimationTiming::flash_green,	"flash_green"	),
	new TypedField<RPG::AnimationTiming, int>		(&RPG::AnimationTiming::flash_blue,		LDB_Reader::ChunkAnimationTiming::flash_blue,	"flash_blue"	),
	new TypedField<RPG::AnimationTiming, int>		(&RPG::AnimationTiming::flash_power,	LDB_Reader::ChunkAnimationTiming::flash_power,	"flash_power"	),
	new TypedField<RPG::AnimationTiming, int>		(&RPG::AnimationTiming::screen_shake,	LDB_Reader::ChunkAnimationTiming::screen_shake,	"screen_shake"	),
	NULL
};
