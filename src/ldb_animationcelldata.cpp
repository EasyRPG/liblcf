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
/// Read AnimationCellData
////////////////////////////////////////////////////////////
template <>
IDReader<RPG::AnimationCellData>* Struct<RPG::AnimationCellData>::ID_reader = new IDReaderT<RPG::AnimationCellData, WithID>();

template <>
char const* const Struct<RPG::AnimationCellData>::name("AnimationCellData");

 template<>
const Field<RPG::AnimationCellData>* Struct<RPG::AnimationCellData>::fields[] = {
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::priority,		LDB_Reader::ChunkAnimationCellData::priority,		"priority"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::cell_id,		LDB_Reader::ChunkAnimationCellData::cell_id,		"cell_id"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::x,			LDB_Reader::ChunkAnimationCellData::x,				"x"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::y,			LDB_Reader::ChunkAnimationCellData::y,				"y"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::zoom,			LDB_Reader::ChunkAnimationCellData::zoom,			"zoom"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::tone_red,		LDB_Reader::ChunkAnimationCellData::tone_red,		"tone_red"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::tone_green,	LDB_Reader::ChunkAnimationCellData::tone_green,		"tone_green"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::tone_blue,	LDB_Reader::ChunkAnimationCellData::tone_blue,		"tone_blue"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::tone_gray,	LDB_Reader::ChunkAnimationCellData::tone_gray,		"tone_gray"),
	new TypedField<RPG::AnimationCellData, int>	(&RPG::AnimationCellData::transparency,	LDB_Reader::ChunkAnimationCellData::transparency,	"transparency"),
	NULL
};
