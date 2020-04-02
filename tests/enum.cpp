/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "enum.h"
#include "doctest.h"

namespace {
enum class Raw { Zero, One, Two };
enum class Mono { One = 1, Two, Three };
enum class MonoZero { Zero, One, Two };
enum class NotMono { One = 1, Three = 3, };
}

LCF_DEFINE_ENUM_TRAITS(Mono, true, One, Three);
LCF_DEFINE_ENUM_TRAITS(MonoZero, true, Zero, Two);
LCF_DEFINE_ENUM_TRAITS(NotMono, false, One, Three);

static_assert(!Enum<Raw>::HasEnumTraits(), "EnumTraits Broken");
static_assert(Enum<Mono>::HasEnumTraits(), "EnumTraits Broken");
static_assert(Enum<MonoZero>::HasEnumTraits(), "EnumTraits Broken");
static_assert(Enum<NotMono>::HasEnumTraits(), "EnumTraits Broken");

static_assert(Enum<Mono>::IsMonotonic(), "EnumTraits Broken");
static_assert(Enum<MonoZero>::IsMonotonic(), "EnumTraits Broken");
static_assert(!Enum<NotMono>::IsMonotonic(), "EnumTraits Broken");

static_assert(!Enum<Mono>::IsMonotonicFromZero(), "EnumTraits Broken");
static_assert(Enum<MonoZero>::IsMonotonicFromZero(), "EnumTraits Broken");
static_assert(!Enum<NotMono>::IsMonotonicFromZero(), "EnumTraits Broken");

static_assert(Enum<Mono>::GetMinValue() == Mono::One, "EnumTraits Broken");
static_assert(Enum<MonoZero>::GetMinValue() == MonoZero::Zero, "EnumTraits Broken");
static_assert(Enum<NotMono>::GetMinValue() == NotMono::One, "EnumTraits Broken");

static_assert(Enum<Mono>::GetMaxValue() == Mono::Three, "EnumTraits Broken");
static_assert(Enum<MonoZero>::GetMaxValue() == MonoZero::Two, "EnumTraits Broken");
static_assert(Enum<NotMono>::GetMaxValue() == NotMono::Three, "EnumTraits Broken");

static_assert(Enum<Mono>::GetMinIntValue() == 1, "EnumTraits Broken");
static_assert(Enum<MonoZero>::GetMinIntValue() == 0, "EnumTraits Broken");
static_assert(Enum<NotMono>::GetMinIntValue() == 1, "EnumTraits Broken");

static_assert(Enum<Mono>::GetMaxIntValue() == 3, "EnumTraits Broken");
static_assert(Enum<MonoZero>::GetMaxIntValue() == 2, "EnumTraits Broken");
static_assert(Enum<NotMono>::GetMaxIntValue() == 3, "EnumTraits Broken");

static_assert(Enum<Mono>::GetNumValues() == 3, "EnumTraits Broken");
static_assert(Enum<MonoZero>::GetNumValues() == 3, "EnumTraits Broken");
static_assert(Enum<NotMono>::GetNumValues() == 3, "EnumTraits Broken");

