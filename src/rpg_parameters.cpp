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
#include "rpg_parameters.h"

////////////////////////////////////////////////////////////
/// Constructor
////////////////////////////////////////////////////////////
RPG::Parameters::Parameters() {
}

void RPG::Parameters::Setup(int final_level) {
	maxhp.resize(final_level + 1);
	maxsp.resize(final_level + 1);
	attack.resize(final_level + 1);
	defense.resize(final_level + 1);
	spirit.resize(final_level + 1);
	agility.resize(final_level + 1);
	for (int i = 0; i <= final_level; i++) {
		maxhp[i] = 1;
		maxsp[i] = 0;
		attack[i] = 1;
		defense[i] = 1;
		spirit[i] = 1;
		agility[i] = 1;
	}
}
