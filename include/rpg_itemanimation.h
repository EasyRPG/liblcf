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

#ifndef _RPG_ITEMANIMATION_H_
#define _RPG_ITEMANIMATION_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
/// RPG::ItemAnimation class
////////////////////////////////////////////////////////////
namespace RPG {
	class ItemAnimation {
	public:
		ItemAnimation();

		int ID;
		int type;
		int weapon_anim;
		int movement;
		int after_image;
		int attacks;
		bool ranged;
		int ranged_anim;
		int ranged_speed;
		int battle_anim;
	};
}

#endif
