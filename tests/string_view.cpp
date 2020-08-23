/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
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

TEST_SUITE_END();
