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
#ifdef _WIN32
#include <cstdio>
#endif
#include <cstdlib>
#include <cstring>
#include <sstream>
#include "inireader.h"
#include "reader_util.h"

////////////////////////////////////////////////////////////
namespace ReaderUtil {
}

////////////////////////////////////////////////////////////
std::string ReaderUtil::CodepageToIconv(int codepage) {
	if (codepage == 0)
		return "";

	std::ostringstream out;
	out << "CP" << codepage;
	return out.str();
}

////////////////////////////////////////////////////////////
std::string ReaderUtil::GetEncoding() {
	INIReader ini("RPG_RT.ini");
	if (ini.ParseError() != -1) {
#if defined(GEKKO) || defined(PSP)
		std::string default_enc = "1252";
#else
		std::string default_enc = "";
#endif
		std::string encoding = ini.Get("EasyRpg", "Encoding", default_enc);

		if (!encoding.empty()) {
#ifdef _WIN32
			int codepage = atoi(encoding.c_str());
			if (codepage > 0) {
				// Looks like a valid codepage
				return encoding.c_str();
			}
#else
			std::string iconv_str = CodepageToIconv(atoi(encoding.c_str()));
			// Check at first if the ini value is a codepage
			if (!iconv_str.empty()) {
				// Looks like a valid codepage
				return iconv_str;
			}
#endif
		}
	}
	return "";
}
