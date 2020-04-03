/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "enum.h"
#include "enum_table.h"
#include "doctest.h"

namespace {
enum class Mono { One = 1, Two, Three };
enum class MonoZero { Zero, One, Two, Three };
enum class Generic { One = 1, Three = 3 };
}

LCF_DEFINE_ENUM_TRAITS(Mono, true, One, Three);
LCF_DEFINE_ENUM_TRAITS(MonoZero, true, Zero, Three);
LCF_DEFINE_ENUM_TRAITS(Generic, false, One, Three);

template class EnumTableImpl<Mono,std::string, 2, true>;
template class EnumTableImpl<MonoZero,std::string, 4, true>;
template class EnumTableImpl<Generic,std::string, 2, false>;

TEST_SUITE_BEGIN("enum_table");

TEST_CASE("Monotonic") {
	auto table = makeEnumTable<Mono, std::string>( {{"One", "Two", "Three" }} );

	REQUIRE_EQ(table.size(), 3);
	REQUIRE_EQ(table.GetEnums().size(), 3);
	REQUIRE_EQ(table.GetValues().size(), 3);

	REQUIRE_EQ(table.GetEnums()[0], Mono::One);
	REQUIRE_EQ(table.GetEnums()[1], Mono::Two);
	REQUIRE_EQ(table.GetEnums()[2], Mono::Three);

	REQUIRE_EQ(table.IdxFromEnum(Mono::One), 0);
	REQUIRE_EQ(table.IdxFromEnum(Mono::Two), 1);
	REQUIRE_EQ(table.IdxFromEnum(Mono::Three), 2);

	REQUIRE_EQ(table.EnumFromIdx(0), Mono::One);
	REQUIRE_EQ(table.EnumFromIdx(1), Mono::Two);
	REQUIRE_EQ(table.EnumFromIdx(2), Mono::Three);

	REQUIRE_EQ(table.GetValues()[0], "One");
	REQUIRE_EQ(table.GetValues()[1], "Two");
	REQUIRE_EQ(table.GetValues()[2], "Three");

	REQUIRE_EQ(table.IdxFromValue("One"), 0);
	REQUIRE_EQ(table.IdxFromValue("Two"), 1);
	REQUIRE_EQ(table.IdxFromValue("Three"), 2);

	REQUIRE_EQ(table.ValueFromIdx(0), "One");
	REQUIRE_EQ(table.ValueFromIdx(1), "Two");
	REQUIRE_EQ(table.ValueFromIdx(2), "Three");

	REQUIRE_EQ(table.ValueFromEnum(Mono::One), "One");
	REQUIRE_EQ(table.ValueFromEnum(Mono::Two), "Two");
	REQUIRE_EQ(table.ValueFromEnum(Mono::Three), "Three");

	REQUIRE_EQ(table[Mono::One], "One");
	REQUIRE_EQ(table[Mono::Two], "Two");
	REQUIRE_EQ(table[Mono::Three], "Three");

	REQUIRE_EQ(table.EnumFromValueOr("One", Mono::Two), Mono::One);
	REQUIRE_EQ(table.EnumFromValueOr("Two", Mono::Three), Mono::Two);
	REQUIRE_EQ(table.EnumFromValueOr("Three", Mono::One), Mono::Three);

	REQUIRE_EQ(table.EnumFromValueOr("??", Mono::One), Mono::One);
	REQUIRE_EQ(table.EnumFromValueOr("??", Mono::Two), Mono::Two);
	REQUIRE_EQ(table.EnumFromValueOr("??", Mono::Three), Mono::Three);

	Mono e;
	REQUIRE(table.EnumFromValue("One", e));
	REQUIRE_EQ(e, Mono::One);
	REQUIRE(table.EnumFromValue("Two", e));
	REQUIRE_EQ(e, Mono::Two);
	REQUIRE(table.EnumFromValue("Three", e));
	REQUIRE_EQ(e, Mono::Three);
	REQUIRE(!table.EnumFromValue("???", e));
	REQUIRE_EQ(e, Mono::Three);
}

