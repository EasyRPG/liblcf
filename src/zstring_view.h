/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_ZSTRING_VIEW_H
#define LCF_ZSTRING_VIEW_H

#include <cstring>
#include <ostream>

class ZStringView {
	public:
		constexpr ZStringView() = default;
		constexpr ZStringView(const char* s) : _c_str(s) {}

		size_t size() const { return std::strlen(c_str()); }
		constexpr bool empty() const { return c_str()[0] == '\0'; }
		constexpr const char* data() const { return _c_str; }
		constexpr const char* c_str() const { return _c_str; }
	private:
		const char* _c_str = "";
};

inline bool operator==(ZStringView l, ZStringView r) {
	return std::strcmp(l.c_str(), r.c_str()) == 0;
}

inline bool operator!=(ZStringView l, ZStringView r) {
	return !(l == r);
}

inline bool operator<(ZStringView l, ZStringView r) {
	return std::strcmp(l.c_str(), r.c_str()) < 0;
}

inline bool operator<=(ZStringView l, ZStringView r) {
	return std::strcmp(l.c_str(), r.c_str()) <= 0;
}

inline bool operator>(ZStringView l, ZStringView r) {
	return !(l <= r);
}

inline bool operator>=(ZStringView l, ZStringView r) {
	return !(l < r);
}

inline std::ostream& operator<<(std::ostream& os, ZStringView zs) {
	os << zs.c_str();
	return os;
}

#endif
