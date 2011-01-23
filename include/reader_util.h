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
	static const struct {
		int code;
		const char *name;
	} encoding_table[] = {
		{	37, "EBCDIC-US" },
		{   437, "OEM - United States" },
		{   500, "IBM EBCDIC - International" },
		{   708, "Arabic - ASMO 708" },
		{   709, "Arabic - ASMO 449+, BCON V4" },
		{   710, "Arabic - Transparent Arabic" },
		{   720, "Arabic - Transparent ASMO" },
		{   737, "OEM - Greek (formerly 437G)" },
		{   775, "OEM - Baltic" },
		{   850, "OEM - Multilingual Latin I" },
		{   852, "OEM - Latin II" },
		{   855, "OEM - Cyrillic (primarily Russian)" },
		{   857, "OEM - Turkish" },
		{   858, "OEM - Multlingual Latin I + Euro symbol" },
		{   860, "OEM - Portuguese" },
		{   861, "OEM - Icelandic" },
		{   862, "OEM - Hebrew" },
		{   863, "OEM - Canadian-French" },
		{   864, "OEM - Arabic" },
		{   865, "OEM - Nordic" },
		{   866, "OEM - Russian" },
		{   869, "OEM - Modern Greek" },
		{   870, "IBM EBCDIC - Multilingual/ROECE (Latin-2)" },
		{   874, "ANSI/OEM - Thai (same as 28605, ISO 8859-15)" },
		{   875, "IBM EBCDIC - Modern Greek" },
		{   932, "Shift_JIS" },
		{   936, "ANSI/OEM - Simplified Chinese (PRC, Singapore)" },
		{   949, "ANSI/OEM - Korean (Unified Hangeul Code)" },
		{   950, "ANSI/OEM - Traditional Chinese" },
		{  1026, "IBM EBCDIC - Turkish (Latin-5)" },
		{  1047, "IBM EBCDIC - Latin 1/Open System" },
		{  1140, "EBCDIC-CA-FR@EURO" },
		{  1141, "EBCDIC-AT-DE@EURO" },
		{  1142, "EBCDIC-DK-NO@EURO" },
		{  1143, "EBCDIC-FI-SE@EURO" },
		{  1144, "EBCDIC-IT@EURO" },
		{  1145, "EBCDIC-ES-A@EURO" },
		{  1146, "EBCDIC-UK@EURO" },
		{  1147, "EBCDIC-FR@EURO" },
		{  1148, "IBM EBCDIC - International (500 + Euro symbol)" },
		{  1149, "EBCDIC-IS-FRISS@EURO" },
		{  1200, "UCS-2-LE" },
		{  1201, "UCS-2-BE" },
		{  1251, "ANSI - Cyrillic" },
		{  1252, "ANSI - Latin I" },
		{  1253, "ANSI - Greek" },
		{  1254, "ANSI - Turkish" },
		{  1255, "ANSI - Hebrew" },
		{  1256, "ANSI - Arabic" },
		{  1257, "ANSI - Baltic" },
		{  1258, "ANSI/OEM - Vietnamese" },
		{  1361, "Korean (Johab)" },
		{ 10000, "MAC - Roman" },
		{ 10001, "MAC-JP" },
		{ 10002, "MAC - Traditional Chinese (Big5)" },
		{ 10003, "MAC-KR" },
		{ 10004, "MAC-AR" },
		{ 10005, "MAC - Hebrew" },
		{ 10006, "MAC - Greek I" },
		{ 10007, "MAC-CYRILLIC" },
		{ 10008, "MAC - Simplified Chinese (GB 2312)" },
		{ 10010, "MAC - Romania" },
		{ 10017, "MAC - Ukraine" },
		{ 10021, "MAC - Thai" },
		{ 10029, "MAC - Latin II" },
		{ 10079, "MAC - Icelandic" },
		{ 10081, "MAC - Turkish" },
		{ 10082, "MAC - Croatia" },
		{ 12000, "UCS-4-LE" },
		{ 12001, "UCS-4-BE" },
		{ 20000, "CNS - Taiwan" },
		{ 20001, "TCA - Taiwan" },
		{ 20002, "Eten - Taiwan" },
		{ 20003, "IBM5550 - Taiwan" },
		{ 20004, "TeleText - Taiwan" },
		{ 20005, "Wang - Taiwan" },
		{ 20105, "IA5 IRV International Alphabet No. 5 (7-bit)" },
		{ 20106, "IA5 German (7-bit)" },
		{ 20107, "IA5 Swedish (7-bit)" },
		{ 20108, "IA5 Norwegian (7-bit)" },
		{ 20127, "ANSI_X3.4-1968" },
		{ 20261, "T.61" },
		{ 20269, "ISO 6937 Non-Spacing Accent" },
		{ 20273, "EBCDIC-DE" },
		{ 20277, "EBCDIC-DK-NO" },
		{ 20278, "EBCDIC-FI-SE" },
		{ 20280, "EBCDIC-IT" },
		{ 20284, "EBCDIC-ES-A" },
		{ 20285, "EBCDIC-UK" },
		{ 20290, "EBCDIC-JP" },
		{ 20297, "EBCDIC-FR" },
		{ 20420, "EBCDIC-AR" },
		{ 20423, "IBM EBCDIC - Greek" },
		{ 20424, "IBM EBCDIC - Hebrew" },
		{ 20833, "EBCDIC-KR" },
		{ 20838, "IBM EBCDIC - Thai" },
		{ 20866, "Russian - KOI8-R" },
		{ 20871, "IBM EBCDIC - Icelandic" },
		{ 20880, "IBM EBCDIC - Cyrillic (Russian)" },
		{ 20905, "IBM EBCDIC - Turkish" },
		{ 20924, "IBM EBCDIC - Latin-1/Open System (1047 + Euro symbol)" },
		{ 20932, "JIS X 0208-1990 & 0121-1990" },
		{ 20936, "GB2312" },
		{ 21025, "IBM EBCDIC - Cyrillic (Serbian, Bulgarian)" },
		{ 21027, "Extended Alpha Lowercase" },
		{ 21866, "Ukrainian (KOI8-U)" },
		{ 28591, "ISO-8859-1" },
		{ 28592, "ISO-8859-2" },
		{ 28593, "ISO-8859-3" },
		{ 28594, "ISO-8859-4" },
		{ 28595, "ISO-8859-5" },
		{ 28596, "ISO-8859-6" },
		{ 28597, "ISO-8859-7" },
		{ 28598, "ISO-8859-8" },
		{ 28599, "ISO-8859-95" },
		{ 28605, "ISO-8859-15" },
		{ 29001, "Europa 3" },
		{ 38598, "ISO-8859-8 Hebrew" },
		{ 50220, "ISO-2022 Japanese with no halfwidth Katakana" },
		{ 50221, "ISO-2022-JP" },
		{ 50222, "ISO-2022 Japanese JIS X 0201-1989" },
		{ 50225, "ISO-2022-KR" },
		{ 50227, "ISO-2022 Simplified Chinese" },
		{ 50229, "ISO-2022 Traditional Chinese" },
		{ 50930, "Japanese (Katakana) Extended" },
		{ 50931, "US/Canada and Japanese" },
		{ 50933, "Korean Extended and Korean" },
		{ 50935, "Simplified Chinese Extended and Simplified Chinese" },
		{ 50936, "Simplified Chinese" },
		{ 50937, "US/Canada and Traditional Chinese" },
		{ 50939, "Japanese (Latin) Extended and Japanese" },
		{ 51932, "EUC-JP" },
		{ 51936, "EUC - Simplified Chinese" },
		{ 51949, "EUC-KR" },
		{ 51950, "EUC - Traditional Chinese" },
		{ 52936, "HZ-GB2312 Simplified Chinese" },
		{ 54936, "Windows XP: GB18030 Simplified Chinese (4 Byte)" },
		{ 57002, "ISCII Devanagari 57003 ISCII Bengali" },
		{ 57004, "ISCII Tamil" },
		{ 57005, "ISCII Telugu" },
		{ 57006, "ISCII Assamese" },
		{ 57007, "ISCII Oriya" },
		{ 57008, "ISCII Kannada" },
		{ 57009, "ISCII Malayalam" },
		{ 57010, "ISCII Gujarati" },
		{ 57011, "ISCII Punjabi" },
		{ 65000, "UTF-7" },
		{ 65001, "UTF-8" },
		{ 0, ""}
	};

	////////////////////////////////////////////////////////
	/// Returns the iconv name of a windows codepage.
	/// @param codepage : Codepage to lookup
	/// @return Name used by iconv or NULL if not found
	////////////////////////////////////////////////////////
	const char* CodepageToIconv(int codepage);
	
	////////////////////////////////////////////////////////
	/// Returns the codepage for an iconv name
	/// @return Codepage or -1 if not found
	////////////////////////////////////////////////////////
	int IconvToCodepage(const char* iconv_str);

	////////////////////////////////////////////////////////
	/// Returns the encoding set in the ini file
	/// @return Windows: Codepage, Other: iconv name,
	/// Empty string if not found
	////////////////////////////////////////////////////////
	std::string GetEncoding();
}

#endif
