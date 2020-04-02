/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_ENUM_SET_H
#define LCF_ENUM_SET_H

#include <bitset>
#include <vector>
#include "enum.h"

template <typename E>
class EnumSet {
	public:
		LCF_REQUIRE_ENUM_TRAITS(E);

		static constexpr size_t num_bits = Enum<E>::GetNumValues();
		using underlying = std::bitset<num_bits>;
		using reference = typename underlying::reference;

		constexpr EnumSet() = default;
		EnumSet(std::initializer_list<E> ilist);

		constexpr bool operator[](E tag) const { return _bits[size_t(tag)]; }
		reference operator[](E tag) { return _bits[size_t(tag)]; }

		size_t count() const { return _bits.count(); }
		size_t size() const { return _bits.size(); }

		EnumSet& operator&=(const EnumSet& o) { _bits &= o._bits; return *this; }
		EnumSet& operator|=(const EnumSet& o) { _bits |= o._bits; return *this; }
		EnumSet& operator^=(const EnumSet& o) { _bits ^= o._bits; return *this; }

		template <typename EE>
		friend bool operator==(const EnumSet<EE>& l, const EnumSet<EE>& r);

		friend struct std::hash<EnumSet<E>>;
	private:
		underlying _bits = {};
};

template <typename E>
inline bool operator==(const EnumSet<E>& l, const EnumSet<E>& r) {
	return l._bits == r._bits;
}

template <typename E>
inline bool operator!=(const EnumSet<E>& l, const EnumSet<E>& r) {
	return !(l == r);
}

template <typename E>
inline EnumSet<E> operator&(const EnumSet<E>& l, const EnumSet<E>& r) {
	auto copy = l;
	copy &= r;
	return copy;
}

template <typename E>
inline EnumSet<E> operator|(const EnumSet<E>& l, const EnumSet<E>& r) {
	auto copy = l;
	copy |= r;
	return copy;
}

template <typename E>
inline EnumSet<E> operator^(const EnumSet<E>& l, const EnumSet<E>& r) {
	auto copy = l;
	copy ^= r;
	return copy;
}

template <typename E>
inline EnumSet<E>::EnumSet(std::initializer_list<E> ilist) {
	for (auto&& tag: ilist) {
		_bits.set(tag);
	}
}

namespace std {
template <typename E>
	struct hash<EnumSet<E>> {
		size_t operator()(const EnumSet<E>& fs) {
			return hash<typename EnumSet<E>::underlying>()(fs._bits);
		}
	};
}



#endif
