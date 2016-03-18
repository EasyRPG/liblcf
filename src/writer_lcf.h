/*
 * Copyright (c) 2016 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_WRITER_LCF_H
#define LCF_WRITER_LCF_H

#include <string>
#include <vector>
#include <iosfwd>
#include <cstring>
#include <cstdio>
#include <cassert>
#include "reader_types.h"
#include "reader_options.h"
#include "reader_util.h"

/**
 * LcfWriter class.
 */
class LcfWriter {

public:
	/**
	 * Constructs a new File Writer.
	 *
	 * @param filename file to open.
	 * @param encoding name of the encoding.
	 */
	LcfWriter(const char* filename, std::string encoding = "");

	/**
	 * Constructs a new File Writer.
	 *
	 * @param filename file to open.
	 * @param encoding name of the encoding.
	 */
	LcfWriter(const std::string& filename, std::string encoding = "");

	/**
	 * Destructor. Closes the opened file.
	 */
	~LcfWriter();

	/**
	 * Closes the opened file.
	 */
	void Close();

	/**
	 * Writes raw data to the stream (fwrite() wrapper).
	 *
	 * @param ptr pointer to buffer.
	 * @param size size of each element.
	 * @param nmemb number of elements.
	 */
	void Write(const void *ptr, size_t size, size_t nmemb);

	/**
	 * Write a primitive value to the stream.
	 *
	 * @param val the value.
	 */
	template <class T>
	void Write(T val);

	/**
	 * Writes a string to the stream.
	 *
	 * @param str the string.
	 *        Note: the string is converted to the native encoding.
	 */
	void Write(const std::string& str);

	/**
	 * Writes a compressed integer to the stream.
	 *
	 * @param val the integer.
	 */
	void WriteInt(int val);

	/**
	 * Write a vector of primitive values to the stream.
	 *
	 * @param buffer vector to write.
	 */
	template <class T>
	void Write(const std::vector<T>& buffer);

	/**
	 * Checks if the file is writable and if no error occurred.
	 *
	 * @return true the stream is okay.
	 */
	bool IsOk() const;

	/**
	 * Decodes a string from Utf8 to the set encoding
	 * in the Writer constructor.
	 *
	 * @param str_to_encode UTF-8 string to encode.
	 * @return native version of string.
	 */
	std::string Decode(const std::string& str_to_encode);

private:
	/** Name of the file that is associated with the stream. */
	std::string filename;
	/** Name of the encoding. */
	std::string encoding;
	/** File-stream managed by this Writer. */
	FILE* stream;

	/**
	 * Converts a 16bit signed integer to/from little-endian.
	 *
	 * @param us integer to convert.
	 */
	static void SwapByteOrder(int16_t &us);

	/**
	 * Converts a 16bit unsigned integer to/from little-endian.
	 *
	 * @param us integer to convert.
	 */
	static void SwapByteOrder(uint16_t &us);

	/**
	 * Converts a 32bit unsigned integer to/from little-endian.
	 *
	 * @param ui integer to convert.
	 */
	static void SwapByteOrder(uint32_t &ui);

	/**
	 * Converts a double to/from little-endian.
	 *
	 * @param d double to convert.
	 */
	static void SwapByteOrder(double &d);

};

#endif
