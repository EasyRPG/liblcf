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

#ifndef _LSD_READER_H_
#define _LSD_READER_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include <iostream>
#include "reader.h"
#include "rpg_save.h"

////////////////////////////////////////////////////////////
/// LDB Reader namespace
////////////////////////////////////////////////////////////
namespace LSD_Reader {
	RPG::SaveTitle ReadSaveTitle(Reader& stream);
	RPG::SaveData ReadSaveData(Reader& stream);
	RPG::SavePicture ReadSavePicture(Reader& stream);
	RPG::SavePartyLocation ReadSavePartyLocation(Reader& stream);
	RPG::SaveVehicleLocation ReadSaveVehicleLocation(Reader& stream);
	RPG::SaveActor ReadSaveActor(Reader& stream);
	RPG::SaveInventory ReadSaveInventory(Reader& stream);
	RPG::SaveMapInfo ReadSaveMapInfo(Reader& stream);
	RPG::SaveMapEvent ReadSaveMapEvent(Reader& stream);
	RPG::SaveScreen ReadSaveScreen(Reader& stream);
	RPG::SaveCommonEvent ReadCommonEvent(Reader& stream);
	RPG::SaveCommonEventData ReadCommonEventData(Reader& stream);
	RPG::SaveCommonEventCommands ReadCommonEventCommands(Reader& stream);
	RPG::SaveEvents ReadSaveEvents(Reader& stream);
	RPG::SaveEventCommands ReadSaveEventCommands(Reader& stream);
	RPG::Save* Load(const std::string &filename);
	RPG::Save* LoadChunks(Reader& stream);
}

#endif
