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
#include "lmt_reader.h"
#include "lmt_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read MapInfo
////////////////////////////////////////////////////////////
template <>
struct TypeReader<RPG::MapInfo::Rect> {
	static inline void ReadLcf(RPG::MapInfo::Rect& ref, LcfReader& stream, uint32_t length) {
		assert(length == 16);
		ref.x = stream.Read32();
		ref.y = stream.Read32();
		ref.w = stream.Read32() - ref.x;
		ref.h = stream.Read32() - ref.y;
	}
	static inline void WriteLcf(const RPG::MapInfo::Rect& ref, LcfWriter& stream) {
		stream.Write32(ref.x);
		stream.Write32(ref.y);
		stream.Write32(ref.w + ref.x);
		stream.Write32(ref.h + ref.y);
	}
	static inline int LcfSize(const RPG::MapInfo::Rect& ref, LcfWriter& stream) {
		return 4 * 4;
	}
	static inline void WriteXml(const RPG::MapInfo::Rect& ref, XmlWriter& stream) {
		stream.BeginElement("Rect");
		stream.WriteNode<int>("x", ref.x);
		stream.WriteNode<int>("y", ref.y);
		stream.WriteNode<int>("w", ref.w);
		stream.WriteNode<int>("h", ref.h);
		stream.EndElement("Rect");
	}
};

template <>
IDReader<RPG::MapInfo>* Struct<RPG::MapInfo>::ID_reader = new IDReaderT<RPG::MapInfo, WithID>();

template <>
const std::string Struct<RPG::MapInfo>::name("MapInfo");

template <>
const Field<RPG::MapInfo>* Struct<RPG::MapInfo>::fields[] = {
	new TypedField<RPG::MapInfo, std::string>			(&RPG::MapInfo::name,				LMT_Reader::ChunkMapInfo::name,				"name"				),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::parent_map,			LMT_Reader::ChunkMapInfo::parent_map,		"parent_map"		),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::type,				LMT_Reader::ChunkMapInfo::type,				"type"				),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::music_type,			LMT_Reader::ChunkMapInfo::music_type,		"music_type"		),
	new TypedField<RPG::MapInfo, RPG::Music>			(&RPG::MapInfo::music,				LMT_Reader::ChunkMapInfo::music,			"music"				),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::background_type,	LMT_Reader::ChunkMapInfo::background_type,	"background_type"	),
	new TypedField<RPG::MapInfo, std::string>			(&RPG::MapInfo::background_name,	LMT_Reader::ChunkMapInfo::background_name,	"background_name"	),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::teleport,			LMT_Reader::ChunkMapInfo::teleport,			"teleport"			),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::escape,				LMT_Reader::ChunkMapInfo::escape,			"escape"			),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::save,				LMT_Reader::ChunkMapInfo::save,				"save"				),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::encounter_steps,	LMT_Reader::ChunkMapInfo::encounter_steps,	"encounter_steps"	),
	new TypedField<RPG::MapInfo, RPG::MapInfo::Rect>	(&RPG::MapInfo::area,				LMT_Reader::ChunkMapInfo::area_rect,		"area_rect"			),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::indentation,		LMT_Reader::ChunkMapInfo::indentation,		"indentation"		),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::scrollbar_x,		LMT_Reader::ChunkMapInfo::scrollbar_x,		"scrollbar_x"		),
	new TypedField<RPG::MapInfo, int>					(&RPG::MapInfo::scrollbar_y,		LMT_Reader::ChunkMapInfo::scrollbar_y,		"scrollbar_y"		),
	new TypedField<RPG::MapInfo, bool>					(&RPG::MapInfo::expanded_node,		LMT_Reader::ChunkMapInfo::expanded_node,	"expanded_node"		),
	new TypedField<RPG::MapInfo, std::vector<RPG::Encounter> >	(&RPG::MapInfo::encounters,	LMT_Reader::ChunkMapInfo::encounters,		"encounters"		),
	NULL
};
