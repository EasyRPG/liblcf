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
/// Headers
////////////////////////////////////////////////////////////
#include "reader.h"
#include <cstdarg>
#ifdef _WIN32
#include <windows.h>
#else
#include <iconv.h>
#endif

////////////////////////////////////////////////////////////
/// Statics
////////////////////////////////////////////////////////////
std::string Reader::error_str;

////////////////////////////////////////////////////////////
Reader::Reader(char* filename, std::string encoding) {
	stream = fopen(filename, "rb");
	this->encoding = encoding;
	this->filename = std::string(filename);
}

////////////////////////////////////////////////////////////
Reader::Reader(const std::string& filename, std::string encoding) {
	stream = fopen(filename.c_str(), "rb");
	this->encoding = encoding;
	this->filename = std::string(filename);
}

////////////////////////////////////////////////////////////
Reader::~Reader() {
	if (stream != NULL) {
		fclose(stream);
	}
}

////////////////////////////////////////////////////////////
bool Reader::ReadBool() {
	return (Read32(Reader::CompressedInteger) > 0);
}

////////////////////////////////////////////////////////////
uint8_t Reader::Read8() {
	uint8_t val = 0;
#ifndef NDEBUG
	assert(fread(&val, 1, 1, stream) == 1);
#else
	fread(&val, 1, 1, stream);
#endif
	return val;
}

////////////////////////////////////////////////////////////
int16_t Reader::Read16() {
	int16_t val = 0;
#ifndef NDEBUG
	assert(fread(&val, 2, 1, stream) == 1);
#else
	fread(&val, 2, 1, stream);
#endif
#ifdef READER_BIG_ENDIAN
	uint16_t val2 = (uint16_t)val;
	SwapByteOrder(val2);
	val = val2;
#endif
	return val;
}

////////////////////////////////////////////////////////////
int32_t Reader::Read32(IntegerType type) {
	int32_t value = 0;
	unsigned char temp = 0;
#ifdef READER_BIG_ENDIAN
	uint32_t val2 = 0;
#endif

	switch (type) {
	case Reader::NormalInteger:
#ifndef NDEBUG
		assert(fread(&value, 4, 1, stream) == 1);
#else
		fread(&value, 4, 1, stream);
#endif
		#ifdef READER_BIG_ENDIAN
			val2 = (uint32_t)value;
			SwapByteOrder(val2);
			value = val2;
		#endif
		return value;

	case Reader::CompressedInteger:
		do {
			value <<= 7;
			if (fread(&temp, 1, 1, stream) != 1) // Get byte's value
				return 0;
			value |= temp & 0x7F; // Check if it's a BER integer
		} while (temp & 0x80);

		return value;
	default:
#ifndef NDEBUG
		assert(false && "Invalid IntegerType in Read32");
#endif
		return 0;
	}
}

////////////////////////////////////////////////////////////
double Reader::ReadDouble() {
	double val = 0;
#ifndef NDEBUG
	assert(fread(&val, 8, 1, stream) == 1);
#else
	fread(&val, 8, 1, stream);
#endif
#ifdef READER_BIG_ENDIAN
#error "Need 64-bit byte swap"
#endif
	return val;
}

////////////////////////////////////////////////////////////
void Reader::ReadBool(std::vector<bool> &buffer, size_t size) {
	uint8_t val = 0;
	buffer.clear();

	for (unsigned i = 0; i < size; ++i) {
#ifndef NDEBUG
		assert(fread(&val, 1, 1, stream) == 1);
#else
		fread(&val, 1, 1, stream);
#endif
		buffer.push_back(val > 0);
	}
}

////////////////////////////////////////////////////////////
void Reader::Read8(std::vector<uint8_t> &buffer, size_t size) {
	uint8_t val;
	buffer.clear();

	for (unsigned int i = 0; i < size; ++i) {
#ifndef NDEBUG
		assert(fread(&val, 1, 1, stream) == 1);
#else
		fread(&val, 1, 1, stream);
#endif
		buffer.push_back(val);
	}
}

////////////////////////////////////////////////////////////
void Reader::Read16(std::vector<int16_t> &buffer, size_t size) {
	int16_t val;
	buffer.clear();
	size_t items = size / 2;
	for (unsigned int i = 0; i < items; ++i) {
#ifndef NDEBUG
		assert(fread(&val, 2, 1, stream) == 1);
#else
		fread(&val, 2, 1, stream);
#endif
	#ifdef READER_BIG_ENDIAN
		uint16_t val2 = (uint16_t)val;
		SwapByteOrder(val2);
		val = val2;
	#endif
		buffer.push_back(val);
	}
}

////////////////////////////////////////////////////////////
void Reader::Read32(std::vector<uint32_t> &buffer, size_t size) {
	uint32_t val;
	buffer.clear();
	size_t items = size / 4;
	for (unsigned int i = 0; i < items; ++i) {
#ifndef NDEBUG
		assert(fread(&val, 4, 1, stream) == 1);
#else
		fread(&val, 4, 1, stream);
#endif
	#ifdef READER_BIG_ENDIAN
		SwapByteOrder(val);
	#endif
		buffer.push_back(val);
	}
}

