/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include "reader_options.h"
#ifdef LCF_SUPPORT_ICU
#  include "unicode/ucsdet.h"
#  include "unicode/ucnv.h"
#else
#  ifdef _WIN32
#    include <cstdio>
#    define WIN32_LEAN_AND_MEAN
#    ifndef NOMINMAX
#      define NOMINMAX
#    endif
#    include <windows.h>
#  endif
#endif
#ifndef _WIN32
#  include <locale>
#endif

#include <cstdlib>
#include <sstream>
#include <vector>

#include "data.h"
#include "inireader.h"
#include "ldb_reader.h"
#include "reader_util.h"

namespace ReaderUtil {
}

std::string ReaderUtil::CodepageToEncoding(int codepage) {
	if (codepage == 0)
		return std::string();
#ifndef LCF_SUPPORT_ICU
#  ifdef _WIN32
	if (codepage > 0) {
		// Looks like a valid codepage
		return std::string(codepage);
	}
#  endif
#endif
	if (codepage == 932) {
#ifdef LCF_SUPPORT_ICU
		return "cp943";
#else
		return "SHIFT_JIS";
#endif
	}
	if (codepage == 949) {
#ifdef LCF_SUPPORT_ICU
		return "cp949";
#else
		return "cp1361";
#endif
	}
	std::ostringstream out;
#ifdef LCF_SUPPORT_ICU
	out << "windows-" << codepage;
#else
	out << "CP" << codepage;
#endif
	// Check at first if the ini value is a codepage
	if (!out.str().empty()) {
		// Looks like a valid codepage
		return out.str();
	}

	return std::string();
}

std::string ReaderUtil::DetectEncoding(const std::string& database_file) {
#ifdef LCF_SUPPORT_ICU
	std::ostringstream text;
	std::string encoding;

	//Populate Data::terms or will empty by default even if load fails
	LDB_Reader::Load(database_file, "");

	text <<
	Data::terms.menu_save << " " <<
	Data::terms.menu_quit << " " <<
	Data::terms.new_game << " " <<
	Data::terms.load_game << " " <<
	Data::terms.exit_game << " " <<
	Data::terms.status << " " <<
	Data::terms.row << " " <<
	Data::terms.order << " " <<
	Data::terms.wait_on << " " <<
	Data::terms.wait_off << " " <<
	Data::terms.level << " " <<
	Data::terms.health_points << " " <<
	Data::terms.spirit_points << " " <<
	Data::terms.normal_status << " " <<
	Data::terms.exp_short << " " <<
	Data::terms.lvl_short << " " <<
	Data::terms.hp_short << " " <<
	Data::terms.sp_short << " " <<
	Data::terms.sp_cost << " " <<
	Data::terms.attack << " " <<
	Data::terms.defense << " " <<
	Data::terms.spirit << " " <<
	Data::terms.agility << " " <<
	Data::terms.weapon << " " <<
	Data::terms.shield << " " <<
	Data::terms.armor << " " <<
	Data::terms.helmet << " " <<
	Data::terms.accessory << " " <<
	Data::terms.save_game_message << " " <<
	Data::terms.load_game_message << " " <<
	Data::terms.file << " " <<
	Data::terms.exit_game_message << " " <<
	Data::terms.yes << " " <<
	Data::terms.no;

	// Checks if there are more than the above 33 spaces (no data)
	if (text.str().size() > 33)
	{
		UErrorCode status = U_ZERO_ERROR;
		UCharsetDetector* detector = ucsdet_open(&status);

		ucsdet_setText(detector, text.str().data(), text.str().length(), &status);
		const UCharsetMatch* match = ucsdet_detect(detector, &status);
		if (match != NULL)
		{
			encoding = ucsdet_getName(match, &status);
		}
		ucsdet_close(detector);

		// Fixes to ensure proper Windows encodings
		if (encoding == "Shift_JIS")
		{
			encoding = "cp943"; // Japanese
		}
		else if (encoding == "EUC-KR")
		{
			encoding = "cp949"; // Korean
		}
		else if (encoding == "ISO-8859-1")
		{
			encoding = "windows-1252"; // Occidental
		}
		else if (encoding == "ISO-8859-2")
		{
			encoding = "windows-1250"; // Central Europe
		}
		else if (encoding == "ISO-8859-5")
		{
			encoding = "windows-1251"; // Cyrillic
		}
		else if (encoding == "ISO-8859-6")
		{
			encoding = "windows-1256"; // Arabic
		}
		else if (encoding == "ISO-8859-7")
		{
			encoding = "windows-1253"; // Greek
		}
		else if (encoding == "ISO-8859-8")
		{
			encoding = "windows-1255"; // Hebrew
		}
	}
#endif

	return encoding;
}

std::string ReaderUtil::GetEncoding(const std::string& ini_file) {
	INIReader ini(ini_file);
	if (ini.ParseError() != -1) {
		std::string encoding = ini.Get("EasyRPG", "Encoding", std::string());
		if (!encoding.empty()) {
			return ReaderUtil::CodepageToEncoding(atoi(encoding.c_str()));
		}
	}
	return std::string();
}

