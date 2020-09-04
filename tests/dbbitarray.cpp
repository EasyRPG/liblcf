/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/dbbitarray.h"
#include "doctest.h"

#include <vector>
#include <string>
#include <sstream>

namespace lcf {

doctest::String toString(const DBBitArray& a) {
	std::ostringstream ss;
	ss << "{";
	for (auto& b: a) {
		ss << (b ? 1 : 0);
	}
	ss << "}";
	return doctest::String(ss.str().c_str());
}

}

using namespace lcf;

TEST_SUITE_BEGIN("DBBitArray");

TEST_CASE("ConstructDef") {
	DBBitArray x;

	REQUIRE(x.empty());
	REQUIRE_EQ(x.size(), 0);
}

TEST_CASE("ConstructAll") {
	bool value;
	SUBCASE("TRUE") { value = true; }
	SUBCASE("FALSE") { value = false; }

	CAPTURE(value);

	DBBitArray x(15, value);
	const auto& cx = x;

	REQUIRE(!x.empty());
	REQUIRE_EQ(x.size(), 15);

	for (auto& e: x) { REQUIRE_EQ(e, value); }
	for (auto& e: cx) { REQUIRE_EQ(e, value); }

	for (DBBitArray::size_type i = 0; i < x.size(); ++i) {
		CAPTURE(i);

		REQUIRE_EQ(cx[i], value);
		REQUIRE_EQ(x[i], value);
	}

	REQUIRE_EQ(x.front(), value);
	REQUIRE_EQ(x.back(), value);
}

TEST_CASE_TEMPLATE("Construct Ilist", T, DBBitArray, const DBBitArray) {
	T x = {true, false, true};

	REQUIRE(!x.empty());
	REQUIRE_EQ(x.size(), 3);
	REQUIRE_EQ(x.front(), true);
	REQUIRE_EQ(x[0], true);
	REQUIRE_EQ(x[1], false);
	REQUIRE_EQ(x[2], true);
	REQUIRE_EQ(x.back(), true);

	auto iter = x.begin();
	REQUIRE_EQ(*iter, true);
	++iter;
	REQUIRE_EQ(*iter, false);
	++iter;
	REQUIRE_EQ(*iter, true);
	++iter;
	REQUIRE_EQ(iter, x.end());
}

TEST_CASE("Assign") {
	DBBitArray x = { false, false, false };

	REQUIRE(!x.empty());
	REQUIRE_EQ(x.size(), 3);

	x[1] = true;
	REQUIRE_EQ(x[0], false);
	REQUIRE_EQ(x[1], true);
	REQUIRE_EQ(x[2], false);
}

TEST_CASE("Swap") {
	DBBitArray a = {false};
	DBBitArray b = {true};
	a.swap(b);

	REQUIRE_EQ(a.front(), true);
	REQUIRE_EQ(b.front(), false);
}

TEST_CASE("Cmp") {
	DBBitArray a = {false};
	DBBitArray b = {true};

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
	const DBBitArray ca = {false};
	const DBBitArray cb = {true};

	DBBitArray a = {false};
	DBBitArray b = {true};

	b = a;
	REQUIRE_EQ(a, ca);
	REQUIRE_EQ(b, ca);

	b = a;
	REQUIRE_EQ(a, ca);
	REQUIRE_EQ(b, ca);

	b = b;
	REQUIRE_EQ(a, ca);
	REQUIRE_EQ(b, ca);

	DBBitArray c(b);
	REQUIRE_EQ(a, ca);
	REQUIRE_EQ(b, ca);
	REQUIRE_EQ(c, ca);
}

TEST_CASE("Move") {
	const DBBitArray n = {};
	const DBBitArray ca = {false};
	const DBBitArray cb = {true};

	DBBitArray a = {false};
	DBBitArray b = {true};

	b = std::move(a);
	REQUIRE_EQ(a, n);
	REQUIRE_EQ(b, ca);

	b = std::move(b);
	REQUIRE_EQ(a, n);
	REQUIRE_EQ(b, ca);

	DBBitArray c(std::move(b));
	REQUIRE_EQ(a, n);
	REQUIRE_EQ(b, n);
	REQUIRE_EQ(c, ca);

	c = std::move(b);
	REQUIRE_EQ(a, n);
	REQUIRE_EQ(b, n);
	REQUIRE_EQ(c, n);
}

TEST_SUITE_END();