////////////////////////////////////////////////////////////
std::string Reader::ReadString(size_t size) {
	char* chars = new char[size + 1];
	chars[size] = '\0';
#ifndef NDEBUG
	assert(fread(chars, 1, size, stream) == size);
#else
	fread(chars, 1, size, stream);
#endif

	std::string str;
	str = Encode(std::string(chars));

	delete[] chars;

	return str;
}

////////////////////////////////////////////////////////////
bool Reader::IsOk() const {
	return (stream != NULL && !ferror(stream));
}

////////////////////////////////////////////////////////////
bool Reader::Eof() const {
	return feof(stream) != 0;
}

////////////////////////////////////////////////////////////
void Reader::Seek(size_t pos, SeekMode mode) {
	switch (mode) {
	case Reader::FromStart:
		fseek(stream, pos, SEEK_SET);
		break;
	case Reader::FromCurrent:
		fseek(stream, pos, SEEK_CUR);
		break;
	case Reader::FromEnd:
		fseek(stream, pos, SEEK_END);
		break;
	default:
#ifndef NDEBUG
		assert(false && "Invalid SeekMode");
#else
		;
#endif
	}
}

////////////////////////////////////////////////////////////
uint32_t Reader::Tell() {
	return (uint32_t)ftell(stream);
}

////////////////////////////////////////////////////////////
bool Reader::Ungetch(uint8_t ch) {
	return (ungetc(ch, stream) == ch);
}

////////////////////////////////////////////////////////////
#ifdef _DEBUG
	void Reader::SkipDebug(const struct Reader::Chunk& chunk_info, const char* srcfile) {
#else
	void Reader::Skip(const struct Reader::Chunk& chunk_info) {
#endif
#ifdef _DEBUG
	// Dump the Chunk Data in Debug Mode
#ifdef _WIN32
	const char* srcfilename = strrchr(srcfile, '\\');
#else
	const char* srcfilename = strrchr(srcfile, '/');
#endif
	if (srcfilename == NULL) {
		srcfilename = srcfile;
	} else {
		srcfilename++;
	}
	fprintf(stderr, "Skipped Chunk %02X (%d byte) in %s at %X (%s)\n", chunk_info.ID, chunk_info.length, filename.c_str(), Tell(), srcfilename);
	for (uint32_t i = 0; i < chunk_info.length; ++i) {
		fprintf(stderr, "%02X ", Reader::Read8());
		if ((i+1) % 16 == 0) {
			fprintf(stderr, "\n");
		}
	}
	fprintf(stderr, "\n");
#else
	Seek((size_t)chunk_info.length, FromCurrent);
#endif
}

////////////////////////////////////////////////////////////
void Reader::SetError(const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);

	char str[256];
	vsprintf(str, fmt, args);

	error_str = str;
	//Output::ErrorStr((std::string)str);

	va_end(args);
}

////////////////////////////////////////////////////////////
const std::string& Reader::GetError() {
	return error_str;
}

////////////////////////////////////////////////////////////
std::string Reader::Encode(const std::string& str_to_encode) {
	size_t strsize = str_to_encode.size();
#ifdef _WIN32
	wchar_t* widechar = new wchar_t[strsize * 5 + 1];
	char* utf8char = new char[strsize * 5 + 1];

	// To Utf16
	// Default codepage is 0, so we dont need a check here
	int res = MultiByteToWideChar(atoi(encoding.c_str()), 0, str_to_encode.c_str(), strsize, widechar, strsize * 5 + 1);
	widechar[res] = '\0';
	// Back to Utf8 ...
	res = WideCharToMultiByte(CP_UTF8, 0, widechar, res, utf8char, strsize * 5 + 1, NULL, NULL);
	utf8char[res] = '\0';

	// Result in str
	std::string str = std::string(utf8char, res);

	delete [] widechar;
	delete [] utf8char;

	return str;
#else
	iconv_t cd = iconv_open("UTF-8", encoding.c_str());
	if (cd == (iconv_t)-1)
		return str_to_encode;
	char *src = (char *) str_to_encode.c_str();
	size_t src_left = str_to_encode.size();
	size_t dst_size = str_to_encode.size() * 5 + 10;
	char *dst = new char[dst_size];
	size_t dst_left = dst_size;
	char *p = src;
	char *q = dst;
	size_t status = iconv(cd, &p, &src_left, &q, &dst_left);
	iconv_close(cd);
	if (status == (size_t) -1 || src_left > 0) {
		delete[] dst;
		return "";
	}
	*q++ = '\0';
	std::string result = std::string(dst);
	delete[] dst;
	return result;
#endif
}

////////////////////////////////////////////////////////////
#ifdef READER_BIG_ENDIAN
void Reader::SwapByteOrder(uint16_t& us)
{
	us =	(us >> 8) |
			(us << 8);
}


void Reader::SwapByteOrder(uint32_t& ui)
{
	ui =	(ui >> 24) |
			((ui<<8) & 0x00FF0000) |
			((ui>>8) & 0x0000FF00) |
			(ui << 24);
}
#endif
