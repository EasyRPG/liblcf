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
/// Read Animation
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::Animation>* Struct<RPG::Animation>::ID_reader = new IDReaderT<RPG::Animation, WithID>();

template <>
char const* const Struct<RPG::Animation>::name("Animation");

template <>
const Field<RPG::Animation>* Struct<RPG::Animation>::fields[] = {
	new TypedField<RPG::Animation,	std::string>						(&RPG::Animation::name,				LDB_Reader::ChunkAnimation::name,			"name"			),
	new TypedField<RPG::Animation,	std::string>						(&RPG::Animation::animation_name,	LDB_Reader::ChunkAnimation::animation_name,	"animation_name"),
	new TypedField<RPG::Animation,	std::vector<RPG::AnimationTiming> >	(&RPG::Animation::timings,			LDB_Reader::ChunkAnimation::timings,		"timings"		),
	new TypedField<RPG::Animation,	int>								(&RPG::Animation::scope,			LDB_Reader::ChunkAnimation::scope,			"scope"			),
	new TypedField<RPG::Animation,	int>								(&RPG::Animation::position,			LDB_Reader::ChunkAnimation::position,		"position"		),
	new TypedField<RPG::Animation,	std::vector<RPG::AnimationFrame> >	(&RPG::Animation::frames,			LDB_Reader::ChunkAnimation::frames,			"frames"		),
	NULL
};
