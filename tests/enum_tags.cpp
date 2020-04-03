/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "enum.h"
#include "enum_tags.h"
#include "doctest.h"

namespace {
enum class Mono { One = 1, Two, Three };
enum class MonoZero { Zero, One, Two, Three };
enum class Generic { One = 1, Three = 3 };
}

LCF_DEFINE_ENUM_TRAITS(Mono, true, One, Three);
LCF_DEFINE_ENUM_TRAITS(MonoZero, true, Zero, Three);
LCF_DEFINE_ENUM_TRAITS(Generic, false, One, Three);

LCF_DEFINE_ENUM_TAGS(Mono, makeEnumTags<Mono>({{"One", "Two", "Three"}}));
LCF_DEFINE_ENUM_TAGS(MonoZero, makeEnumTags<MonoZero>({{"Zero", "One", "Two", "Three"}}));
LCF_DEFINE_ENUM_TAGS(Generic, (makeEnumTags<Generic, 2>({{Generic::One, Generic::Three}}, {{"One", "Three"}})));

static_assert(EnumTags<Mono>::GetSize() == 3, "EnumTags Broken");

static_assert(EnumTags<Mono>::IdxFromEnum(Mono::One) == 0, "EnumTags Broken");
static_assert(EnumTags<Mono>::IdxFromEnum(Mono::Two) == 1, "EnumTags Broken");
static_assert(EnumTags<Mono>::IdxFromEnum(Mono::Three) == 2, "EnumTags Broken");

static_assert(EnumTags<Mono>::EnumFromIdx(0) == Mono::One, "EnumTags Broken");
static_assert(EnumTags<Mono>::EnumFromIdx(1) == Mono::Two, "EnumTags Broken");
static_assert(EnumTags<Mono>::EnumFromIdx(2) == Mono::Three, "EnumTags Broken");

static_assert(EnumTags<MonoZero>::IdxFromEnum(MonoZero::Zero) == 0, "EnumTags Broken");
static_assert(EnumTags<MonoZero>::IdxFromEnum(MonoZero::One) == 1, "EnumTags Broken");
static_assert(EnumTags<MonoZero>::IdxFromEnum(MonoZero::Two) == 2, "EnumTags Broken");
static_assert(EnumTags<MonoZero>::IdxFromEnum(MonoZero::Three) == 3, "EnumTags Broken");

static_assert(EnumTags<MonoZero>::EnumFromIdx(0) == MonoZero::Zero, "EnumTags Broken");
static_assert(EnumTags<MonoZero>::EnumFromIdx(1) == MonoZero::One, "EnumTags Broken");
static_assert(EnumTags<MonoZero>::EnumFromIdx(2) == MonoZero::Two, "EnumTags Broken");
static_assert(EnumTags<MonoZero>::EnumFromIdx(3) == MonoZero::Three, "EnumTags Broken");

TEST_SUITE_BEGIN("enum_tags");

