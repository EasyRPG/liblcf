/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_READER_UTIL_H
#define LCF_READER_UTIL_H

#include <string>

/**
 * ReaderUtil namespace.
 */
namespace ReaderUtil {
	/**
	 * Returns the iconv name of a windows codepage.
	 *
	 * @param codepage codepage to lookup.
	 * @return name used by iconv or NULL if not found.
	 */
	std::string CodepageToIconv(int codepage);
	
	/**
	 * Returns the encoding set in the ini file.
	 * 
	 * @param ini_file The ini file to parse.
	 *
	 * @return Windows: codepage, other: iconv name,
	 *         empty string if not found.
	 */
	std::string GetEncoding(const std::string& ini_file);

	/**
	 * Converts a string to unicode.
	 *
	 * @param str_to_encode string to encode
	 *
	 * @return the recoded string.
	 */
	std::string Recode(const std::string& str_to_encode);

	/**
	 * Converts a string to unicode from specified encoding.
	 *
	 * @param str_to_encode string to encode
	 * @param source_encoding Encoding of str_to_encode
	 *
	 * @return the recoded string.
	 */
	std::string Recode(const std::string& str_to_encode, const std::string& source_encoding);

	/**
	 * Converts a string between encodings.
	 *
	 * @param str_to_encode the string to convert.
	 * @param src_enc the source encoding.
	 * @param dst_enc the destination encoding.
	 * @return the recoded string.
	 */
	std::string Recode(const std::string& str_to_encode,
					   const std::string& src_enc,
					   const std::string& dst_enc);
}

#endif
