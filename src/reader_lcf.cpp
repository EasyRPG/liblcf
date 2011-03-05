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
#include <cstdarg>
#include "reader_lcf.h"

////////////////////////////////////////////////////////////
/// Statics
////////////////////////////////////////////////////////////
std::string LcfReader::error_str;

////////////////////////////////////////////////////////////
LcfReader::LcfReader(const char* filename, std::string encoding) :
	filename(filename),
	encoding(encoding),
	stream(fopen(filename, "rb"))
{
}

////////////////////////////////////////////////////////////
LcfReader::LcfReader(const std::string& filename, std::string encoding) :
	filename(filename),
	encoding(encoding),
	stream(fopen(filename.c_str(), "rb"))
{
}

////////////////////////////////////////////////////////////
LcfReader::~LcfReader() {
	Close();
}

////////////////////////////////////////////////////////////
void LcfReader::Close() {
	if (stream != NULL)
		fclose(stream);
	stream = NULL;
}

////////////////////////////////////////////////////////////
void LcfReader::Read(void *ptr, size_t size, size_t nmemb) {
#ifndef NDEBUG
	assert(fread(ptr, size, nmemb, stream) == nmemb);
#else
	fread(ptr, size, nmemb, stream);
#endif
}

////////////////////////////////////////////////////////////
bool LcfReader::ReadBool() {
	return (ReadInt() > 0);
}

////////////////////////////////////////////////////////////
uint8_t LcfReader::Read8() {
	uint8_t val = 0;
	Read(&val, 1, 1);
	return val;
}

////////////////////////////////////////////////////////////
int16_t LcfReader::Read16() {
	int16_t val = 0;
	Read(&val, 2, 1);
#ifdef READER_BIG_ENDIAN
	uint16_t val2 = (uint16_t)val;
	SwapByteOrder(val2);
	val = val2;
#endif
	return val;
}

////////////////////////////////////////////////////////////
int32_t LcfReader::Read32() {
	int32_t val = 0;
	Read(&val, 4, 1);
#ifdef READER_BIG_ENDIAN
	uint32_t val2 = (uint32_t)val;
	SwapByteOrder(val2);
	val = val2;
#endif
	return val;
}

////////////////////////////////////////////////////////////
int32_t LcfReader::ReadInt() {
	int32_t value = 0;
	unsigned char temp = 0;

	do {
		value <<= 7;
		if (fread(&temp, 1, 1, stream) != 1) // Get byte's value
			return 0;
		value |= temp & 0x7F; // Check if it's a BER integer
	} while (temp & 0x80);

	return value;
}

////////////////////////////////////////////////////////////
double LcfReader::ReadDouble() {
	double val = 0;
	Read(&val, 8, 1);
#ifdef READER_BIG_ENDIAN
#warning "Need 64-bit Double byte swap"
#endif
	return val;
}

////////////////////////////////////////////////////////////
void LcfReader::ReadBool(std::vector<bool> &buffer, size_t size) {
	uint8_t val = 0;
	buffer.clear();

	for (unsigned i = 0; i < size; ++i) {
		Read(&val, 1, 1);
		buffer.push_back(val > 0);
	}
}

////////////////////////////////////////////////////////////
void LcfReader::Read8(std::vector<uint8_t> &buffer, size_t size) {
	uint8_t val;
	buffer.clear();

	for (unsigned int i = 0; i < size; ++i) {
		Read(&val, 1, 1);
		buffer.push_back(val);
	}
}

////////////////////////////////////////////////////////////
void LcfReader::Read16(std::vector<int16_t> &buffer, size_t size) {
	int16_t val;
	buffer.clear();
	size_t items = size / 2;
	for (unsigned int i = 0; i < items; ++i) {
#ifndef NDEBUG
		assert(fread(&val, 2, 1, stream) == 1);
#else
		Read(&val, 2, 1);
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
void LcfReader::Read32(std::vector<uint32_t> &buffer, size_t size) {
	uint32_t val;
	buffer.clear();
	size_t items = size / 4;
	for (unsigned int i = 0; i < items; ++i) {
		Read(&val, 4, 1);
	#ifdef READER_BIG_ENDIAN
		SwapByteOrder(val);
	#endif
		buffer.push_back(val);
	}
}

////////////////////////////////////////////////////////////
std::string LcfReader::ReadString(size_t size) {
	char* chars = new char[size + 1];
	chars[size] = '\0';
	Read(chars, 1, size);

	std::string str;
	str = Encode(std::string(chars));

	delete[] chars;

	return str;
}

////////////////////////////////////////////////////////////
bool LcfReader::IsOk() const {
	return (stream != NULL && !ferror(stream));
}

////////////////////////////////////////////////////////////
bool LcfReader::Eof() const {
	return feof(stream) != 0;
}

////////////////////////////////////////////////////////////
void LcfReader::Seek(size_t pos, SeekMode mode) {
	switch (mode) {
	case LcfReader::FromStart:
		fseek(stream, pos, SEEK_SET);
		break;
	case LcfReader::FromCurrent:
		fseek(stream, pos, SEEK_CUR);
		break;
	case LcfReader::FromEnd:
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
uint32_t LcfReader::Tell() {
	return (uint32_t)ftell(stream);
}

////////////////////////////////////////////////////////////
bool LcfReader::Ungetch(uint8_t ch) {
	return (ungetc(ch, stream) == ch);
}

////////////////////////////////////////////////////////////
#ifdef _DEBUG
	void LcfReader::SkipDebug(const struct LcfReader::Chunk& chunk_info, const char* srcfile) {
#else
	void LcfReader::Skip(const struct LcfReader::Chunk& chunk_info) {
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
		fprintf(stderr, "%02X ", LcfReader::Read8());
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
void LcfReader::SetError(const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);

	char str[256];
	vsprintf(str, fmt, args);

	error_str = str;
	//Output::ErrorStr((std::string)str);

	va_end(args);
}

////////////////////////////////////////////////////////////
const std::string& LcfReader::GetError() {
	return error_str;
}

////////////////////////////////////////////////////////////
std::string LcfReader::Encode(const std::string& str_to_encode) {
#ifdef _WIN32
	return ReaderUtil::Recode(str_to_encode, encoding, "65001");
#else
	return ReaderUtil::Recode(str_to_encode, encoding, "UTF-8");
#endif
}

////////////////////////////////////////////////////////////
int LcfReader::IntSize(unsigned int x) {
	int result = 0;
	do {
		x >>= 7;
		result++;
	} while (x != 0);
	return result;
}

////////////////////////////////////////////////////////////
#ifdef READER_BIG_ENDIAN
void LcfReader::SwapByteOrder(uint16_t& us)
{
	us =	(us >> 8) |
			(us << 8);
}


void LcfReader::SwapByteOrder(uint32_t& ui)
{
	ui =	(ui >> 24) |
			((ui<<8) & 0x00FF0000) |
			((ui>>8) & 0x0000FF00) |
			(ui << 24);
}
#endif
