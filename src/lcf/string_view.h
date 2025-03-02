/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_STRING_VIEW_H
#define LCF_STRING_VIEW_H

#include <cstring>
#include <string>

namespace lcf {

inline std::string ToString(std::string_view sv) {
	return std::string(sv);
}

constexpr bool StartsWith(std::string_view l, std::string_view r) noexcept {
	return l.size() >= r.size() && l.compare(0, r.size(), r) == 0;
}

constexpr bool StartsWith(std::string_view l, char c) noexcept {
	return StartsWith(l, std::string_view(&c, 1));
}

constexpr bool StartsWith(std::string_view l, const char* s) {
	return StartsWith(l, std::string_view(s));
}

constexpr bool EndsWith(std::string_view l, std::string_view r) noexcept {
	return l.size() >= r.size() && l.compare(l.size() - r.size(), std::string_view::npos, r) == 0;
}

constexpr bool EndsWith(std::string_view l, char c) noexcept {
	return EndsWith(l, std::string_view(&c, 1));
}

constexpr bool EndsWith(std::string_view l, const char* s) {
	return EndsWith(l, std::string_view(s));
}

/** A reimplementation of std::atoi() which works for std::string_view */
inline int SvAtoi(std::string_view str) {
	const char* b = str.data();
	const char* e = str.data() + str.length();
	auto value = std::strtol(b, const_cast<char**>(&e), 10);
	return e > b ? value : 0;
}

} // namespace lcf

#endif
