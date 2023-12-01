/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "doctest.h"
#include "lcf/enum_tags.h"
#include <cstdint>

using namespace lcf;

enum Color {
	Color_Red,
	Color_Green,
	Color_Blue,
	Color_Yellow
};

static constexpr auto kColorTags = lcf::EnumTags{
	Color_Red, "Red",
	Color_Green, "Green",
	Color_Blue, "Blue",
	Color_Yellow, "Yellow"
};

static constexpr auto kColorTags2 = lcf::makeEnumTags<Color>(
	"Red",
	"Green",
	"Blue",
	"Yellow"
);

enum class Name {
	Aina = 2,
	Brian = 4,
	Carol = -1,
};

static constexpr auto kNameTags = lcf::EnumTags{
	Name::Aina, "Aina",
	Name::Brian, "Brian",
	Name::Carol, "Carol"
};

TEST_SUITE_BEGIN("enum_tags");

TEST_CASE("size") {
	REQUIRE_EQ(kColorTags.size(), 4);
	REQUIRE_EQ(kNameTags.size(), 3);
}

TEST_CASE("monotonic from zero") {
	REQUIRE(kColorTags.is_monotonic_from_zero());
	REQUIRE(kColorTags2.is_monotonic_from_zero());
	REQUIRE(!kNameTags.is_monotonic_from_zero());
}

TEST_CASE("tag int") {
	REQUIRE_EQ(kColorTags.tag(0), "Red");
	REQUIRE_EQ(kColorTags.tag(3), "Yellow");

	REQUIRE_EQ(kColorTags.tag(4), nullptr);

	REQUIRE_EQ(kNameTags.tag(2), "Aina");
	REQUIRE_EQ(kNameTags.tag(4), "Brian");
	REQUIRE_EQ(kNameTags.tag(-1), "Carol");

	REQUIRE_EQ(kNameTags.tag(0), nullptr);
	REQUIRE_EQ(kNameTags.tag(-3), nullptr);

	REQUIRE_EQ(kColorTags[0], "Red");
	REQUIRE_EQ(kColorTags[4], nullptr);

	REQUIRE_EQ(kNameTags[2], "Aina");
	REQUIRE_EQ(kNameTags[-1], "Carol");
	REQUIRE_EQ(kNameTags[0], nullptr);
}

TEST_CASE("tag enum") {
	REQUIRE_EQ(kColorTags.tag(Color_Red), "Red");
	REQUIRE_EQ(kColorTags.tag(Color_Yellow), "Yellow");

	REQUIRE_EQ(kNameTags.tag(Name::Aina), "Aina");
	REQUIRE_EQ(kNameTags.tag(Name::Brian), "Brian");

	REQUIRE_EQ(kColorTags[Color_Red], "Red");
	REQUIRE_EQ(kColorTags[Color_Yellow], "Yellow");

	REQUIRE_EQ(kNameTags[Name::Aina], "Aina");
	REQUIRE_EQ(kNameTags[Name::Brian], "Brian");
}

TEST_CASE("etag") {
	Color result;

	REQUIRE(kColorTags.etag("Blue", result));
	REQUIRE_EQ(result, Color_Blue);

	REQUIRE(!kColorTags.etag("NotInEnum", result));

	Name nresult;

	REQUIRE(kNameTags.etag("Carol", nresult));
	REQUIRE_EQ(nresult, Name::Carol);

	REQUIRE(!kNameTags.etag("NotInEnum", nresult));
}

TEST_CASE("etagOr") {
	REQUIRE_EQ(kColorTags.etagOr("Blue", Color_Yellow), Color_Blue);
	REQUIRE_EQ(kColorTags.etagOr("NotInEnum", Color_Yellow), Color_Yellow);
}

TEST_CASE("has_etag") {
	REQUIRE(kColorTags.has_etag("Blue"));
	REQUIRE(!kColorTags.has_etag("NotInEnum"));

	REQUIRE(kNameTags.has_etag("Aina"));
	REQUIRE(kNameTags.has_etag("Carol"));
	REQUIRE(!kNameTags.has_etag("NotInEnum"));
}

TEST_CASE("iterator") {
	for (auto it = kNameTags.begin(); it != kNameTags.end(); ++it) {
		REQUIRE(kNameTags.has_etag(it->name));
	}

	for (auto it = kNameTags.cbegin(); it != kNameTags.cend(); ++it) {
		REQUIRE(kNameTags.has_etag(it->name));
	}

	for (auto it = kNameTags.rbegin(); it != kNameTags.rend(); ++it) {
		REQUIRE(kNameTags.has_etag(it->name));
	}
}

