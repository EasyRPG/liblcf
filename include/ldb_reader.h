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

#ifndef _LDB_READER_H_
#define _LDB_READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include "reader.h"
#include "rpg_actor.h"
#include "rpg_skill.h"
#include "rpg_item.h"
#include "rpg_enemy.h"
#include "rpg_troop.h"
#include "rpg_attribute.h"
#include "rpg_state.h"
#include "rpg_terrain.h"
#include "rpg_chipset.h"
#include "rpg_animation.h"
#include "rpg_terms.h"
#include "rpg_system.h"
#include "rpg_commonevent.h"
#include "rpg_music.h"
#include "rpg_sound.h"
#include "rpg_class.h"
#include "rpg_battlecommand.h"
#include "rpg_battleranimation.h"
#include "rpg_battleranimationdata.h"
#include "rpg_itemanimation.h"
#include "rpg_database.h"

////////////////////////////////////////////////////////////
/// LDB Reader namespace
////////////////////////////////////////////////////////////
namespace LDB_Reader {
	bool Load(const std::string &filename);
	void LoadChunks(Reader& stream);

//	RPG::Actor ReadActor(Reader& stream);
//	RPG::Learning ReadLearning(Reader& stream);
//	RPG::Skill ReadSkill(Reader& stream);
//	RPG::Item ReadItem(Reader& stream);
//	RPG::Enemy ReadEnemy(Reader& stream);
//	RPG::EnemyAction ReadEnemyAction(Reader& stream);
//	RPG::Troop ReadTroop(Reader& stream);
//	RPG::TroopMember ReadTroopMember(Reader& stream);
//	RPG::TroopPage ReadTroopPage(Reader& stream);
//	RPG::TroopPageCondition ReadTroopPageCondition(Reader& stream);
//	RPG::Attribute ReadAttribute(Reader& stream);
//	RPG::State ReadState(Reader& stream);
//	RPG::Terrain ReadTerrain(Reader& stream);
//	RPG::Chipset ReadChipset(Reader& stream);
//	RPG::Animation ReadAnimation(Reader& stream);
//	RPG::AnimationTiming ReadAnimationTiming(Reader& stream);
//	RPG::AnimationFrame ReadAnimationFrame(Reader& stream);
//	RPG::AnimationCellData ReadAnimationCellData(Reader& stream);
//	RPG::Terms ReadTerms(Reader& stream);
//	RPG::System ReadSystem(Reader& stream);
//	RPG::CommonEvent ReadCommonEvent(Reader& stream);
	RPG::Sound ReadSound(Reader& stream);
	RPG::Music ReadMusic(Reader& stream);
	std::vector<std::string> ReadVariables(Reader& stream);
	std::vector<std::string> ReadSwitches(Reader& stream);
//	RPG::TestBattler ReadTestBattler(Reader& stream);
//
//	// 2003
//	RPG::BattleCommands ReadBattleCommands(Reader& stream);
//	RPG::BattleCommand ReadBattleCommand(Reader& stream);
//	RPG::Class ReadClass(Reader& stream);
//	RPG::BattlerAnimation ReadBattlerAnimation(Reader& stream);
//	RPG::BattlerAnimationExtension ReadBattlerAnimationExtension(Reader& stream);
//	RPG::BattlerAnimationData ReadBattlerAnimationData(Reader& stream);
//	RPG::ItemAnimation ReadItemAnimation(Reader& stream);
	void ReadDatabase(RPG::Database& data, Reader& stream);
}

#endif
