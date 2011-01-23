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

#ifndef _EASYRPG_READER_UTIL_H_
#define _EASYRPG_READER_UTIL_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#ifdef _WIN32
#include <windows.h>
#endif

////////////////////////////////////////////////////////////
/// ReaderUtil namespace
////////////////////////////////////////////////////////////
namespace ReaderUtil {
	// Are really all of these encodings used under Windows?
	/// iconv <-> windows codepage table
	/// Source: https://svn.apache.org/repos/asf/stdcxx/branches/4.1.3/util/iconv.cpp
	/// (Apache Licence 2.0)

	////////////////////////////////////////////////////////
	/// Returns the iconv name of a windows codepage.
	/// @param codepage : Codepage to lookup
	/// @return Name used by iconv or NULL if not found
	////////////////////////////////////////////////////////
	std::string CodepageToIconv(int codepage);
	
	////////////////////////////////////////////////////////
	/// Returns the encoding set in the ini file
	/// @return Windows: Codepage, Other: iconv name,
	/// Empty string if not found
	////////////////////////////////////////////////////////
	std::string GetEncoding();
}

#endif
