/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
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
#include <cassert>
#include <iterator>
#include <ostream>
#include <algorithm>

namespace lcf {

constexpr size_t ConstexprStrlen(const char* s) {
	size_t n = 0;
	while (s[n] != '\0') { ++n; }
	return n;
}

// An implementation of C++17 std::string_view, with some minor differences.
template <typename CharT,
		 typename TraitsT = std::char_traits<CharT>>
class BasicStringView {
	public:
		using value_type = CharT;
		using char_type = value_type; // <- FIXME: HACK to workaround bug in older versions of fmtlib for Player: https://github.com/fmtlib/fmt/issues/1539
		using traits_type = TraitsT;

		using iterator = const value_type*;
		using reverse_iterator = std::reverse_iterator<iterator>;
		using size_type = size_t;

		static constexpr size_type npos = size_type(-1);

		constexpr BasicStringView() = default;

		constexpr BasicStringView(const value_type* s, size_type len) : _begin(s), _end(s + len) {}
		constexpr BasicStringView(const value_type* s) : BasicStringView(s, ConstexprStrlen(s)) {}

		BasicStringView(const std::basic_string<CharT,TraitsT>& s) : BasicStringView(s.c_str(), s.size()) {}
		explicit operator std::basic_string<CharT,TraitsT>() { return { data(), size() }; }

		iterator begin() const { return _begin; }
		iterator end() const { return _end; }

		reverse_iterator rbegin() const { return reverse_iterator(end()); }
		reverse_iterator rend() const { return reverse_iterator(begin()); }

		value_type operator[](size_type i) const {
			assert(i >= 0);
			assert(i < size());
			return _begin[i];
		}

		value_type front() const { return (*this)[0]; }
		value_type back() const { return (*this)[size()-1]; }
		const value_type* data() const { return _begin; }

		size_t size() const { return _end - _begin; }
		size_t length() const { return size(); }
		bool empty() const { return _end == _begin; }

		void remove_prefix(size_type n) {
			assert(size() >= n);
			_begin += n;
		}

		void remove_suffix(size_type n) {
			assert(size() >= n);
			_end -= + n;
		}

		inline BasicStringView substr(size_t pos = 0, size_t count = BasicStringView::npos) {
			assert(pos <= size());
			count = std::min(count, size() - pos);
			return BasicStringView(data() + pos, count);
		}

		size_type find(value_type c, size_type pos = 0) const noexcept {
			for (;pos < size(); ++pos) {
				if ((*this)[pos] == c) {
					return pos;
				}
			}
			return npos;
		}

		int compare(BasicStringView v) const {
			const auto lsz = size();
			const auto rsz = v.size();
			auto result = TraitsT::compare(data(), v.data(), std::min(lsz, rsz));
			return result != 0 ? result : v.size() - size();
		}

