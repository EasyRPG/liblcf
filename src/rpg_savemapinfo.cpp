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
#include "rpg_savemapinfo.h"

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
RPG::SaveMapInfo::SaveMapInfo() {
	pan_x = 0;
	pan_y = 0;
	encounter_rate = -1;
	chipset_id = -1;
	parallax_name = "";
	parallax_horz = false;
	parallax_vert = false;
	parallax_horz_auto = false;
	parallax_horz_speed = 0;
	parallax_vert_auto = false;
	parallax_vert_speed = 0;
}

void RPG::SaveMapInfo::Setup() {
	pan_x = 0;
	pan_y = 0;
	lower_tiles.resize(144);
	upper_tiles.resize(144);
	for (int i = 0; i < 144; i++) {
		lower_tiles[i] = i;
		upper_tiles[i] = i;
	}
}

void RPG::SaveMapInfo::Setup(const RPG::Map& map) {
	chipset_id = map.chipset_id;
	parallax_name = map.parallax_name;
	parallax_horz = map.parallax_loop_x;
	parallax_vert = map.parallax_loop_y;
	parallax_horz_auto = map.parallax_auto_loop_x;
	parallax_vert_auto = map.parallax_auto_loop_y;
	parallax_horz_speed = map.parallax_sx;
	parallax_vert_speed = map.parallax_sy;
}

void RPG::SaveMapInfo::Setup(const RPG::MapInfo& map_info) {
	encounter_rate = map_info.encounter_steps;
}