// API Test for the Key Enum in Player. Exceeds int8_t
enum Overflow : uint8_t {
	Val_0,
	Val_1,
	Val_2,
	Val_3,
	Val_4,
	Val_5,
	Val_6,
	Val_7,
	Val_8,
	Val_9,
	Val_10,
	Val_11,
	Val_12,
	Val_13,
	Val_14,
	Val_15,
	Val_16,
	Val_17,
	Val_18,
	Val_19,
	Val_20,
	Val_21,
	Val_22,
	Val_23,
	Val_24,
	Val_25,
	Val_26,
	Val_27,
	Val_28,
	Val_29,
	Val_30,
	Val_31,
	Val_32,
	Val_33,
	Val_34,
	Val_35,
	Val_36,
	Val_37,
	Val_38,
	Val_39,
	Val_40,
	Val_41,
	Val_42,
	Val_43,
	Val_44,
	Val_45,
	Val_46,
	Val_47,
	Val_48,
	Val_49,
	Val_50,
	Val_51,
	Val_52,
	Val_53,
	Val_54,
	Val_55,
	Val_56,
	Val_57,
	Val_58,
	Val_59,
	Val_60,
	Val_61,
	Val_62,
	Val_63,
	Val_64,
	Val_65,
	Val_66,
	Val_67,
	Val_68,
	Val_69,
	Val_70,
	Val_71,
	Val_72,
	Val_73,
	Val_74,
	Val_75,
	Val_76,
	Val_77,
	Val_78,
	Val_79,
	Val_80,
	Val_81,
	Val_82,
	Val_83,
	Val_84,
	Val_85,
	Val_86,
	Val_87,
	Val_88,
	Val_89,
	Val_90,
	Val_91,
	Val_92,
	Val_93,
	Val_94,
	Val_95,
	Val_96,
	Val_97,
	Val_98,
	Val_99,
	Val_100,
	Val_101,
	Val_102,
	Val_103,
	Val_104,
	Val_105,
	Val_106,
	Val_107,
	Val_108,
	Val_109,
	Val_110,
	Val_111,
	Val_112,
	Val_113,
	Val_114,
	Val_115,
	Val_116,
	Val_117,
	Val_118,
	Val_119,
	Val_120,
	Val_121,
	Val_122,
	Val_123,
	Val_124,
	Val_125,
	Val_126,
	Val_127,
	Val_128,
	Val_129,
	Val_130
};

static constexpr auto kOverflowTags = lcf::EnumTags{
	Val_0, "Val_0",
	Val_1, "Val_1",
	Val_2, "Val_2",
	Val_3, "Val_3",
	Val_4, "Val_4",
	Val_5, "Val_5",
	Val_6, "Val_6",
	Val_7, "Val_7",
	Val_8, "Val_8",
	Val_9, "Val_9",
	Val_10, "Val_10",
	Val_11, "Val_11",
	Val_12, "Val_12",
	Val_13, "Val_13",
	Val_14, "Val_14",
	Val_15, "Val_15",
	Val_16, "Val_16",
	Val_17, "Val_17",
	Val_18, "Val_18",
	Val_19, "Val_19",
	Val_20, "Val_20",
	Val_21, "Val_21",
	Val_22, "Val_22",
	Val_23, "Val_23",
	Val_24, "Val_24",
	Val_25, "Val_25",
	Val_26, "Val_26",
	Val_27, "Val_27",
	Val_28, "Val_28",
	Val_29, "Val_29",
	Val_30, "Val_30",
	Val_31, "Val_31",
	Val_32, "Val_32",
	Val_33, "Val_33",
	Val_34, "Val_34",
	Val_35, "Val_35",
	Val_36, "Val_36",
	Val_37, "Val_37",
	Val_38, "Val_38",
	Val_39, "Val_39",
	Val_40, "Val_40",
	Val_41, "Val_41",
	Val_42, "Val_42",
	Val_43, "Val_43",
	Val_44, "Val_44",
	Val_45, "Val_45",
	Val_46, "Val_46",
	Val_47, "Val_47",
	Val_48, "Val_48",
	Val_49, "Val_49",
	Val_50, "Val_50",
	Val_51, "Val_51",
	Val_52, "Val_52",
	Val_53, "Val_53",
	Val_54, "Val_54",
	Val_55, "Val_55",
	Val_56, "Val_56",
	Val_57, "Val_57",
	Val_58, "Val_58",
	Val_59, "Val_59",
	Val_60, "Val_60",
	Val_61, "Val_61",
	Val_62, "Val_62",
	Val_63, "Val_63",
	Val_64, "Val_64",
	Val_65, "Val_65",
	Val_66, "Val_66",
	Val_67, "Val_67",
	Val_68, "Val_68",
	Val_69, "Val_69",
	Val_70, "Val_70",
	Val_71, "Val_71",
	Val_72, "Val_72",
	Val_73, "Val_73",
	Val_74, "Val_74",
	Val_75, "Val_75",
	Val_76, "Val_76",
	Val_77, "Val_77",
	Val_78, "Val_78",
	Val_79, "Val_79",
	Val_80, "Val_80",
	Val_81, "Val_81",
	Val_82, "Val_82",
	Val_83, "Val_83",
	Val_84, "Val_84",
	Val_85, "Val_85",
	Val_86, "Val_86",
	Val_87, "Val_87",
	Val_88, "Val_88",
	Val_89, "Val_89",
	Val_90, "Val_90",
	Val_91, "Val_91",
	Val_92, "Val_92",
	Val_93, "Val_93",
	Val_94, "Val_94",
	Val_95, "Val_95",
	Val_96, "Val_96",
	Val_97, "Val_97",
	Val_98, "Val_98",
	Val_99, "Val_99",
	Val_100, "Val_100",
	Val_101, "Val_101",
	Val_102, "Val_102",
	Val_103, "Val_103",
	Val_104, "Val_104",
	Val_105, "Val_105",
	Val_106, "Val_106",
	Val_107, "Val_107",
	Val_108, "Val_108",
	Val_109, "Val_109",
	Val_110, "Val_110",
	Val_111, "Val_111",
	Val_112, "Val_112",
	Val_113, "Val_113",
	Val_114, "Val_114",
	Val_115, "Val_115",
	Val_116, "Val_116",
	Val_117, "Val_117",
	Val_118, "Val_118",
	Val_119, "Val_119",
	Val_120, "Val_120",
	Val_121, "Val_121",
	Val_122, "Val_122",
	Val_123, "Val_123",
	Val_124, "Val_124",
	Val_125, "Val_125",
	Val_126, "Val_126",
	Val_127, "Val_127",
	Val_128, "Val_128",
	Val_129, "Val_129",
	Val_130, "Val_130"
};

