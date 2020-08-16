/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_DBSTRING_H
#define LCF_DBSTRING_H
#include <utility>
#include <string>
#include <iterator>
#include <cstdint>
#include <cstring>
#include <limits>
#include <algorithm>
#include <ostream>

#include "lcf/string_view.h"


namespace lcf {

// A read-only string class optimized for database storage.
class DBString {
	public:
		using value_type = char;
		using char_type = value_type; // <- FIXME: HACK to workaround bug in older versions of fmtlib for Player: https://github.com/fmtlib/fmt/issues/1539
		using traits_type = std::char_traits<char>;

		using iterator = const char*;
		using reverse_iterator = std::reverse_iterator<iterator>;
		using size_type = uint32_t;

		static constexpr size_type npos = size_type(-1);

		constexpr DBString() = default;
		explicit DBString(const std::string& s) : DBString(s.c_str(), s.size()) {}
		explicit DBString(StringView s) : DBString(s.data(), s.size()) {}

		// Explicit construct for general const char*
		explicit DBString(const char* s) : DBString(s, std::strlen(s)) {}
		// Implicit constructor to capture string literals
		template <size_t N>
			DBString(const char(&literal)[N]) : DBString(StringView(literal)) {}
		DBString(const char* s, size_t len);

		DBString(const DBString&);
		DBString& operator=(const DBString&);
		DBString(DBString&&) noexcept;
		DBString& operator=(DBString&&) noexcept;

		~DBString() { _reset(); }

		explicit operator std::string() const { return std::string(data(), size()); }
		operator StringView() const { return StringView(data(), size()); }

		char operator[](size_type i) const { return data()[i]; }
		char front() const { return (*this)[0]; }
		char back() const { return (*this)[size()-1]; }
		const char* data() const;
		const char* c_str() const { return data(); }

		iterator begin() const { return data(); }
		iterator end() const { return data() + size(); }

		reverse_iterator rbegin() const { return reverse_iterator(end()); }
		reverse_iterator rend() const { return reverse_iterator(begin()); }

		bool empty() const { return size() == 0; }
		size_type size() const;
	private:
		void _reset() noexcept;
	private:
		char* _storage = nullptr;
};

// This should be used over the conversion operator, so we can track all dbstr -> str instances
inline std::string ToString(const DBString& s) {
	return std::string(s);
}

#define LCF_DBSTRING_MAKE_CMP_OPS(LTYPE, RTYPE) \
inline bool operator==(LTYPE l, RTYPE r) { return StringView(l) == StringView(r); }\
inline bool operator!=(LTYPE l, RTYPE r) { return StringView(l) != StringView(r); }\
inline bool operator<(LTYPE l, RTYPE r) { return StringView(l) < StringView(r); }\
inline bool operator>(LTYPE l, RTYPE r) { return StringView(l) > StringView(r); }\
inline bool operator<=(LTYPE l, RTYPE r) { return StringView(l) <= StringView(r); }\
inline bool operator>=(LTYPE l, RTYPE r) { return StringView(l) >= StringView(r); }\

LCF_DBSTRING_MAKE_CMP_OPS(const DBString&, const DBString&);
LCF_DBSTRING_MAKE_CMP_OPS(StringView, const DBString&);
LCF_DBSTRING_MAKE_CMP_OPS(const DBString&, StringView);
LCF_DBSTRING_MAKE_CMP_OPS(const char*, const DBString&);
LCF_DBSTRING_MAKE_CMP_OPS(const DBString&, const char*);

inline std::ostream& operator<<(std::ostream& os, const DBString& s) {
	os << StringView(s);
	return os;
}

} // namespace lcf

namespace std {

template <> struct hash<lcf::DBString> {
	size_t operator()(const lcf::DBString& s) const {
		return std::hash<lcf::StringView>()(lcf::StringView(s));
	}
};

} // namespace std

namespace lcf {

inline DBString::DBString(DBString&& o) noexcept
	: _storage(o._storage)
{
	o._storage = nullptr;
}

inline DBString& DBString::operator=(DBString&& o) noexcept {
	if (this != &o) {
		if (_storage) {
			_reset();
		}
		_storage = o._storage;
		o._storage = nullptr;
	}
	return *this;
}

inline const char* DBString::data() const {
	return _storage ? _storage + sizeof(size_type) : nullptr;
}

inline DBString::size_type DBString::size() const {
	return _storage ? *reinterpret_cast<const size_type*>(_storage) : 0;
}

} // namespace lcf

#endif
