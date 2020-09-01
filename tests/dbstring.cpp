/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/dbstring.h"
#include "doctest.h"

using namespace lcf;

TEST_SUITE_BEGIN("DBString");

TEST_CASE("ConstructDef") {
	DBString x;

	REQUIRE(x.empty());
	REQUIRE_EQ(x.size(), 0);
	REQUIRE_EQ(x, "");
}

template <typename T>
void testConstruct(const T& init) {
}

TEST_CASE_TEMPLATE("Construct", T, StringView, std::string, char*, DBString) {
	DBString x(T("abc"));

	REQUIRE_FALSE(x.empty());
	REQUIRE_EQ(x.size(), 3);
	REQUIRE_EQ(x, "abc");

	REQUIRE_EQ(x.front(), 'a');
	REQUIRE_EQ(x[0], 'a');
	REQUIRE_EQ(x[1], 'b');
	REQUIRE_EQ(x[2], 'c');
	REQUIRE_EQ(x.back(), 'c');

	REQUIRE_EQ(x.data()[0], 'a');
	REQUIRE_EQ(x.data()[1], 'b');
	REQUIRE_EQ(x.data()[2], 'c');

	REQUIRE_EQ(x.c_str()[0], 'a');
	REQUIRE_EQ(x.c_str()[1], 'b');
	REQUIRE_EQ(x.c_str()[2], 'c');
	REQUIRE_EQ(x.c_str()[3], '\0');

	{
		auto iter = x.begin();
		REQUIRE_EQ(*(iter++), 'a');
		REQUIRE_EQ(*(iter++), 'b');
		REQUIRE_EQ(*(iter++), 'c');
		REQUIRE_EQ(iter, x.end());
	}

	{
		auto iter = x.rbegin();
		REQUIRE_EQ(*(iter++), 'c');
		REQUIRE_EQ(*(iter++), 'b');
		REQUIRE_EQ(*(iter++), 'a');
		REQUIRE_EQ(iter, x.rend());
	}
}

TEST_CASE("Construct2") {
	DBString x("abc", 2);

	REQUIRE_FALSE(x.empty());
	REQUIRE_EQ(x.size(), 2);
	REQUIRE_EQ(x, "ab");
}

TEST_CASE("Swap") {
	DBString a("a");
	DBString b("b");
	a.swap(b);

	REQUIRE_EQ(a, "b");
	REQUIRE_EQ(b, "a");
}

TEST_CASE("Cmp") {
	DBString a("a");
	DBString b("b");

	REQUIRE(a == a);
	REQUIRE_FALSE(a != a);
	REQUIRE_FALSE(a < a);
	REQUIRE(a <= a);
	REQUIRE_FALSE(a > a);
	REQUIRE(a >= a);

	REQUIRE_FALSE(a == b);
	REQUIRE(a != b);
	REQUIRE(a < b);
	REQUIRE(a <= b);
	REQUIRE_FALSE(a > b);
	REQUIRE_FALSE(a >= b);

	REQUIRE_FALSE(b == a);
	REQUIRE(b != a);
	REQUIRE_FALSE(b < a);
	REQUIRE_FALSE(b <= a);
	REQUIRE(b > a);
	REQUIRE(b >= a);
}


TEST_CASE("Copy") {
	DBString a("a");
	DBString b("b");

	b = a;
	REQUIRE_EQ(a, "a");
	REQUIRE_EQ(b, "a");

	b = a;
	REQUIRE_EQ(a, "a");
	REQUIRE_EQ(b, "a");

	b = b;
	REQUIRE_EQ(a, "a");
	REQUIRE_EQ(b, "a");

	DBString c(b);
	REQUIRE_EQ(a, "a");
	REQUIRE_EQ(b, "a");
	REQUIRE_EQ(c, "a");
}

TEST_CASE("Move") {
	DBString a("a");
	DBString b("b");

	b = std::move(a);
	REQUIRE_EQ(a, "");
	REQUIRE_EQ(b, "a");

	b = std::move(b);
	REQUIRE_EQ(a, "");
	REQUIRE_EQ(b, "a");

	DBString c(std::move(b));
	REQUIRE_EQ(a, "");
	REQUIRE_EQ(b, "");
	REQUIRE_EQ(c, "a");

	c = std::move(b);
	REQUIRE_EQ(a, "");
	REQUIRE_EQ(b, "");
	REQUIRE_EQ(c, "");
}

TEST_SUITE_END();
