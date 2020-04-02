/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_ENUM_H
#define LCF_ENUM_H

#include <cstddef>
#include <type_traits>

/** 
 * This trait class should be specialized for every
 * enum type to add support for our enhanced enum classes
 *
 * You must specify these static constexpr member variables:
 *
 * bool is_monotonic - set to true if the enum values count upward without any gaps
 * E min_value - the minimum enum value
 * E max_value - the maximum enum value
 */
template <typename E>
struct EnumTraits {
	/* static constexpr bool is_monotonic; */
	/* static constexpr E min_value */
	/* static constexpr E max_value */
};

#define LCF_DEFINE_ENUM_TRAITS(TYPE, ISMONOTONIC, MINVALUE, MAXVALUE) \
	template <> \
	struct EnumTraits<TYPE> { \
		static constexpr bool is_monotonic = (ISMONOTONIC); \
		static constexpr TYPE min_value = TYPE::MINVALUE; \
		static constexpr TYPE max_value = TYPE::MAXVALUE; \
	};

#define LCF_REQUIRE_ENUM_TRAITS(TYPE) \
		   static_assert(::Enum<TYPE>::HasEnumTraits(), "EnumTraits must be defined!");
#define LCF_REQUIRE_ENUM_IS_MONOTONIC(TYPE) \
		   static_assert(::Enum<TYPE>::IsMonotonic(), "Enum must be monotonic!");

/** Helper template to detect at compile if enum traits are defined */
template <typename E>
struct HasEnumTraitsT {
private:
	static std::false_type test(...);
	template <typename F,
			 bool = EnumTraits<F>::is_monotonic,
			 F = EnumTraits<F>::min_value,
			 F = EnumTraits<F>::max_value>
				 static std::true_type test(F&&);
public:
	/** true if EnumTraits<E> is correctly defined */
	static constexpr bool value = decltype(test(std::declval<E>()))::value;
};

template <typename E>
struct Enum {
	/** Return true if EnumTraits are properly defined for this type */
	static constexpr bool HasEnumTraits() { return HasEnumTraitsT<E>::value; }
	/** Return true if the enum values are monotonic */
	static constexpr bool IsMonotonic() { return EnumTraits<E>::is_monotonic; }
	/** Return true if the enum values are monotonic and the first value is 0 */
	static constexpr bool IsMonotonicFromZero() { return IsMonotonic() && static_cast<int>(GetMinValue()) == 0; }
	/** Return the smallest enum value */
	static constexpr E GetMinValue() { return EnumTraits<E>::min_value; }
	/** Return the largest enum value */
	static constexpr E GetMaxValue() { return EnumTraits<E>::max_value; }
	/** Return the smallest enum value as an integral type */
	static constexpr std::underlying_type_t<E> GetMinIntValue() {
		return static_cast<std::underlying_type_t<E>>(GetMinValue());
	}
	/** Return the largest enum value as an integral type */
	static constexpr std::underlying_type_t<E> GetMaxIntValue() {
		return static_cast<std::underlying_type_t<E>>(GetMaxValue());
	}
	/** Return the number of enum values. This includes gaps for non-monotonic enum values */
	static constexpr size_t GetNumValues() {
		return static_cast<size_t>(GetMaxIntValue()) - static_cast<size_t>(GetMinIntValue()) + 1;
	}
};

#endif