std::string ReaderUtil::GetLocaleEncoding() {
#ifdef _WIN32
	// On Windows means current system locale.
	int codepage = 0;
#else
	int codepage = 1252;

	std::locale loc = std::locale("");
	// Gets the language and culture part only
	std::string loc_full = loc.name().substr(0, loc.name().find_first_of("@."));
	// Gets the language part only
	std::string loc_lang = loc.name().substr(0, loc.name().find_first_of("_"));

	if      (loc_lang == "th")    codepage = 874;
	else if (loc_lang == "ja")    codepage = 932;
	else if (loc_full == "zh_CN" ||
	         loc_full == "zh_SG") codepage = 936;
	else if (loc_lang == "ko")    codepage = 949;
	else if (loc_full == "zh_TW" ||
	         loc_full == "zh_HK") codepage = 950;
	else if (loc_lang == "cs" ||
	         loc_lang == "hu" ||
	         loc_lang == "pl" ||
	         loc_lang == "ro" ||
	         loc_lang == "hr" ||
	         loc_lang == "sk" ||
	         loc_lang == "sl")    codepage = 1250;
	else if (loc_lang == "ru")    codepage = 1251;
	else if (loc_lang == "ca" ||
	         loc_lang == "da" ||
	         loc_lang == "de" ||
	         loc_lang == "en" ||
	         loc_lang == "es" ||
	         loc_lang == "fi" ||
	         loc_lang == "fr" ||
	         loc_lang == "it" ||
	         loc_lang == "nl" ||
	         loc_lang == "nb" ||
	         loc_lang == "pt" ||
	         loc_lang == "sv" ||
	         loc_lang == "eu")    codepage = 1252;
	else if (loc_lang == "el")    codepage = 1253;
	else if (loc_lang == "tr")    codepage = 1254;
	else if (loc_lang == "he")    codepage = 1255;
	else if (loc_lang == "ar")    codepage = 1256;
	else if (loc_lang == "et" ||
	         loc_lang == "lt" ||
	         loc_lang == "lv")    codepage = 1257;
	else if (loc_lang == "vi")    codepage = 1258;
#endif
	return CodepageToEncoding(codepage);
}

std::string ReaderUtil::Recode(const std::string& str_to_encode, const std::string& source_encoding) {
#ifdef _WIN32
	return ReaderUtil::Recode(str_to_encode, source_encoding, "65001");
#else
	return ReaderUtil::Recode(str_to_encode, source_encoding, "UTF-8");
#endif
}

std::string ReaderUtil::Recode(const std::string& str_to_encode,
                               const std::string& src_enc,
                               const std::string& dst_enc) {
	std::string encoding_str = src_enc;

	if (src_enc.empty()) {
		return str_to_encode;
	}
	if (atoi(src_enc.c_str()) > 0) {
		encoding_str = ReaderUtil::CodepageToEncoding(atoi(src_enc.c_str()));
	}
#ifdef LCF_SUPPORT_ICU
	UErrorCode status = U_ZERO_ERROR;
	int size = str_to_encode.size() * 4;
	UChar* unicode_str = new UChar[size];
	UConverter *conv;
	int length;
	std::string result_str;

	conv = ucnv_open(encoding_str.c_str(), &status);
	length = ucnv_toUChars(conv, unicode_str, size, str_to_encode.c_str(), -1, &status);
	ucnv_close(conv);
	if (status != U_ZERO_ERROR) return std::string();

	char* result = new char[length * 4];

	conv = ucnv_open(dst_enc.c_str(), &status);
	ucnv_fromUChars(conv, result, length * 4, unicode_str, -1, &status);
	ucnv_close(conv);
	if (status != U_ZERO_ERROR) return std::string();

	result_str = result;

	delete[] unicode_str;
	delete[] result;

	return std::string(result_str);
#else
#  ifdef _WIN32
	size_t strsize = str_to_encode.size();

	wchar_t* widechar = new wchar_t[strsize * 5 + 1];

	// To UTF-16
	// Default codepage is 0, so we dont need a check here
	int res = MultiByteToWideChar(atoi(encoding_str.c_str()), 0, str_to_encode.c_str(), strsize, widechar, strsize * 5 + 1);
	if (res == 0) {
		// Invalid codepage
		delete [] widechar;
		return str_to_encode;
	}
	widechar[res] = '\0';

	// Back to UTF-8...
	char* utf8char = new char[strsize * 5 + 1];
	res = WideCharToMultiByte(atoi(dst_enc.c_str()), 0, widechar, res, utf8char, strsize * 5 + 1, NULL, NULL);
	utf8char[res] = '\0';

	// Result in str
	std::string str = std::string(utf8char, res);

	delete [] widechar;
	delete [] utf8char;

	return str;
#  else
	iconv_t cd = iconv_open(dst_enc.c_str(), encoding_str.c_str());
	if (cd == (iconv_t)-1)
		return str_to_encode;
	char *src = const_cast<char *>(str_to_encode.c_str());
	size_t src_left = str_to_encode.size();
	size_t dst_size = str_to_encode.size() * 5 + 10;
	char *dst = new char[dst_size];
	size_t dst_left = dst_size;
#    ifdef ICONV_CONST
	char ICONV_CONST *p = src;
#    else
	char *p = src;
#    endif
	char *q = dst;
	size_t status = iconv(cd, &p, &src_left, &q, &dst_left);
	iconv_close(cd);
	if (status == (size_t) -1 || src_left > 0) {
	delete[] dst;
		return std::string();
	}
	*q++ = '\0';
	std::string result(dst);
	delete[] dst;
	return result;
#  endif
#endif
}