static constexpr auto kOverflowTags2 = lcf::makeEnumTags<Overflow>(
	"Val_0",
	"Val_1",
	"Val_2",
	"Val_3",
	"Val_4",
	"Val_5",
	"Val_6",
	"Val_7",
	"Val_8",
	"Val_9",
	"Val_10",
	"Val_11",
	"Val_12",
	"Val_13",
	"Val_14",
	"Val_15",
	"Val_16",
	"Val_17",
	"Val_18",
	"Val_19",
	"Val_20",
	"Val_21",
	"Val_22",
	"Val_23",
	"Val_24",
	"Val_25",
	"Val_26",
	"Val_27",
	"Val_28",
	"Val_29",
	"Val_30",
	"Val_31",
	"Val_32",
	"Val_33",
	"Val_34",
	"Val_35",
	"Val_36",
	"Val_37",
	"Val_38",
	"Val_39",
	"Val_40",
	"Val_41",
	"Val_42",
	"Val_43",
	"Val_44",
	"Val_45",
	"Val_46",
	"Val_47",
	"Val_48",
	"Val_49",
	"Val_50",
	"Val_51",
	"Val_52",
	"Val_53",
	"Val_54",
	"Val_55",
	"Val_56",
	"Val_57",
	"Val_58",
	"Val_59",
	"Val_60",
	"Val_61",
	"Val_62",
	"Val_63",
	"Val_64",
	"Val_65",
	"Val_66",
	"Val_67",
	"Val_68",
	"Val_69",
	"Val_70",
	"Val_71",
	"Val_72",
	"Val_73",
	"Val_74",
	"Val_75",
	"Val_76",
	"Val_77",
	"Val_78",
	"Val_79",
	"Val_80",
	"Val_81",
	"Val_82",
	"Val_83",
	"Val_84",
	"Val_85",
	"Val_86",
	"Val_87",
	"Val_88",
	"Val_89",
	"Val_90",
	"Val_91",
	"Val_92",
	"Val_93",
	"Val_94",
	"Val_95",
	"Val_96",
	"Val_97",
	"Val_98",
	"Val_99",
	"Val_100",
	"Val_101",
	"Val_102",
	"Val_103",
	"Val_104",
	"Val_105",
	"Val_106",
	"Val_107",
	"Val_108",
	"Val_109",
	"Val_110",
	"Val_111",
	"Val_112",
	"Val_113",
	"Val_114",
	"Val_115",
	"Val_116",
	"Val_117",
	"Val_118",
	"Val_119",
	"Val_120",
	"Val_121",
	"Val_122",
	"Val_123",
	"Val_124",
	"Val_125",
	"Val_126",
	"Val_127",
	"Val_128",
	"Val_129",
	"Val_130"
);

TEST_CASE("makeEnumTags is same") {
	REQUIRE_EQ(kColorTags.size(), kColorTags2.size());

	auto s = kColorTags.size();

	for (size_t i = 0; i < s; ++i) {
		REQUIRE_EQ(kColorTags[i], kColorTags2[i]);
	}

	REQUIRE_EQ(kOverflowTags.size(), kOverflowTags2.size());

	s = kOverflowTags.size();

	for (size_t i = 0; i < s; ++i) {
		REQUIRE_EQ(kOverflowTags[i], kOverflowTags2[i]);
	}
}

TEST_CASE("8 Bit overflow") {
	Overflow o;

	REQUIRE_EQ(kOverflowTags.size(), 131);

	REQUIRE(kOverflowTags.is_monotonic_from_zero());

	REQUIRE(kOverflowTags.has_etag("Val_110"));
	REQUIRE(kOverflowTags.has_etag("Val_130"));

	REQUIRE_EQ(kOverflowTags.tag(130), "Val_130");
	REQUIRE_EQ(kOverflowTags.tag(Val_130), "Val_130");

	REQUIRE(kOverflowTags.etag("Val_130", o));
	REQUIRE_EQ(Val_130, o);
}

TEST_SUITE_END();
