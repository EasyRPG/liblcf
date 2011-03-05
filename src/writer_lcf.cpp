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
#include "writer_lcf.h"

////////////////////////////////////////////////////////////
LcfWriter::LcfWriter(const char* filename, std::string encoding) :
	filename(filename),
	encoding(encoding),
	stream(fopen(filename, "wb"))
{
}

////////////////////////////////////////////////////////////
LcfWriter::LcfWriter(const std::string& filename, std::string encoding) :
	filename(filename),
	encoding(encoding),
	stream(fopen(filename.c_str(), "wb"))
{
}

////////////////////////////////////////////////////////////
LcfWriter::~LcfWriter() {
	Close();
}

////////////////////////////////////////////////////////////
void LcfWriter::Close() {
	if (stream != NULL)
		fclose(stream);
	stream = NULL;
}

////////////////////////////////////////////////////////////
void LcfWriter::Write(const void *ptr, size_t size, size_t nmemb) {
#ifndef NDEBUG
	assert(fwrite(ptr, size, nmemb, stream) == nmemb);
#else
	fwrite(ptr, size, nmemb, stream);
#endif
}

////////////////////////////////////////////////////////////
void LcfWriter::WriteBool(bool val) {
	Write8(val ? 1 : 0);
}

////////////////////////////////////////////////////////////
void LcfWriter::Write8(uint8_t val) {
	Write(&val, 1, 1);
}

////////////////////////////////////////////////////////////
void LcfWriter::Write16(int16_t val) {
#ifdef READER_BIG_ENDIAN
	uint16_t val2 = (uint16_t)val;
	SwapByteOrder(val2);
	val = val2;
#endif
	Write(&val, 2, 1);
}

////////////////////////////////////////////////////////////
void LcfWriter::Write32(int32_t val) {
#ifdef READER_BIG_ENDIAN
	uint32_t val2 = (uint32_t)val;
	SwapByteOrder(val2);
	val = val2;
#endif
	Write(&val, 4, 1);
}

////////////////////////////////////////////////////////////
void LcfWriter::WriteInt(int32_t val) {
	uint32_t value = (uint32_t) val;
	for (int i = 28; i >= 0; i -= 7)
		if (value >= (1U << i) || i == 0)
			Write8((uint8_t)(((value >> i) & 0x7F) | (i > 0 ? 0x80 : 0)));
}

////////////////////////////////////////////////////////////
void LcfWriter::WriteDouble(double val) {
#ifdef READER_BIG_ENDIAN
#warning "Need 64-bit Double byte swap"
#endif
	Write(&val, 8, 1);
}

////////////////////////////////////////////////////////////
void LcfWriter::WriteBool(const std::vector<bool>& buffer) {
	std::vector<bool>::const_iterator it;
	for (it = buffer.begin(); it != buffer.end(); it++) {
		uint8_t val = *it ? 1 : 0;
		Write8(val);
	}
}

////////////////////////////////////////////////////////////
void LcfWriter::Write8(const std::vector<uint8_t>& buffer) {
	Write(&buffer.front(), 1, buffer.size());
}

////////////////////////////////////////////////////////////
void LcfWriter::Write16(const std::vector<int16_t>& buffer) {
#ifdef READER_BIG_ENDIAN
	std::vector<int16_t>::const_iterator it;
	for (it = buffer.begin(); it != buffer.end(); it++)
		Write16(*it);
#else
	Write(&buffer.front(), 2, buffer.size());
#endif
}

////////////////////////////////////////////////////////////
void LcfWriter::Write32(const std::vector<uint32_t>& buffer) {
#ifdef READER_BIG_ENDIAN
	std::vector<uint32_t>::const_iterator it;
	for (it = buffer.begin(); it != buffer.end(); it++)
		Write32((uint32_t)*it);
#else
	Write(&buffer.front(), 4, buffer.size());
#endif
}

////////////////////////////////////////////////////////////
void LcfWriter::WriteString(const std::string& _str) {
	std::string str = Decode(_str);
	Write(&*str.begin(), 1, str.size());
}

////////////////////////////////////////////////////////////
bool LcfWriter::IsOk() const {
	return (stream != NULL && !ferror(stream));
}

////////////////////////////////////////////////////////////
std::string LcfWriter::Decode(const std::string& str_to_encode) {
#ifdef _WIN32
	return ReaderUtil::Recode(str_to_encode, "65001", encoding);
#else
	return ReaderUtil::Recode(str_to_encode, "UTF-8", encoding);
#endif
}

////////////////////////////////////////////////////////////
#ifdef READER_BIG_ENDIAN
void LcfWriter::SwapByteOrder(uint16_t& us)
{
	us =	(us >> 8) |
			(us << 8);
}


void LcfWriter::SwapByteOrder(uint32_t& ui)
{
	ui =	(ui >> 24) |
			((ui<<8) & 0x00FF0000) |
			((ui>>8) & 0x0000FF00) |
			(ui << 24);
}
#endif