TEST_CASE("MonotonicZero") {
	auto table = makeEnumTable<MonoZero, std::string>( {{"Zero", "One", "Two", "Three" }} );

	REQUIRE_EQ(table.size(), 4);
	REQUIRE_EQ(table.GetEnums().size(), 4);
	REQUIRE_EQ(table.GetValues().size(), 4);

	REQUIRE_EQ(table.GetEnums()[0], MonoZero::Zero);
	REQUIRE_EQ(table.GetEnums()[1], MonoZero::One);
	REQUIRE_EQ(table.GetEnums()[2], MonoZero::Two);
	REQUIRE_EQ(table.GetEnums()[3], MonoZero::Three);

	REQUIRE_EQ(table.IdxFromEnum(MonoZero::Zero), 0);
	REQUIRE_EQ(table.IdxFromEnum(MonoZero::One), 1);
	REQUIRE_EQ(table.IdxFromEnum(MonoZero::Two), 2);
	REQUIRE_EQ(table.IdxFromEnum(MonoZero::Three), 3);

	REQUIRE_EQ(table.EnumFromIdx(0), MonoZero::Zero);
	REQUIRE_EQ(table.EnumFromIdx(1), MonoZero::One);
	REQUIRE_EQ(table.EnumFromIdx(2), MonoZero::Two);
	REQUIRE_EQ(table.EnumFromIdx(3), MonoZero::Three);

	REQUIRE_EQ(table.GetValues()[0], "Zero");
	REQUIRE_EQ(table.GetValues()[1], "One");
	REQUIRE_EQ(table.GetValues()[2], "Two");
	REQUIRE_EQ(table.GetValues()[3], "Three");

	REQUIRE_EQ(table.IdxFromValue("Zero"), 0);
	REQUIRE_EQ(table.IdxFromValue("One"), 1);
	REQUIRE_EQ(table.IdxFromValue("Two"), 2);
	REQUIRE_EQ(table.IdxFromValue("Three"), 3);

	REQUIRE_EQ(table.ValueFromIdx(0), "Zero");
	REQUIRE_EQ(table.ValueFromIdx(1), "One");
	REQUIRE_EQ(table.ValueFromIdx(2), "Two");
	REQUIRE_EQ(table.ValueFromIdx(3), "Three");

	REQUIRE_EQ(table.ValueFromEnum(MonoZero::Zero), "Zero");
	REQUIRE_EQ(table.ValueFromEnum(MonoZero::One), "One");
	REQUIRE_EQ(table.ValueFromEnum(MonoZero::Two), "Two");
	REQUIRE_EQ(table.ValueFromEnum(MonoZero::Three), "Three");

	REQUIRE_EQ(table[MonoZero::Zero], "Zero");
	REQUIRE_EQ(table[MonoZero::One], "One");
	REQUIRE_EQ(table[MonoZero::Two], "Two");
	REQUIRE_EQ(table[MonoZero::Three], "Three");

	REQUIRE_EQ(table.EnumFromValueOr("Zero", MonoZero::One), MonoZero::Zero);
	REQUIRE_EQ(table.EnumFromValueOr("One", MonoZero::Two), MonoZero::One);
	REQUIRE_EQ(table.EnumFromValueOr("Two", MonoZero::Three), MonoZero::Two);
	REQUIRE_EQ(table.EnumFromValueOr("Three", MonoZero::Zero), MonoZero::Three);

	REQUIRE_EQ(table.EnumFromValueOr("??", MonoZero::Zero), MonoZero::Zero);
	REQUIRE_EQ(table.EnumFromValueOr("??", MonoZero::One), MonoZero::One);
	REQUIRE_EQ(table.EnumFromValueOr("??", MonoZero::Two), MonoZero::Two);
	REQUIRE_EQ(table.EnumFromValueOr("??", MonoZero::Three), MonoZero::Three);

	MonoZero e;
	REQUIRE(table.EnumFromValue("Zero", e));
	REQUIRE_EQ(e, MonoZero::Zero);
	REQUIRE(table.EnumFromValue("One", e));
	REQUIRE_EQ(e, MonoZero::One);
	REQUIRE(table.EnumFromValue("Two", e));
	REQUIRE_EQ(e, MonoZero::Two);
	REQUIRE(table.EnumFromValue("Three", e));
	REQUIRE_EQ(e, MonoZero::Three);
	REQUIRE(!table.EnumFromValue("???", e));
	REQUIRE_EQ(e, MonoZero::Three);
}

TEST_CASE("Generic") {
	auto table = makeEnumTable<Generic, std::string, 2>( {{ Generic::One, Generic::Three }}, {{"One", "Three" }} );

	REQUIRE_EQ(table.size(), 2);
	REQUIRE_EQ(table.GetEnums().size(), 2);
	REQUIRE_EQ(table.GetValues().size(), 2);

	REQUIRE_EQ(table.GetEnums()[0], Generic::One);
	REQUIRE_EQ(table.GetEnums()[1], Generic::Three);

	REQUIRE_EQ(table.IdxFromEnum(Generic::One), 0);
	REQUIRE_EQ(table.IdxFromEnum(Generic::Three), 1);

	REQUIRE_EQ(table.EnumFromIdx(0), Generic::One);
	REQUIRE_EQ(table.EnumFromIdx(1), Generic::Three);

	REQUIRE_EQ(table.GetValues()[0], "One");
	REQUIRE_EQ(table.GetValues()[1], "Three");

	REQUIRE_EQ(table.IdxFromValue("One"), 0);
	REQUIRE_EQ(table.IdxFromValue("Three"), 1);

	REQUIRE_EQ(table.ValueFromIdx(0), "One");
	REQUIRE_EQ(table.ValueFromIdx(1), "Three");

	REQUIRE_EQ(table.ValueFromEnum(Generic::One), "One");
	REQUIRE_EQ(table.ValueFromEnum(Generic::Three), "Three");

	REQUIRE_EQ(table[Generic::One], "One");
	REQUIRE_EQ(table[Generic::Three], "Three");

	REQUIRE_EQ(table.EnumFromValueOr("One", Generic::Three), Generic::One);
	REQUIRE_EQ(table.EnumFromValueOr("Three", Generic::One), Generic::Three);

	REQUIRE_EQ(table.EnumFromValueOr("??", Generic::One), Generic::One);
	REQUIRE_EQ(table.EnumFromValueOr("??", Generic::Three), Generic::Three);

	Generic e;
	REQUIRE(table.EnumFromValue("One", e));
	REQUIRE_EQ(e, Generic::One);
	REQUIRE(table.EnumFromValue("Three", e));
	REQUIRE_EQ(e, Generic::Three);
	REQUIRE(!table.EnumFromValue("???", e));
	REQUIRE_EQ(e, Generic::Three);
}

TEST_SUITE_END();
