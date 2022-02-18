/*
 * This file is part of liblcf. Copyright (c) 2021 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_ENUM_TAGS_H
#define LCF_ENUM_TAGS_H

#include <type_traits>
#include <iterator>
#include <cstddef>
#include <array>
#include <cstring>

namespace lcf {

template <typename E, size_t N>
class EnumTags {
	public:
		static constexpr size_t num_tags = N;
		using int_type = typename std::make_unsigned<typename std::underlying_type<E>::type>::type;
		using iterator = char const * const *;
		using reverse_iterator = std::reverse_iterator<iterator>;

        template <size_t... LN>
		explicit constexpr EnumTags(const char (&...literals)[LN]) : _tags{{literals...}} {}

		constexpr const char* tag(E etag) const { return tag(int_type(etag)); }
		constexpr const char* tag(int_type idx) const { return _tags[idx]; }

		constexpr const char* operator[](E etag) const { return tag(etag); }
		constexpr const char* operator[](int_type idx) const { return tag(idx); }

		bool etag(const char* tag, E& result) const;
		E etagOr(const char* tag, E other) const;
		int_type idx(const char* tag) const;

		const std::array<const char*, num_tags>& tags() const { return _tags; }

		constexpr iterator begin() const { return iterator(_tags.data()); }
		constexpr iterator end() const { return iterator(_tags.data() + size()); }

		constexpr iterator cbegin() const { return begin(); }
		constexpr iterator cend() const { return end(); }

		reverse_iterator rbegin() const { return reverse_iterator(end()); }
		reverse_iterator rend() const { return reverse_iterator(begin()); }

		static constexpr size_t size() { return num_tags; }

	private:
		const std::array<const char*, num_tags> _tags;
};

template <typename E, size_t... N>
constexpr EnumTags<E,sizeof...(N)> makeEnumTags(const char (&...literals)[N]) {
	return EnumTags<E,sizeof...(N)>(literals...);
}

template <typename E, size_t N>
inline typename EnumTags<E, N>::int_type EnumTags<E, N>::idx(const char* tag) const {
	for (size_t i = 0; i < _tags.size(); ++i) {
		if (std::strcmp(_tags[i], tag) == 0) {
			return i;
		}
	}
	return -1;
}

template <typename E, size_t N>
inline bool EnumTags<E, N>::etag(const char* tag, E& result) const {
	auto i = idx(tag);
	if (i < 0) {
		return false;
	}
	result = E(i);
	return true;
}

template <typename E, size_t N>
inline E EnumTags<E, N>::etagOr(const char* tag, E other) const {
	auto i = idx(tag);
	return (i >= 0) ? E(i) : other;
}

} //namespace lcf

#endif
