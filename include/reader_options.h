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

#ifndef _DATA_OPTIONS_H_
#define _DATA_OPTIONS_H_

#define RPG2K	1
#define RPG2K3	2

////////////////////////////////////////////////////////////
// RPGMAKER
//		Defines RPG Maker compability, RPG2K for RPG Maker 2000
//		and RPG2K3 for RPG Maker 2003.
////////////////////////////////////////////////////////////
#ifndef RPGMAKER
#define RPGMAKER RPG2K
#endif

////////////////////////////////////////////////////////////
// INI_NAME
//		INI configuration filename.
//
// READ_INI_GAME_TITLE
//		Read game title from ini file.
//
// DATABASE_NAME
//		Database filename.
////////////////////////////////////////////////////////////
#define INI_NAME "RPG_RT.ini"
#define READ_INI_GAME_TITLE 1
#define DATABASE_NAME "RPG_RT.ldb"
#define TREEMAP_NAME "RPG_RT.lmt"

////////////////////////////////////////////////////////////
// READER_SUPPORT_XML
//		Enables support for XML file reading and writing.
//		This option adds libexpat as a dependency.
////////////////////////////////////////////////////////////
#define READER_SUPPORT_XML 1

#if defined(GEKKO)
	#define READER_BIG_ENDIAN
#endif

#endif
