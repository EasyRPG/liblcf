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
/// Read Save Actor
////////////////////////////////////////////////////////////
template <>
void Struct<RPG::SaveActor>::ReadID(RPG::SaveActor& obj, Reader& stream) {
	IDReader<RPG::SaveActor, WithID>::ReadID(obj, stream);
}

template <>
const Field<RPG::SaveActor>* Struct<RPG::SaveActor>::fields[] = {
	new TypedField<RPG::SaveActor, std::string>				(&RPG::SaveActor::name,				LSD_Reader::ChunkActor::name,				"name"				),
	new TypedField<RPG::SaveActor, std::string>				(&RPG::SaveActor::title,			LSD_Reader::ChunkActor::title,				"title"				),
	new TypedField<RPG::SaveActor, std::string>				(&RPG::SaveActor::sprite_name,		LSD_Reader::ChunkActor::sprite_name,		"sprite_name"		),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::sprite_id,		LSD_Reader::ChunkActor::sprite_id,			"sprite_id"			),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::sprite_flags,		LSD_Reader::ChunkActor::sprite_flags,		"sprite_flags"		),
	new TypedField<RPG::SaveActor, std::string>				(&RPG::SaveActor::face_name,		LSD_Reader::ChunkActor::face_name,			"face_name"			),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::face_id,			LSD_Reader::ChunkActor::face_id,			"face_id"			),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::level,			LSD_Reader::ChunkActor::level,				"level"				),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::exp,				LSD_Reader::ChunkActor::exp,				"exp"				),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::hp_mod,			LSD_Reader::ChunkActor::hp_mod,				"hp_mod"			),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::sp_mod,			LSD_Reader::ChunkActor::sp_mod,				"sp_mod"			),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::attack_mod,		LSD_Reader::ChunkActor::attack_mod,			"attack_mod"		),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::defense_mod,		LSD_Reader::ChunkActor::defense_mod,		"defense_mod"		),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::spirit_mod,		LSD_Reader::ChunkActor::spirit_mod,			"spirit_mod"		),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::agility_mod,		LSD_Reader::ChunkActor::agility_mod,		"agility_mod"		),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::skills_size,		LSD_Reader::ChunkActor::skills_size,		"skills_size"		),
	new TypedField<RPG::SaveActor, std::vector<int16_t> >	(&RPG::SaveActor::skills,			LSD_Reader::ChunkActor::skills,				"skills"			),
	new TypedField<RPG::SaveActor, std::vector<int16_t> >	(&RPG::SaveActor::equipped,			LSD_Reader::ChunkActor::equipped,			"equipped"			),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::current_hp,		LSD_Reader::ChunkActor::current_hp,			"current_hp"		),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::current_sp,		LSD_Reader::ChunkActor::current_sp,			"current_sp"		),
	new TypedField<RPG::SaveActor, std::vector<uint32_t> >	(&RPG::SaveActor::battle_commands,	LSD_Reader::ChunkActor::battle_commands,	"battle_commands"	),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::status_size,		LSD_Reader::ChunkActor::status_size,		"status_size"		),
	new TypedField<RPG::SaveActor, std::vector<int16_t> >	(&RPG::SaveActor::status,			LSD_Reader::ChunkActor::status,				"status"			),
	new TypedField<RPG::SaveActor, bool>					(&RPG::SaveActor::changed_class,	LSD_Reader::ChunkActor::changed_class,		"changed_class"		),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::class_id,			LSD_Reader::ChunkActor::class_id,			"class_id"			),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::unknown_5b,		LSD_Reader::ChunkActor::unknown_5b,			"unknown_5b"		),
	new TypedField<RPG::SaveActor, bool>					(&RPG::SaveActor::two_weapon,		LSD_Reader::ChunkActor::two_weapon,			"two_weapon"		),
	new TypedField<RPG::SaveActor, bool>					(&RPG::SaveActor::lock_equipment,	LSD_Reader::ChunkActor::lock_equipment,		"lock_equipment"	),
	new TypedField<RPG::SaveActor, bool>					(&RPG::SaveActor::auto_battle,		LSD_Reader::ChunkActor::auto_battle,		"auto_battle"		),
	new TypedField<RPG::SaveActor, bool>					(&RPG::SaveActor::mighty_guard,		LSD_Reader::ChunkActor::mighty_guard,		"mighty_guard"		),
	new TypedField<RPG::SaveActor, int>						(&RPG::SaveActor::unknown_60,		LSD_Reader::ChunkActor::unknown_60,			"unknown_60"		),
	NULL
};