TEST_CASE("Monotonic") {
	using ET = EnumTags<Mono>;

	REQUIRE_EQ(ET::GetSize(), 3);
	REQUIRE_EQ(ET::GetEnums().size(), 3);
	REQUIRE_EQ(ET::GetTags().size(), 3);

	REQUIRE_EQ(ET::GetEnums()[0], Mono::One);
	REQUIRE_EQ(ET::GetEnums()[1], Mono::Two);
	REQUIRE_EQ(ET::GetEnums()[2], Mono::Three);

	REQUIRE_EQ(ET::IdxFromEnum(Mono::One), 0);
	REQUIRE_EQ(ET::IdxFromEnum(Mono::Two), 1);
	REQUIRE_EQ(ET::IdxFromEnum(Mono::Three), 2);

	REQUIRE_EQ(ET::EnumFromIdx(0), Mono::One);
	REQUIRE_EQ(ET::EnumFromIdx(1), Mono::Two);
	REQUIRE_EQ(ET::EnumFromIdx(2), Mono::Three);

	REQUIRE_EQ(ET::GetTags()[0], "One");
	REQUIRE_EQ(ET::GetTags()[1], "Two");
	REQUIRE_EQ(ET::GetTags()[2], "Three");

	REQUIRE_EQ(ET::IdxFromTag("One"), 0);
	REQUIRE_EQ(ET::IdxFromTag("Two"), 1);
	REQUIRE_EQ(ET::IdxFromTag("Three"), 2);

	REQUIRE_EQ(ET::TagFromIdx(0), "One");
	REQUIRE_EQ(ET::TagFromIdx(1), "Two");
	REQUIRE_EQ(ET::TagFromIdx(2), "Three");

	REQUIRE_EQ(ET::TagFromEnum(Mono::One), "One");
	REQUIRE_EQ(ET::TagFromEnum(Mono::Two), "Two");
	REQUIRE_EQ(ET::TagFromEnum(Mono::Three), "Three");

	REQUIRE_EQ(ET::EnumFromTagOr("One", Mono::Two), Mono::One);
	REQUIRE_EQ(ET::EnumFromTagOr("Two", Mono::Three), Mono::Two);
	REQUIRE_EQ(ET::EnumFromTagOr("Three", Mono::One), Mono::Three);

	REQUIRE_EQ(ET::EnumFromTagOr("??", Mono::One), Mono::One);
	REQUIRE_EQ(ET::EnumFromTagOr("??", Mono::Two), Mono::Two);
	REQUIRE_EQ(ET::EnumFromTagOr("??", Mono::Three), Mono::Three);

	Mono e;
	REQUIRE(ET::EnumFromTag("One", e));
	REQUIRE_EQ(e, Mono::One);
	REQUIRE(ET::EnumFromTag("Two", e));
	REQUIRE_EQ(e, Mono::Two);
	REQUIRE(ET::EnumFromTag("Three", e));
	REQUIRE_EQ(e, Mono::Three);
	REQUIRE(!ET::EnumFromTag("???", e));
	REQUIRE_EQ(e, Mono::Three);
}

TEST_CASE("MonotonicZero") {
	using ET = EnumTags<MonoZero>;

	REQUIRE_EQ(ET::GetSize(), 4);
	REQUIRE_EQ(ET::GetEnums().size(), 4);
	REQUIRE_EQ(ET::GetTags().size(), 4);

	REQUIRE_EQ(ET::GetEnums()[0], MonoZero::Zero);
	REQUIRE_EQ(ET::GetEnums()[1], MonoZero::One);
	REQUIRE_EQ(ET::GetEnums()[2], MonoZero::Two);
	REQUIRE_EQ(ET::GetEnums()[3], MonoZero::Three);

	REQUIRE_EQ(ET::IdxFromEnum(MonoZero::Zero), 0);
	REQUIRE_EQ(ET::IdxFromEnum(MonoZero::One), 1);
	REQUIRE_EQ(ET::IdxFromEnum(MonoZero::Two), 2);
	REQUIRE_EQ(ET::IdxFromEnum(MonoZero::Three), 3);

	REQUIRE_EQ(ET::EnumFromIdx(0), MonoZero::Zero);
	REQUIRE_EQ(ET::EnumFromIdx(1), MonoZero::One);
	REQUIRE_EQ(ET::EnumFromIdx(2), MonoZero::Two);
	REQUIRE_EQ(ET::EnumFromIdx(3), MonoZero::Three);

	REQUIRE_EQ(ET::GetTags()[0], "Zero");
	REQUIRE_EQ(ET::GetTags()[1], "One");
	REQUIRE_EQ(ET::GetTags()[2], "Two");
	REQUIRE_EQ(ET::GetTags()[3], "Three");

	REQUIRE_EQ(ET::IdxFromTag("Zero"), 0);
	REQUIRE_EQ(ET::IdxFromTag("One"), 1);
	REQUIRE_EQ(ET::IdxFromTag("Two"), 2);
	REQUIRE_EQ(ET::IdxFromTag("Three"), 3);

	REQUIRE_EQ(ET::TagFromIdx(0), "Zero");
	REQUIRE_EQ(ET::TagFromIdx(1), "One");
	REQUIRE_EQ(ET::TagFromIdx(2), "Two");
	REQUIRE_EQ(ET::TagFromIdx(3), "Three");

	REQUIRE_EQ(ET::TagFromEnum(MonoZero::Zero), "Zero");
	REQUIRE_EQ(ET::TagFromEnum(MonoZero::One), "One");
	REQUIRE_EQ(ET::TagFromEnum(MonoZero::Two), "Two");
	REQUIRE_EQ(ET::TagFromEnum(MonoZero::Three), "Three");

	REQUIRE_EQ(ET::EnumFromTagOr("Zero", MonoZero::One), MonoZero::Zero);
	REQUIRE_EQ(ET::EnumFromTagOr("One", MonoZero::Two), MonoZero::One);
	REQUIRE_EQ(ET::EnumFromTagOr("Two", MonoZero::Three), MonoZero::Two);
	REQUIRE_EQ(ET::EnumFromTagOr("Three", MonoZero::Zero), MonoZero::Three);

	REQUIRE_EQ(ET::EnumFromTagOr("??", MonoZero::Zero), MonoZero::Zero);
	REQUIRE_EQ(ET::EnumFromTagOr("??", MonoZero::One), MonoZero::One);
	REQUIRE_EQ(ET::EnumFromTagOr("??", MonoZero::Two), MonoZero::Two);
	REQUIRE_EQ(ET::EnumFromTagOr("??", MonoZero::Three), MonoZero::Three);

	MonoZero e;
	REQUIRE(ET::EnumFromTag("Zero", e));
	REQUIRE_EQ(e, MonoZero::Zero);
	REQUIRE(ET::EnumFromTag("One", e));
	REQUIRE_EQ(e, MonoZero::One);
	REQUIRE(ET::EnumFromTag("Two", e));
	REQUIRE_EQ(e, MonoZero::Two);
	REQUIRE(ET::EnumFromTag("Three", e));
	REQUIRE_EQ(e, MonoZero::Three);
	REQUIRE(!ET::EnumFromTag("???", e));
	REQUIRE_EQ(e, MonoZero::Three);
}

