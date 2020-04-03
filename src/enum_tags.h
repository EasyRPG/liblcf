/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
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

#include "enum_table.h"
#include "zstring_view.h"

template <typename E>
using EnumTagsMonotonic = EnumTableMonotonic<E,ZStringView>;

template <typename E, size_t N>
using EnumTagsGeneric = EnumTableGeneric<E,ZStringView,N>;

template <typename E>
constexpr auto makeEnumTags(std::array<ZStringView,Enum<E>::GetNumValues()> values) {
	static_assert(Enum<E>::IsMonotonic(), "Enum is not monotonic, use makeEnumTable(enums, values)!");
	return EnumTagsMonotonic<E>(std::move(values));
}

template <typename E, size_t N>
constexpr auto makeEnumTags(std::array<E,N> enums, std::array<ZStringView,N> values) {
	static_assert(!Enum<E>::IsMonotonic(), "Enum is not monotonic, use makeEnumTable(enums, values)!");
	return EnumTagsGeneric<E,N>(std::move(enums), std::move(values));
}

/** This get specialized to become the global tags representation for an enum */
template <typename E>
struct EnumTagsInstance {
	/** static constexpr tags = ... */
};

#define LCF_DEFINE_ENUM_TAGS(TYPE, EXPR) \
	template <> \
	struct EnumTagsInstance<TYPE> { \
		static constexpr const auto GetTags() { return EXPR; }\
	}


template <typename E>
struct EnumTags {
	using int_type = std::make_signed_t<std::underlying_type_t<E>>;

	constexpr static auto GetTable() { return EnumTagsInstance<E>::GetTags(); }

	constexpr static size_t GetSize() { return GetTable().size(); }

	constexpr static int_type IdxFromEnum(E etag) { return GetTable().IdxFromEnum(etag); }
	constexpr static E EnumFromIdx(int_type idx) { return GetTable().EnumFromIdx(idx); }

	constexpr static int_type IdxFromTag(ZStringView tag) { return GetTable().IdxFromValue(tag); }
	constexpr static ZStringView TagFromIdx(int_type idx) { return GetTable().ValueFromIdx(idx); }

	constexpr static auto GetEnums() { return GetTable().GetEnums(); }
	constexpr static auto GetTags() { return GetTable().GetValues(); }

	constexpr static ZStringView TagFromEnum(E etag) { return GetTable().ValueFromEnum(etag); }

	constexpr static bool EnumFromTag(ZStringView tag, E& result) { return GetTable().EnumFromValue(tag, result); }
	constexpr static E EnumFromTagOr(ZStringView tag, E other) { return GetTable().EnumFromValueOr(tag, other); }
};

#endif
