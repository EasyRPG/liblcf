/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "zstring_view.h"
#include "doctest.h"

TEST_SUITE_BEGIN("zstring_view");

TEST_CASE("Default Construct") {
	ZStringView zs;

	REQUIRE(zs.empty());
	REQUIRE_EQ(zs, "");
}

TEST_CASE("From literal") {
	ZStringView zs("foo");

	REQUIRE(!zs.empty());
	REQUIRE_EQ(zs.size(), 3);
	REQUIRE_EQ(zs, "foo");

	REQUIRE(!std::strcmp(zs.data(), "foo"));
	REQUIRE(!std::strcmp(zs.c_str(), "foo"));
}