TEST_CASE("Generic") {
	using ET = EnumTags<Generic>;

	REQUIRE_EQ(ET::GetSize(), 2);
	REQUIRE_EQ(ET::GetEnums().size(), 2);
	REQUIRE_EQ(ET::GetTags().size(), 2);

	REQUIRE_EQ(ET::GetEnums()[0], Generic::One);
	REQUIRE_EQ(ET::GetEnums()[1], Generic::Three);

	REQUIRE_EQ(ET::IdxFromEnum(Generic::One), 0);
	REQUIRE_EQ(ET::IdxFromEnum(Generic::Three), 1);

	REQUIRE_EQ(ET::EnumFromIdx(0), Generic::One);
	REQUIRE_EQ(ET::EnumFromIdx(1), Generic::Three);

	REQUIRE_EQ(ET::GetTags()[0], "One");
	REQUIRE_EQ(ET::GetTags()[1], "Three");

	REQUIRE_EQ(ET::IdxFromTag("One"), 0);
	REQUIRE_EQ(ET::IdxFromTag("Three"), 1);

	REQUIRE_EQ(ET::TagFromIdx(0), "One");
	REQUIRE_EQ(ET::TagFromIdx(1), "Three");

	REQUIRE_EQ(ET::TagFromEnum(Generic::One), "One");
	REQUIRE_EQ(ET::TagFromEnum(Generic::Three), "Three");

	REQUIRE_EQ(ET::EnumFromTagOr("One", Generic::Three), Generic::One);
	REQUIRE_EQ(ET::EnumFromTagOr("Three", Generic::One), Generic::Three);

	REQUIRE_EQ(ET::EnumFromTagOr("??", Generic::One), Generic::One);
	REQUIRE_EQ(ET::EnumFromTagOr("??", Generic::Three), Generic::Three);

	Generic e;
	REQUIRE(ET::EnumFromTag("One", e));
	REQUIRE_EQ(e, Generic::One);
	REQUIRE(ET::EnumFromTag("Three", e));
	REQUIRE_EQ(e, Generic::Three);
	REQUIRE(!ET::EnumFromTag("???", e));
	REQUIRE_EQ(e, Generic::Three);
}

TEST_SUITE_END();
