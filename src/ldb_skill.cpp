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

////////////////////////////////////////////////////////////
/// Read Skill
////////////////////////////////////////////////////////////
RPG::Skill LDB_Reader::ReadSkill(Reader& stream) {
	RPG::Skill skill;
	skill.ID = stream.ReadInt();

	Reader::Chunk chunk_info;
	while (!stream.Eof()) {
		chunk_info.ID = stream.ReadInt();
		if (chunk_info.ID == ChunkData::END) {
			break;
		} else {
			chunk_info.length = stream.ReadInt();
			if (chunk_info.length == 0) continue;
		}
		switch (chunk_info.ID) {
		case ChunkSkill::name:
			skill.name = stream.ReadString(chunk_info.length);
			break;
		case ChunkSkill::description:
			skill.description = stream.ReadString(chunk_info.length);
			break;
		case ChunkSkill::using_message1:
			skill.using_message1 = stream.ReadString(chunk_info.length);
			break;
		case ChunkSkill::using_message2:
			skill.using_message2 = stream.ReadString(chunk_info.length);
			break;
		case ChunkSkill::failure_message:
			skill.failure_message = stream.ReadInt();
			break;
		case ChunkSkill::type:
			skill.type = stream.ReadInt();
			break;
		case ChunkSkill::sp_type:
			skill.sp_type = stream.ReadInt();
			break;
		case ChunkSkill::sp_percent:
			skill.sp_percent = stream.ReadInt();
			break;
		case ChunkSkill::sp_cost:
			skill.sp_cost = stream.ReadInt();
			break;
		case ChunkSkill::scope:
			skill.scope = stream.ReadInt();
			break;
		case ChunkSkill::switch_id:
			skill.switch_id = stream.ReadInt();
			break;
		case ChunkSkill::animation_id:
			skill.animation_id = stream.ReadInt();
			break;
		case ChunkSkill::sound_effect:
			skill.sound_effect = ReadSound(stream);
			break;
		case ChunkSkill::occasion_field:
			skill.occasion_field = stream.ReadBool();
			break;
		case ChunkSkill::occasion_battle:
			skill.occasion_battle = stream.ReadBool();
			break;
		case ChunkSkill::state_effect:
			skill.state_effect = stream.ReadBool();
			break;
		case ChunkSkill::pdef_f:
			skill.pdef_f = stream.ReadInt();
			break;
		case ChunkSkill::mdef_f:
			skill.mdef_f = stream.ReadInt();
			break;
		case ChunkSkill::variance:
			skill.variance = stream.ReadInt();
			break;
		case ChunkSkill::power:
			skill.power = stream.ReadInt();
			break;
		case ChunkSkill::hit:
			skill.hit = stream.ReadInt();
			break;
		case ChunkSkill::affect_hp:
			skill.affect_hp = stream.ReadBool();
			break;
		case ChunkSkill::affect_sp:
			skill.affect_sp = stream.ReadBool();
			break;
		case ChunkSkill::affect_attack:
			skill.affect_attack = stream.ReadBool();
			break;
		case ChunkSkill::affect_defense:
			skill.affect_defense = stream.ReadBool();
			break;
		case ChunkSkill::affect_spirit:
			skill.affect_spirit = stream.ReadBool();
			break;
		case ChunkSkill::affect_agility:
			skill.affect_agility = stream.ReadBool();
			break;
		case ChunkSkill::absorb_damage:
			skill.absorb_damage = stream.ReadBool();
			break;
		case ChunkSkill::ignore_defense:
			skill.ignore_defense = stream.ReadBool();
			break;
		case ChunkSkill::state_size:
			stream.ReadInt();
			break;
		case ChunkSkill::state_effects:
			stream.ReadBool(skill.state_effects, chunk_info.length);
			break;
		case ChunkSkill::attribute_size:
			stream.ReadInt();
			break;
		case ChunkSkill::attribute_effects:
			stream.ReadBool(skill.attribute_effects, chunk_info.length);
			break;
		case ChunkSkill::affect_attr_defence:
			skill.affect_attr_defence = stream.ReadBool();
			break;
		case ChunkSkill::battler_animation:
			skill.battler_animation = stream.ReadInt();
			break;
		case ChunkSkill::battler_animation_data:
			for (int i = stream.ReadInt(); i > 0; i--) {
				skill.battler_animation_data.push_back(ReadBattlerAnimationData(stream));
			}
			break;
		default:
			stream.Skip(chunk_info);
		}
	}
	return skill;
}
