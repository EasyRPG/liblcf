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
#include "reader.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Actor
////////////////////////////////////////////////////////////
template <>
struct TypeReader<RPG::Actor::Parameters> {
	static inline void ReadLcf(RPG::Actor::Parameters& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		int n = chunk_info.length / 6;
		stream.Read16(ref.maxhp, n);
		stream.Read16(ref.maxsp, n);
		stream.Read16(ref.attack, n);
		stream.Read16(ref.defense, n);
		stream.Read16(ref.spirit, n);
		stream.Read16(ref.agility, n);
	}
	static inline void WriteLcf(const RPG::Actor::Parameters& ref, Writer& stream) {
		stream.Write16(ref.maxhp);
		stream.Write16(ref.maxsp);
		stream.Write16(ref.attack);
		stream.Write16(ref.defense);
		stream.Write16(ref.spirit);
		stream.Write16(ref.agility);
	}
	static inline int LcfSize(const RPG::Actor::Parameters& ref, Writer& stream) {
		return ref.maxhp.size() * 2 * 6;
	}
};

template <>
struct TypeReader<RPG::Actor::Equipment> {
	static inline void ReadLcf(RPG::Actor::Equipment& ref, Reader& stream, const Reader::Chunk& chunk_info) {
		ref.weapon_id = stream.Read16();
		ref.shield_id = stream.Read16();
		ref.armor_id = stream.Read16();
		ref.helmet_id = stream.Read16();
		ref.accessory_id = stream.Read16();
	}
	static inline void WriteLcf(const RPG::Actor::Equipment& ref, Writer& stream) {
		stream.Write16(ref.weapon_id);
		stream.Write16(ref.shield_id);
		stream.Write16(ref.armor_id);
		stream.Write16(ref.helmet_id);
		stream.Write16(ref.accessory_id);
	}
	static inline int LcfSize(const RPG::Actor::Equipment& ref, Writer& stream) {
		return 2 * 5;
	}
};

template <>
IDReader<RPG::Actor>* Struct<RPG::Actor>::ID_reader = new IDReaderT<RPG::Actor, WithID>();

template <>
const Field<RPG::Actor>* Struct<RPG::Actor>::fields[] = {
	new TypedField<RPG::Actor, std::string>						(&RPG::Actor::name,					LDB_Reader::ChunkActor::name,					"name"					),
	new TypedField<RPG::Actor, std::string>						(&RPG::Actor::title,				LDB_Reader::ChunkActor::title,					"title"					),
	new TypedField<RPG::Actor, std::string>						(&RPG::Actor::character_name,		LDB_Reader::ChunkActor::character_name,			"character_name"		),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::character_index,		LDB_Reader::ChunkActor::character_index,		"character_index"		),
	new TypedField<RPG::Actor, bool>							(&RPG::Actor::transparent,			LDB_Reader::ChunkActor::transparent,			"transparent"			),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::initial_level,		LDB_Reader::ChunkActor::initial_level,			"initial_level"			),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::final_level,			LDB_Reader::ChunkActor::final_level,			"final_level"			),
	new TypedField<RPG::Actor, bool>							(&RPG::Actor::critical_hit,			LDB_Reader::ChunkActor::critical_hit,			"critical_hit"			),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::critical_hit_chance,	LDB_Reader::ChunkActor::critical_hit_chance,	"critical_hit_chance"	),
	new TypedField<RPG::Actor, std::string>						(&RPG::Actor::face_name,			LDB_Reader::ChunkActor::face_name,				"face_name"				),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::face_index,			LDB_Reader::ChunkActor::face_index,				"face_index"			),
	new TypedField<RPG::Actor, bool>							(&RPG::Actor::two_swords_style,		LDB_Reader::ChunkActor::two_swords_style,		"two_swords_style"		),
	new TypedField<RPG::Actor, bool>							(&RPG::Actor::fix_equipment,		LDB_Reader::ChunkActor::fix_equipment,			"fix_equipment"			),
	new TypedField<RPG::Actor, bool>							(&RPG::Actor::auto_battle,			LDB_Reader::ChunkActor::auto_battle,			"auto_battle"			),
	new TypedField<RPG::Actor, bool>							(&RPG::Actor::super_guard,			LDB_Reader::ChunkActor::super_guard,			"super_guard"			),
	new TypedField<RPG::Actor, RPG::Actor::Parameters>			(&RPG::Actor::parameters,			LDB_Reader::ChunkActor::parameters,				"parameters"			),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::exp_base,				LDB_Reader::ChunkActor::exp_base,				"exp_base"				),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::exp_inflation,		LDB_Reader::ChunkActor::exp_inflation,			"exp_inflation"			),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::exp_correction,		LDB_Reader::ChunkActor::exp_correction,			"exp_correction"		),
	new TypedField<RPG::Actor, RPG::Actor::Equipment>			(&RPG::Actor::initial_equipment,	LDB_Reader::ChunkActor::initial_equipment,		"initial_equipment"		),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::unarmed_animation,	LDB_Reader::ChunkActor::unarmed_animation,		"unarmed_animation"		),
	new TypedField<RPG::Actor, std::vector<RPG::Learning> >		(&RPG::Actor::skills,				LDB_Reader::ChunkActor::skills,					"skills"				),
	new SizeField<RPG::Actor, uint8_t>							(&RPG::Actor::state_ranks,			LDB_Reader::ChunkActor::state_ranks_size		),
	new TypedField<RPG::Actor, std::vector<uint8_t> >			(&RPG::Actor::state_ranks,			LDB_Reader::ChunkActor::state_ranks,			"state_ranks"			),
	new SizeField<RPG::Actor, uint8_t>							(&RPG::Actor::attribute_ranks,		LDB_Reader::ChunkActor::attribute_ranks_size	),
	new TypedField<RPG::Actor, std::vector<uint8_t> >			(&RPG::Actor::attribute_ranks,		LDB_Reader::ChunkActor::attribute_ranks,		"attribute_ranks"		),
	new TypedField<RPG::Actor, bool>							(&RPG::Actor::rename_skill,			LDB_Reader::ChunkActor::rename_skill,			"rename_skill"			),
	new TypedField<RPG::Actor, std::string>						(&RPG::Actor::skill_name,			LDB_Reader::ChunkActor::skill_name,				"skill_name"			),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::class_id,				LDB_Reader::ChunkActor::class_id,				"class_id"				),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::battler_animation,	LDB_Reader::ChunkActor::battler_animation,		"battler_animation"		),
	new TypedField<RPG::Actor, std::vector<uint32_t> >			(&RPG::Actor::battle_commands,		LDB_Reader::ChunkActor::battle_commands,		"battle_commands"		),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::battle_x,				LDB_Reader::ChunkActor::battle_x,				"battle_x"				),
	new TypedField<RPG::Actor, int>								(&RPG::Actor::battle_y,				LDB_Reader::ChunkActor::battle_y,				"battle_y"				),
	NULL
};
