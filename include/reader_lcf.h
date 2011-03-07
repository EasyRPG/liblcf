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

#ifndef EASYRPG_READER_LCF_H
#define EASYRPG_READER_LCF_H

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <string>
#include <vector>
#include <iosfwd>
#include <cstring>
#include <cstdio>
#include <cassert>
#include "reader_types.h"
#include "reader_options.h"
#include "reader_util.h"

////////////////////////////////////////////////////////////
// Defines
////////////////////////////////////////////////////////////
#ifdef _DEBUG
	#define Skip(x) SkipDebug(x, __FILE__)
#endif

////////////////////////////////////////////////////////////
/// LcfReader class.
////////////////////////////////////////////////////////////
class LcfReader {
public:
	////////////////////////////////////////////////////////
	/// Constructs a new File Reader.
	/// @param filename : File to open.
	////////////////////////////////////////////////////////
	LcfReader(const char* filename, std::string encoding = "");

	////////////////////////////////////////////////////////
	/// Constructs a new File Reader.
	/// @param filename : File to open.
	////////////////////////////////////////////////////////
	LcfReader(const std::string& filename, std::string encoding = "");

	////////////////////////////////////////////////////////
	/// Destructor. Closes the opened file.
	////////////////////////////////////////////////////////
	~LcfReader();

	////////////////////////////////////////////////////////
	/// Closes the opened file.
	////////////////////////////////////////////////////////
	void Close();

	////////////////////////////////////////////////////////
	/// Returns the last set error.
	/// @return Error Message
	////////////////////////////////////////////////////////
	static const std::string& GetError();

	////////////////////////////////////////////////////////
	/// Sets the error message of the Reader. This is not
	/// used by the Reader directly but by the classes that
	/// are using the Reader.
	/// @param fmt : Error message
	////////////////////////////////////////////////////////
	static void SetError(const char* fmt, ...);

	////////////////////////////////////////////////////////
	/// The chunk defines the basic layout of the binary
	/// blocks used by the RPG Maker files.
	////////////////////////////////////////////////////////
	struct Chunk {
		Chunk() {
			ID = 0;
			length = 0;
		}
		uint32_t ID;
		uint32_t length;
	};

	////////////////////////////////////////////////////////
	/// Defines the Seek start position for the Seek function
	////////////////////////////////////////////////////////
	enum SeekMode {
		FromStart,
		FromEnd,
		FromCurrent
	};

	////////////////////////////////////////////////////////
	/// Reads raw data from the stream (fread() wrapper)
	/// @param ptr : pointer to buffer
	/// @param size : size of each element
	/// @param nmemb : number of elements
	////////////////////////////////////////////////////////
	void Read(void *ptr, size_t size, size_t nmemb);

	////////////////////////////////////////////////////////
	/// Reads a primitive type
	/// @param ref : reference to store result
	////////////////////////////////////////////////////////
	template <class T>
	void Read(T& ref);

	////////////////////////////////////////////////////////
	/// Reads a vector of primitive type
	/// @param buffer : Vector to fill
	/// @param size : How many bytes to read
	////////////////////////////////////////////////////////
	template <class T>
	void Read(std::vector<T> &buffer, size_t size);

	////////////////////////////////////////////////////////
	/// Reads a compressed integer from the stream.
	/// @return The decompressed integer
	////////////////////////////////////////////////////////
	int ReadInt();

	////////////////////////////////////////////////////////
	/// Reads a string.
	/// @param size : String length
	/// @param ref : reference to store result
	/// note: The string is converted to UTF-8.
	////////////////////////////////////////////////////////
	void ReadString(std::string& ref, size_t size);

	////////////////////////////////////////////////////////
	/// Checks if the file is readable and if no error
	/// occured.
	/// @return If the stream is okay
	////////////////////////////////////////////////////////
	bool IsOk() const;

	////////////////////////////////////////////////////////
	/// Checks if the end of the file has beenreached.
	/// @return If the end of file is reached
	////////////////////////////////////////////////////////
	bool Eof() const;

	////////////////////////////////////////////////////////
	/// Moves the read pointer to a different position in
	/// the stream.
	/// @param pos : New position
	/// @param mode : Seek Mode
	////////////////////////////////////////////////////////
	void Seek(size_t pos, SeekMode mode = FromStart);

	////////////////////////////////////////////////////////
	/// Returns the current position of the read pointer in
	/// the stream.
	/// @return Current location in the stream
	////////////////////////////////////////////////////////
	uint32_t Tell();

	////////////////////////////////////////////////////////
	/// Puts a character (ch) back into the stream. This
	/// should usually be the last read one.
	/// @param ch : Char that will be readded to the stream
	/// @return If the operation was successful
	////////////////////////////////////////////////////////
	bool Ungetch(uint8_t ch);

#ifdef _DEBUG
	////////////////////////////////////////////////////////
	/// The Skip-Function for debug builds.
	/// Same as Skip but also dumps the content of the
	/// skipped chunk to stderr.
	/// @param chunk_info : Chunk that will be skipped
	/// @param srclife : Name of the calling cpp-file
	////////////////////////////////////////////////////////
	void SkipDebug(const struct LcfReader::Chunk& chunk_info, const char* srcfile);
#else
	////////////////////////////////////////////////////////
	/// Skips a Chunk (Seeks chunk_info.length bytes from
	/// the current stream position).
	/// @param chunk_info : Chunk that will be skipped
	////////////////////////////////////////////////////////
	void Skip(const struct LcfReader::Chunk& chunk_info);
#endif

	////////////////////////////////////////////////////////
	/// Encodes a string to Utf8 using the set encoding
	/// in the reader constructor.
	/// @param str_to_encode : String to encode
	/// @return Utf8 version of string
	////////////////////////////////////////////////////////
	std::string Encode(const std::string& str_to_encode);

	////////////////////////////////////////////////////////
	/// Calculates the size of a compressed integer
	/// @param x : The integer
	/// @return : The compressed size
	////////////////////////////////////////////////////////
	static int IntSize(unsigned int x);

private:
	/// Name of the file that is associated with the stream
	std::string filename;
	/// Name of the encoding
	std::string encoding;
	/// File-stream managed by this Reader
	FILE* stream;

	/// Contains the last set error
	static std::string error_str;

#ifdef READER_BIG_ENDIAN
	////////////////////////////////////////////////////////
	/// Utility function for Big Endian Systems.
	/// Convert a 16bit integer from little to big endian.
	/// @param us : Integer to convert
	////////////////////////////////////////////////////////
	static void SwapByteOrder(int16_t &us);

	////////////////////////////////////////////////////////
	/// Utility function for Big Endian Systems.
	/// Convert a 32bit integer from little to big endian.
	/// @param us : Integer to convert
	////////////////////////////////////////////////////////
	static void SwapByteOrder(uint32_t &ui);
#endif
};

#endif
