/*
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include <cstdarg>
#include <cstdio>
#include <istream>

#include "reader_lcf.h"

// Statics

std::string LcfReader::error_str;

LcfReader::LcfReader(std::istream& filestream, std::string encoding) :
	encoding(encoding),
	stream(filestream)
{
}

LcfReader::~LcfReader() {
}

size_t LcfReader::Read0(void *ptr, size_t size, size_t nmemb) {
	if (size == 0) { //avoid division by 0
		return 0;
	}
	//Read nmemb elements of size and return the number of read elements
	stream.read(reinterpret_cast<char*>(ptr), size*nmemb);
	size_t result = stream.gcount() / size;
#ifdef NDEBUG
	if (result != nmemb && !Eof()) {
		perror("Reading error: ");
	}
#endif
	return result;
}

void LcfReader::Read(void *ptr, size_t size, size_t nmemb) {
#ifdef NDEBUG
	Read0(ptr, size, nmemb);
#else
	if (Read0(ptr, size, nmemb) != nmemb) {
		fprintf(stderr, "Read error at %d. The file is probably corrupted\n", Tell());
	}
#endif
}

template <>
void LcfReader::Read<bool>(bool& ref) {
	ref = ReadInt() > 0;
}

template <>
void LcfReader::Read<int8_t>(int8_t& ref) {
	Read(&ref, 1, 1);
}

template <>
void LcfReader::Read<uint8_t>(uint8_t& ref) {
	Read(&ref, 1, 1);
}

template <>
void LcfReader::Read<int16_t>(int16_t& ref) {
	Read(&ref, 2, 1);
	SwapByteOrder(ref);
}

template <>
void LcfReader::Read<uint32_t>(uint32_t& ref) {
	Read(&ref, 4, 1);
	SwapByteOrder(ref);
}

int LcfReader::ReadInt() {
	int value = 0;
	unsigned char temp = 0;
	int loops = 0;
	do {
		value <<= 7;
		if (Read0(&temp, 1, 1) == 0) {
			assert(value == 0);
			return 0;
		}
		value |= temp & 0x7F;

		if (loops > 5) {
			fprintf(stderr, "Invalid compressed integer at %d\n", Tell());
		}
		++loops;
	} while (temp & 0x80);

	return loops > 5 ? 0 : value;
}

template <>
void LcfReader::Read<int32_t>(int32_t& ref) {
	ref = ReadInt();
}

template <>
void LcfReader::Read<double>(double& ref) {
	Read(&ref, 8, 1);
	SwapByteOrder(ref);
}

template <>
void LcfReader::Read<bool>(std::vector<bool> &buffer, size_t size) {
	buffer.clear();

	for (unsigned i = 0; i < size; ++i) {
		uint8_t val;
		Read(&val, 1, 1);
		buffer.push_back(val > 0);
	}
}

template <>
void LcfReader::Read<uint8_t>(std::vector<uint8_t> &buffer, size_t size) {
	buffer.clear();

	for (unsigned int i = 0; i < size; ++i) {
		uint8_t val;
		Read(&val, 1, 1);
		buffer.push_back(val);
	}
}

template <>
void LcfReader::Read<int16_t>(std::vector<int16_t> &buffer, size_t size) {
	buffer.clear();
	size_t items = size / 2;
	for (unsigned int i = 0; i < items; ++i) {
		int16_t val;
		Read(&val, 2, 1);
		SwapByteOrder(val);
		buffer.push_back(val);
	}
	if (size % 2 != 0) {
		Seek(1, FromCurrent);
		buffer.push_back(0);
	}
}

template <>
void LcfReader::Read<int32_t>(std::vector<int32_t> &buffer, size_t size) {
	buffer.clear();
	size_t items = size / 4;
	for (unsigned int i = 0; i < items; ++i) {
		int32_t val;
		Read(&val, 4, 1);
		SwapByteOrder(val);
		buffer.push_back(val);
	}
	if (size % 4 != 0) {
		Seek(size % 4, FromCurrent);
		buffer.push_back(0);
	}
}

template <>
void LcfReader::Read<uint32_t>(std::vector<uint32_t> &buffer, size_t size) {
	buffer.clear();
	size_t items = size / 4;
	for (unsigned int i = 0; i < items; ++i) {
		uint32_t val;
		Read(&val, 4, 1);
		SwapByteOrder(val);
		buffer.push_back(val);
	}
	if (size % 4 != 0) {
		Seek(size % 4, FromCurrent);
		buffer.push_back(0);
	}
}

void LcfReader::ReadString(std::string& ref, size_t size) {
	char* chars = new char[size];
	Read(chars, 1, size);
	ref = Encode(std::string(chars, size));
	delete[] chars;
}

bool LcfReader::IsOk() const {
	return (stream.good());
}

bool LcfReader::Eof() const {
	return stream.eof();
}

void LcfReader::Seek(size_t pos, SeekMode mode) {
	switch (mode) {
	case LcfReader::FromStart:
		stream.seekg(pos, std::ios_base::beg);
		break;
	case LcfReader::FromCurrent:
		stream.seekg(pos, std::ios_base::cur);
		break;
	case LcfReader::FromEnd:
		stream.seekg(pos, std::ios_base::end);
		break;
	default:
		assert(false && "Invalid SeekMode");
	}
}

uint32_t LcfReader::Tell() {
	return (uint32_t)stream.tellg();
}

int LcfReader::Peek() {
	return stream.peek();
}

#ifdef _DEBUG
void LcfReader::SkipDebug(const struct LcfReader::Chunk& chunk_info, const char* srcfile) {
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
	fprintf(stderr, "Skipped Chunk %02X (%d byte) in lcf at %X (%s)\n",
			chunk_info.ID, chunk_info.length,  Tell(),
			srcfilename);
	for (uint32_t i = 0; i < chunk_info.length; ++i) {
		uint8_t byte;
		LcfReader::Read(byte);
		fprintf(stderr, "%02X ", byte);
		if ((i+1) % 16 == 0) {
			fprintf(stderr, "\n");
		}
		if (Eof()) {
			break;
		}
	}
	fprintf(stderr, "\n");
}
#else
void LcfReader::Skip(const struct LcfReader::Chunk& chunk_info) {
	Seek((size_t)chunk_info.length, FromCurrent);
}
#endif

void LcfReader::SetError(const char* fmt, ...) {
	va_list args;
	va_start(args, fmt);

	char str[256];
	vsprintf(str, fmt, args);

	error_str = str;
	//Output::ErrorStr((std::string)str);

	va_end(args);
}

const std::string& LcfReader::GetError() {
	return error_str;
}

std::string LcfReader::Encode(const std::string& str_to_encode) {
	return ReaderUtil::Recode(str_to_encode, encoding, "UTF-8");
}

int LcfReader::IntSize(unsigned int x) {
	int result = 0;
	do {
		x >>= 7;
		result++;
	} while (x != 0);
	return result;
}

#ifdef WORDS_BIGENDIAN
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

void LcfReader::SwapByteOrder(double& d)
{
	uint32_t *p = reinterpret_cast<uint32_t *>(&d);
	SwapByteOrder(p[0]);
	SwapByteOrder(p[1]);
	uint32_t tmp = p[0];
	p[0] = p[1];
	p[1] = tmp;
}
#else
void LcfReader::SwapByteOrder(uint16_t& /* us */) {}
void LcfReader::SwapByteOrder(uint32_t& /* ui */) {}
void LcfReader::SwapByteOrder(double& /* d */) {}
#endif

void LcfReader::SwapByteOrder(int16_t& s)
{
	SwapByteOrder((uint16_t&) s);
}

void LcfReader::SwapByteOrder(int32_t& s)
{
	SwapByteOrder((uint32_t&) s);
}
