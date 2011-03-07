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
/// Read Terrain
////////////////////////////////////////////////////////////
template <>
struct TypeReader<RPG::Terrain::Flags> {
	static inline void ReadLcf(RPG::Terrain::Flags& ref, LcfReader& stream, uint32_t length) {
		assert(length == 1);
		uint8_t bitflag = stream.Read8();
		ref.back_party		= (bitflag & 0x01) != 0;
		ref.back_enemies	= (bitflag & 0x02) != 0;
		ref.lateral_party	= (bitflag & 0x04) != 0;
		ref.lateral_enemies	= (bitflag & 0x08) != 0;
	}
	static inline void WriteLcf(const RPG::Terrain::Flags& ref, LcfWriter& stream) {
		uint8_t bitflag = 0;
		if (ref.back_party)		 bitflag |= 0x01;
		if (ref.back_enemies)	 bitflag |= 0x02;
		if (ref.lateral_party)	 bitflag |= 0x04;
		if (ref.lateral_enemies) bitflag |= 0x08;
		stream.Write8(bitflag);
	}
	static inline int LcfSize(const RPG::Terrain::Flags& ref, LcfWriter& stream) {
		return 1;
	}
	static inline void WriteXml(const RPG::Terrain::Flags& ref, XmlWriter& stream) {
		stream.BeginElement("Terrain_Flags");
		stream.WriteNode<bool>("back_party", ref.back_party);
		stream.WriteNode<bool>("back_enemies", ref.back_enemies);
		stream.WriteNode<bool>("lateral_party", ref.lateral_party);
		stream.WriteNode<bool>("lateral_enemies", ref.lateral_enemies);
		stream.EndElement("Terrain_Flags");
	}

	class FlagsXmlHandler : public XmlHandler {
	private:
		RPG::Terrain::Flags& ref;
		bool* field;
	public:
		FlagsXmlHandler(RPG::Terrain::Flags& ref) : ref(ref), field(NULL) {}
		void StartElement(XmlReader& stream, const char* name, const char** atts) {
			if (strcmp(name, "back_party") == 0)
				field = &ref.back_party;
			else if (strcmp(name, "back_enemies") == 0)
				field = &ref.back_enemies;
			else if (strcmp(name, "lateral_party") == 0)
				field = &ref.lateral_party;
			else if (strcmp(name, "lateral_enemies") == 0)
				field = &ref.lateral_enemies;
			else {
				stream.Error("Unrecognized field '%s'", name);
				field = NULL;
			}
		}
		void EndElement(XmlReader& stream, const char* name) {
			field = NULL;
		}
		void CharacterData(XmlReader& stream, const std::string& data) {
			if (field != NULL)
				XmlReader::Read<bool>(*field, data);
		}
	};

	static inline void BeginXml(RPG::Terrain::Flags& ref, XmlReader& stream) {
		stream.SetHandler(new WrapperXmlHandler("Terrain_Flags", new FlagsXmlHandler(ref)));
	}
	static void ParseXml(RPG::Terrain::Flags& ref, const std::string& data) {
	}
};

template <>
IDReader<RPG::Terrain>* Struct<RPG::Terrain>::ID_reader = new IDReaderT<RPG::Terrain, WithID>();

template <>
char const* const Struct<RPG::Terrain>::name("Terrain");

template <>
const Field<RPG::Terrain>* Struct<RPG::Terrain>::fields[] = {
	new TypedField<RPG::Terrain, std::string>			(&RPG::Terrain::name,							LDB_Reader::ChunkTerrain::name,							"name"							),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::damage,							LDB_Reader::ChunkTerrain::damage,						"damage"						),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::encounter_rate,					LDB_Reader::ChunkTerrain::encounter_rate,				"encounter_rate"				),
	new TypedField<RPG::Terrain, std::string>			(&RPG::Terrain::background_name,				LDB_Reader::ChunkTerrain::background_name,				"background_name"				),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::boat_pass,						LDB_Reader::ChunkTerrain::boat_pass,					"boat_pass"						),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::ship_pass,						LDB_Reader::ChunkTerrain::ship_pass,					"ship_pass"						),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::airship_pass,					LDB_Reader::ChunkTerrain::airship_pass,					"airship_pass"					),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::airship_land,					LDB_Reader::ChunkTerrain::airship_land,					"airship_land"					),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::bush_depth,						LDB_Reader::ChunkTerrain::bush_depth,					"bush_depth"					),
	new TypedField<RPG::Terrain, RPG::Sound>			(&RPG::Terrain::footstep,						LDB_Reader::ChunkTerrain::footstep,						"footstep"						),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::on_damage_se,					LDB_Reader::ChunkTerrain::on_damage_se,					"on_damage_se"					),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::background_type,				LDB_Reader::ChunkTerrain::background_type,				"background_type"				),
	new TypedField<RPG::Terrain, std::string>			(&RPG::Terrain::background_a_name,				LDB_Reader::ChunkTerrain::background_a_name,			"background_a_name"				),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::background_a_scrollh,			LDB_Reader::ChunkTerrain::background_a_scrollh,			"background_a_scrollh"			),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::background_a_scrollv,			LDB_Reader::ChunkTerrain::background_a_scrollv,			"background_a_scrollv"			),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::background_a_scrollh_speed,		LDB_Reader::ChunkTerrain::background_a_scrollh_speed,	"background_a_scrollh_speed"	),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::background_a_scrollv_speed,		LDB_Reader::ChunkTerrain::background_a_scrollv_speed,	"background_a_scrollv_speed"	),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::background_b,					LDB_Reader::ChunkTerrain::background_b,					"background_b"					),
	new TypedField<RPG::Terrain, std::string>			(&RPG::Terrain::background_b_name,				LDB_Reader::ChunkTerrain::background_b_name,			"background_b_name"				),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::background_b_scrollh,			LDB_Reader::ChunkTerrain::background_b_scrollh,			"background_b_scrollh"			),
	new TypedField<RPG::Terrain, bool>					(&RPG::Terrain::background_b_scrollv,			LDB_Reader::ChunkTerrain::background_b_scrollv,			"background_b_scrollv"			),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::background_b_scrollh_speed,		LDB_Reader::ChunkTerrain::background_b_scrollh_speed,	"background_b_scrollh_speed"	),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::background_b_scrollv_speed,		LDB_Reader::ChunkTerrain::background_b_scrollv_speed,	"background_b_scrollv_speed"	),
	new TypedField<RPG::Terrain, RPG::Terrain::Flags>	(&RPG::Terrain::special_flags,					LDB_Reader::ChunkTerrain::special_flags,				"special_flags"					),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::special_back_party,				LDB_Reader::ChunkTerrain::special_back_party,			"special_back_party"			),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::special_back_enemies,			LDB_Reader::ChunkTerrain::special_back_enemies,			"special_back_enemies"			),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::special_lateral_party,			LDB_Reader::ChunkTerrain::special_lateral_party,		"special_lateral_party"			),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::special_lateral_enemies,		LDB_Reader::ChunkTerrain::special_lateral_enemies,		"special_lateral_enemies"		),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::grid_location,					LDB_Reader::ChunkTerrain::grid_location,				"grid_location"					),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::grid_a,							LDB_Reader::ChunkTerrain::grid_a,						"grid_a"						),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::grid_b,							LDB_Reader::ChunkTerrain::grid_b,						"grid_b"						),
	new TypedField<RPG::Terrain, int>					(&RPG::Terrain::grid_c,							LDB_Reader::ChunkTerrain::grid_c,						"grid_c"						),
	NULL
};
