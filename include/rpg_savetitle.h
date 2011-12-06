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

#ifndef _RPG_SAVETITLE_H_
#define _RPG_SAVETITLE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>

////////////////////////////////////////////////////////////
/// RPG::SaveTitle class
////////////////////////////////////////////////////////////
namespace RPG {
	class SaveTitle {
	public:
		SaveTitle();

		double timestamp;
		std::string hero_name;
		int hero_level;
		int hero_hp;
		std::string face1_name;
		std::string face2_name;
		std::string face3_name;
		std::string face4_name;
		int face1_id;
		int face2_id;
		int face3_id;
		int face4_id;
	};
}

#endif
