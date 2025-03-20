/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/string_view.h"
#include "doctest.h"

#include <climits>
#include <string>
#include <string_view>

using namespace lcf;

TEST_SUITE_BEGIN("StringView");

TEST_CASE("SvAtoi") {
	REQUIRE_EQ(SvAtoi("0"), 0);
	REQUIRE_EQ(SvAtoi("2"), 2);
	REQUIRE_EQ(SvAtoi("-43"), -43);
	REQUIRE_EQ(SvAtoi(std::to_string(INT_MAX)), INT_MAX);
	REQUIRE_EQ(SvAtoi(std::to_string(INT_MIN)), INT_MIN);

	REQUIRE_EQ(SvAtoi(""), 0);
	REQUIRE_EQ(SvAtoi("cs"), 0);
	REQUIRE_EQ(SvAtoi("-"), 0);
	REQUIRE_EQ(SvAtoi(" "), 0);
	REQUIRE_EQ(SvAtoi("0x55"), 0);
}

TEST_CASE("StartsWith") {
	std::string_view sv = "StringView";
	std::string in = "String";
	std::string notin = "NotFound";

	REQUIRE(StartsWith(sv, in));
	REQUIRE(StartsWith(sv, std::string_view(in)));
	REQUIRE(StartsWith(sv, 'S'));
	REQUIRE(StartsWith(sv, "String"));

	REQUIRE_FALSE(StartsWith(sv, notin));
	REQUIRE_FALSE(StartsWith(sv, std::string_view(notin)));
	REQUIRE_FALSE(StartsWith(sv, 'X'));
	REQUIRE_FALSE(StartsWith(sv, "NotFound"));
}

TEST_CASE("EndsWith") {
	std::string_view sv = "StringView";
	std::string in = "View";
	std::string notin = "NotFound";

	REQUIRE(EndsWith(sv, in));
	REQUIRE(EndsWith(sv, std::string_view(in)));
	REQUIRE(EndsWith(sv, 'w'));
	REQUIRE(EndsWith(sv, "View"));

	REQUIRE_FALSE(EndsWith(sv, notin));
	REQUIRE_FALSE(EndsWith(sv, std::string_view(notin)));
	REQUIRE_FALSE(EndsWith(sv, 'X'));
	REQUIRE_FALSE(EndsWith(sv, "NotFound"));
}

TEST_SUITE_END();
