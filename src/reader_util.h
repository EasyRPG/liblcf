/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_READER_UTIL_H
#define LCF_READER_UTIL_H

#include <string>
#include <vector>

/**
 * ReaderUtil namespace.
 */
namespace ReaderUtil {
	/**
	 * Returns the encoding name of a windows numeric codepage.
	 *
	 * @param codepage codepage to lookup.
	 * @return name used by the converter or empty string if not found.
	 */
	std::string CodepageToEncoding(int codepage);

	/**
	 * Detects the encoding based on text analysis.
	 *
	 * @param filestream stream containing the database file
	 *
	 * @return encoding or empty string if not detected.
	 */
	std::string DetectEncoding(std::istream& filestream);

	/**
	 * Detects the encoding based on text analysis.
	 *
	 * @param filestream stream containing the database file
	 *
	 * @return encoding or empty string if not detected.
	 */
	std::string DetectEncoding(const std::string& data);

	/**
	 * Detects the encoding based on text analysis and returns a vector with
	 * possible candidates, highest candidate being at the beginning.
	 *
	 * @param filestream stream containing the database file
	 *
	 * @return list of encodings or empty if not detected
	 */
	std::vector<std::string> DetectEncodings(std::istream& filestream);

	/**
	 * Detects the encoding based on text analysis and returns a vector with
	 * possible candidates, highest candidate being at the beginning.
	 *
	 * @param string encoded data of a few hundred bytes
	 *
	 * @return list of encodings or empty if not detected
	 */
	std::vector<std::string> DetectEncodings(const std::string& data);

	/**
	 * Returns the encoding set in the ini file.
	 *
	 * @param ini_file The ini file to parse.
	 *
	 * @return encoding or empty string if not found.
	 */
	std::string GetEncoding(const std::string& ini_file);

	/**
	 * Returns the encoding set in the ini file.
	 *
	 * @param filestream The ini file to parse.
	 *
	 * @return encoding or empty string if not found.
	 */
	std::string GetEncoding(std::istream& filestream);

	/**
	 * Returns the system encoding based on current locale settings.
	 *
	 * @return system encoding or western if no locale found.
	 */
	std::string GetLocaleEncoding();

	/**
	 * Converts a string to unicode.
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

	/**
	 * Converts a UTF-8 string to lowercase and then decomposes it.
	 * 
	 * @param str the string to normalize.
	 * @return the normalized string.
	 */
	std::string Normalize(const std::string &str);


	/**
	 * Helper function that returns an element from a vector using a 1-based
	 * index as usually used by LCF data structures.
	 *
	 * @param vec Vector to return element from
	 * @param one_based_index index to access vector at "index - 1"
	 * @return element or nullptr when "index - 1" is out of bounds
	 */
	template<typename T>
	T* GetElement(std::vector<T>& vec, int one_based_index) {
		if (one_based_index < 1) {
			return nullptr;
		}

		// index is nonnegative, safe to cast
		if (static_cast<typename std::vector<T>::size_type>(one_based_index) > vec.size()) {
			return nullptr;
		}

		return &vec[one_based_index - 1];
	}

	/**
	 * Helper function that returns an element from a vector using a 1-based
	 * index as usually used by LCF data structures.
	 *
	 * @param vec Vector to return element from
	 * @param one_based_index index to access vector at "index - 1"
	 * @return element or nullptr when "index - 1" is out of bounds
	 */
	template<typename T>
	const T* GetElement(const std::vector<T>& vec, int one_based_index) {
		if (one_based_index < 1) {
			return nullptr;
		}

		// index is nonnegative, safe to cast
		if (static_cast<typename std::vector<T>::size_type>(one_based_index) > vec.size()) {
			return nullptr;
		}

		return &vec[one_based_index - 1];
	}
}

#endif