	private:
		const value_type* _begin = nullptr;
		const value_type* _end = nullptr;
};

using StringView = BasicStringView<char>;
using WStringView = BasicStringView<wchar_t>;
using U16StringView = BasicStringView<char16_t>;
using U32StringView = BasicStringView<char32_t>;

// This should be used over the conversion operator, so we can track all sv -> str instances
template <typename C, typename T>
inline std::basic_string<C,T> ToString(BasicStringView<C,T> s) {
	return std::basic_string<C,T>(s);
}

// Make sure converting string to string is an error. To catch bugs.
template <typename C, typename T, typename A>
void ToString(const std::basic_string<C,T,A>&) = delete;

template <typename C, typename T>
inline bool operator==(const BasicStringView<C,T>& l, const BasicStringView<C,T>& r) {
	return l.compare(r) == 0;
}

template <typename C, typename T>
inline bool operator!=(const BasicStringView<C,T>& l, const BasicStringView<C,T>& r) {
	return l.compare(r) != 0;
}

template <typename C, typename T>
inline bool operator<(const BasicStringView<C,T>& l, const BasicStringView<C,T>& r) {
	return l.compare(r) < 0;
}

template <typename C, typename T>
inline bool operator>(const BasicStringView<C,T>& l, const BasicStringView<C,T>& r) {
	return l.compare(r) > 0;
}

template <typename C, typename T>
inline bool operator<=(const BasicStringView<C,T>& l, const BasicStringView<C,T>& r) {
	return l.compare(r) <= 0;
}

template <typename C, typename T>
inline bool operator>=(const BasicStringView<C,T>& l, const BasicStringView<C,T>& r) {
	return l.compare(r) >= 0;
}

template <typename C, typename T>
inline bool operator==(const BasicStringView<C,T>& l, const C* r) {
	return l == BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator==(const C* l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) == r;
}

template <typename C, typename T>
inline bool operator!=(const BasicStringView<C,T>& l, const C* r) {
	return l != BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator!=(const C* l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) != r;
}

template <typename C, typename T>
inline bool operator<(const BasicStringView<C,T>& l, const C* r) {
	return l < BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator<(const C* l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) < r;
}

template <typename C, typename T>
inline bool operator>(const BasicStringView<C,T>& l, const C* r) {
	return l > BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator>(const C* l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) > r;
}

template <typename C, typename T>
inline bool operator<=(const BasicStringView<C,T>& l, const C* r) {
	return l <= BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator<=(const C* l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) <= r;
}

template <typename C, typename T>
inline bool operator>=(const BasicStringView<C,T>& l, const C* r) {
	return l >= BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator>=(const C* l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) >= r;
}

template <typename C, typename T>
inline bool operator==(const BasicStringView<C,T>& l, const std::basic_string<C,T>& r) {
	return l == BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator==(const std::basic_string<C,T>& l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) == r;
}

template <typename C, typename T>
inline bool operator!=(const BasicStringView<C,T>& l, const std::basic_string<C,T>& r) {
	return l != BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator!=(const std::basic_string<C,T>& l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) != r;
}

template <typename C, typename T>
inline bool operator<(const BasicStringView<C,T>& l, const std::basic_string<C,T>& r) {
	return l < BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator<(const std::basic_string<C,T>& l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) < r;
}

template <typename C, typename T>
inline bool operator>(const BasicStringView<C,T>& l, const std::basic_string<C,T>& r) {
	return l > BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator>(const std::basic_string<C,T>& l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) > r;
}

template <typename C, typename T>
inline bool operator<=(const BasicStringView<C,T>& l, const std::basic_string<C,T>& r) {
	return l <= BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator<=(const std::basic_string<C,T>& l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) <= r;
}

template <typename C, typename T>
inline bool operator>=(const BasicStringView<C,T>& l, const std::basic_string<C,T>& r) {
	return l >= BasicStringView<C,T>(r);
}

template <typename C, typename T>
inline bool operator>=(const std::basic_string<C,T>& l, const BasicStringView<C,T>& r) {
	return BasicStringView<C,T>(l) >= r;
}

template <typename C, typename T>
inline std::ostream& operator<<(std::ostream& os, const BasicStringView<C,T>& s) {
	if (!s.empty()) {
		os.write(s.data(), s.size());
	}
	return os;
}

inline StringView Substr(StringView s, size_t pos = 0, size_t count = StringView::npos) {
	return s.substr(pos, count);
}

inline bool StartsWith(StringView str, StringView prefix) {
	return Substr(str, 0, prefix.size()) == prefix;
}

inline bool StartsWith(StringView str, char prefix) {
	return !str.empty() && str.front() == prefix;
}

inline bool StartsWith(StringView str, const char* prefix) {
	return StartsWith(str, StringView(prefix));
}

inline bool EndsWith(StringView str, StringView suffix) {
	return str.size() >= suffix.size() && Substr(str, str.size() - suffix.size()) == suffix;
}

inline bool EndsWith(StringView str, char suffix) {
	return !str.empty() && str.back() == suffix;
}

inline bool EndsWith(StringView str, const char* suffix) {
	return StartsWith(str, StringView(suffix));
}

static int SvAtoi(StringView str) {
	const char* b = str.data();
	const char* e = str.data() + str.length();
	auto value = std::strtol(b, const_cast<char**>(&e), 10);
	return e > b ? value : 0;
}

#ifndef _MSC_VER
template <typename C, typename T>
constexpr typename BasicStringView<C,T>::size_type npos;
#endif

} // namespace lcf

namespace std {

template <typename C, typename T>
struct hash<lcf::BasicStringView<C,T>> {
	size_t operator()(const lcf::BasicStringView<C,T>& s) const {
		// computes the hash using a variant of the Fowler-Noll-Vo hash function
		// Taken from example in: https://en.cppreference.com/w/cpp/utility/hash/operator()
		size_t result = 2166136261;

		for (auto& c: s) {
			result = (result * 16777619) ^ c;
		}

		return result;
	}
};

} // namespace std

#endif
