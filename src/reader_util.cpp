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
#include "inireader.h"
#include "reader_util.h"

////////////////////////////////////////////////////////////
namespace ReaderUtil {
}

////////////////////////////////////////////////////////////
const char* ReaderUtil::CodepageToIconv(int codepage) {
	if (codepage == 0) {
		return NULL;
	}

    for (size_t i = 0; ; ++i) {
		if (encoding_table[i].code == 0) {
			return NULL;
		}
		
		if (encoding_table[i].code == codepage) {
			return encoding_table[i].name;
		}
    }
}

////////////////////////////////////////////////////////////
int ReaderUtil::IconvToCodepage(const char* iconv_str) {
    if (iconv_str == NULL) {
		return 0;
	}
	
	for (size_t i = 0; ; ++i) {
		if (encoding_table[i].code == 0) {
			return 0;
		}
		
		if (!strcmp(encoding_table[i].name, iconv_str)) {
			return encoding_table[i].code;
		}
    }
}

////////////////////////////////////////////////////////////
std::string ReaderUtil::GetEncoding() {
	INIReader ini("RPG_RT.ini");
	if (ini.ParseError() != -1) {
		std::string encoding = ini.Get("EasyRpg", "Encoding", "");
		if (!encoding.empty()) {
			const char* iconv_str = CodepageToIconv(atoi(encoding.c_str()));
			// Check at first if the ini value is a codepage
			if (iconv_str != NULL) {
				// Looks like a valid codepage
#ifdef _WIN32
				return encoding;
#else
				return std::string(iconv_str);
#endif
			} else { // Now check if the ini value is an iconv value
				int codepage = IconvToCodepage(encoding.c_str());
				if (codepage != 0) {
					// Looks like a valid codepage
#ifdef _WIN32
					char cpage[10];
					sprintf(cpage, "%d", codepage);
					return std::string(cpage);
#else
					return std::string(iconv_str);
#endif
				}
			}
		}
	}
	return "";
}
