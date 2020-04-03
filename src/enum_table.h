/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_ENUM_TABLE_H
#define LCF_ENUM_TABLE_H

#include <type_traits>
#include <iterator>
#include <cstddef>
#include <array>
#include <cstring>

#include "enum.h"

// std::is_sorted is not constexpr until C++20, so we add this method.
template <typename Iter>
constexpr bool StaticIsSorted(const Iter b, const Iter e) {
	auto next = b;

	while (next != e) {
		auto prev = next;
		++next;
		if (*prev > *next) {
			return false;
		}
	}
	return true;
}


template <typename E, typename V, size_t N, bool monotonic>
class EnumTableImplBase {
	public:
		using int_type = std::make_signed_t<std::underlying_type_t<E>>;
		using enum_array_type = std::array<E, N>;
		using value_array_type = std::array<V, N>;

		// FIXME: Enforce is sorted
		constexpr explicit EnumTableImplBase(enum_array_type enums, value_array_type values)
			: _enums{std::move(enums)}, _values{std::move(values)} {}

		constexpr int_type IdxFromEnum(E etag) const {
			auto iter = std::lower_bound(_enums.begin(), _enums.end(), etag);
			if (iter != _enums.end() && *iter == etag) {
				return static_cast<int_type>(std::distance(_enums.begin(), iter));
			}
			return -1;
		}

		constexpr E EnumFromIdx(int_type idx) const {
			return _enums[idx];
		}

		constexpr const enum_array_type& GetEnums() const { return _enums; }
		constexpr const value_array_type& GetValues() const { return _values; }
	private:
		const std::array<E, N> _enums;
		const std::array<V, N> _values;
};

template <typename E, typename V, size_t N>
class EnumTableImplBase<E,V,N,true> {
	public:
		using int_type = std::make_signed_t<std::underlying_type_t<E>>;
		using enum_array_type = std::array<E, N>;
		using value_array_type = std::array<V, N>;

		constexpr explicit EnumTableImplBase(value_array_type values)
			: _values{std::move(values)} {}

		constexpr int_type IdxFromEnum(E etag) const {
			return static_cast<int_type>(etag) - Enum<E>::GetMinIntValue();
		}

		constexpr E EnumFromIdx(int_type idx) const {
			return static_cast<E>(idx + Enum<E>::GetMinIntValue());
		}

		constexpr enum_array_type GetEnums() const {
			enum_array_type enums = {{}};
			auto ei = Enum<E>::GetMinIntValue();
			for (auto& ev: enums) {
				ev = static_cast<E>(ei++);
			}
			return enums;
		}

		constexpr const value_array_type& GetValues() const { return _values; }

	private:
		const std::array<V, N> _values;
};

template <typename E, typename V, size_t N, bool monotonic>
class EnumTableImpl : private EnumTableImplBase<E,V,N,monotonic> {
	public:
		LCF_REQUIRE_ENUM_TRAITS(E);

		using base_type = EnumTableImplBase<E,V,N,monotonic>;
		using enum_type = E;
		using value_type = V;
		using typename base_type::int_type;
		using typename base_type::enum_array_type;
		using typename base_type::value_array_type;

		using base_type::base_type;

		constexpr const value_type& ValueFromEnum(E etag) const { return GetValues()[this->IdxFromEnum(etag)]; }
		constexpr const value_type& operator[](E etag) const { return ValueFromEnum(etag); }

		using base_type::IdxFromEnum;
		using base_type::EnumFromIdx;

		constexpr int_type IdxFromValue(const V& value) const {
			const auto& values = GetValues();
			for (size_t i = 0; i < values.size(); ++i) {
				if (values[i] == value) {
					return i;
				}
			}
			return -1;
		}

		constexpr const V& ValueFromIdx(int_type idx) const { return GetValues()[idx]; }

		constexpr bool EnumFromValue(const V& value, E& result) const {
			auto idx = IdxFromValue(value);
			if (idx < 0) {
				return false;
			}
			result = EnumFromIdx(idx);
			return true;
		}

		constexpr E EnumFromValueOr(const V& value, E other) const {
			auto idx = IdxFromValue(value);
			return (idx >= 0) ? EnumFromIdx(idx) : other;
		}

		using base_type::GetEnums;
		using base_type::GetValues;

		constexpr size_t size() { return GetValues().size(); }
};

template <typename E, typename V>
using EnumTableMonotonic = EnumTableImpl<E,V,Enum<E>::GetNumValues(),true>;

template <typename E, typename V, size_t N>
using EnumTableGeneric = EnumTableImpl<E,V,N,false>;

template <typename E, typename V>
constexpr auto makeEnumTable(std::array<V,Enum<E>::GetNumValues()> values) {
	static_assert(Enum<E>::IsMonotonic(), "Enum is not monotonic, use makeEnumTable(enums, values)!");
	return EnumTableMonotonic<E,V>(std::move(values));
}

template <typename E, typename V, size_t N>
constexpr auto makeEnumTable(std::array<E,N> enums, std::array<V,N> values) {
	static_assert(!Enum<E>::IsMonotonic(), "Enum is not monotonic, use makeEnumTable(enums, values)!");
	return EnumTableGeneric<E,V,N>(std::move(enums), std::move(values));
}


#endif
