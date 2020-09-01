/*
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "lcf/dbarray.h"
#include "doctest.h"

#include <vector>
#include <string>
#include <sstream>

namespace lcf {
template class DBArray<int>;
template class DBArray<float>;
template class DBArray<std::vector<std::string>>;

template <typename T>
doctest::String toString(const DBArray<T>& a) {
	std::ostringstream ss;
	ss << "{";
	auto iter = a.begin();
	if (iter != a.end()) {
		ss << *iter;
		++iter;
	}
	while (iter != a.end()) {
		ss << ", " << *iter;
	}
	ss << "}";
	return doctest::String(ss.str().c_str());
}

}

using namespace lcf;

TEST_SUITE_BEGIN("DBArray");

TEST_CASE_TEMPLATE("ConstructDef", T, int, bool, std::string) {
	DBArray<T> x;

	REQUIRE(x.empty());
	REQUIRE_EQ(x.size(), 0);
}

TEST_CASE("Construct Ilist") {
	DBArray<int> x = {5};

	REQUIRE(!x.empty());
	REQUIRE_EQ(x.size(), 1);
	REQUIRE_EQ(x.front(), 5);
	REQUIRE_EQ(x[0], 5);
	REQUIRE_EQ(x.back(), 5);

	REQUIRE_EQ(x.data()[0], 5);

	auto iter = x.begin();
	REQUIRE_EQ(*iter, 5);
	++iter;
	REQUIRE_EQ(iter, x.end());
}

TEST_CASE("Construct Ilist2") {
	DBArray<int> x = {5, 7};

	REQUIRE(!x.empty());
	REQUIRE_EQ(x.size(), 2);
	REQUIRE_EQ(x.front(), 5);
	REQUIRE_EQ(x[0], 5);
	REQUIRE_EQ(x[1], 7);
	REQUIRE_EQ(x.back(), 7);

	REQUIRE_EQ(x.data()[0], 5);
	REQUIRE_EQ(x.data()[1], 7);

	auto iter = x.begin();
	REQUIRE_EQ(*iter, 5);
	++iter;
	REQUIRE_EQ(*iter, 7);
	++iter;
	REQUIRE_EQ(iter, x.end());
}

TEST_CASE("Construct Count") {
	DBArray<int> x(3);

	REQUIRE(!x.empty());
	REQUIRE_EQ(x.size(), 3);
	REQUIRE_EQ(x.front(), 0);
	REQUIRE_EQ(x[0], 0);
	REQUIRE_EQ(x[1], 0);
	REQUIRE_EQ(x[2], 0);
	REQUIRE_EQ(x.back(), 0);
}

TEST_CASE("Construct Count T") {
	DBArray<int> x(3, 15);

	REQUIRE(!x.empty());
	REQUIRE_EQ(x.size(), 3);
	REQUIRE_EQ(x.front(), 15);
	REQUIRE_EQ(x[0], 15);
	REQUIRE_EQ(x[1], 15);
	REQUIRE_EQ(x[2], 15);
	REQUIRE_EQ(x.back(), 15);
}

TEST_CASE("Swap") {
	const DBArray<int> ca = {1};
	const DBArray<int> cb = {2};

	DBArray<int> a = {1};
	DBArray<int> b = {2};
	a.swap(b);

	REQUIRE_EQ(a, cb);
	REQUIRE_EQ(b, ca);
}

TEST_CASE("Cmp") {
	const DBArray<int> a = {1};
	const DBArray<int> b = {2};

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
	const DBArray<int> ca = {1};
	const DBArray<int> cb = {2};

	DBArray<int> a = {1};
	DBArray<int> b = {2};

	b = a;
	REQUIRE_EQ(a, ca);
	REQUIRE_EQ(b, ca);

	b = a;
	REQUIRE_EQ(a, ca);
	REQUIRE_EQ(b, ca);

	b = b;
	REQUIRE_EQ(a, ca);
	REQUIRE_EQ(b, ca);

	DBArray<int> c(b);
	REQUIRE_EQ(a, ca);
	REQUIRE_EQ(b, ca);
	REQUIRE_EQ(c, ca);
}

TEST_CASE("Move") {
	const DBArray<int> n = {};
	const DBArray<int> ca = {1};
	const DBArray<int> cb = {2};

	DBArray<int> a = {1};
	DBArray<int> b = {2};

	b = std::move(a);
	REQUIRE_EQ(a, n);
	REQUIRE_EQ(b, ca);

	b = std::move(b);
	REQUIRE_EQ(a, n);
	REQUIRE_EQ(b, ca);

	DBArray<int> c(std::move(b));
	REQUIRE_EQ(a, n);
	REQUIRE_EQ(b, n);
	REQUIRE_EQ(c, ca);

	c = std::move(b);
	REQUIRE_EQ(a, n);
	REQUIRE_EQ(b, n);
	REQUIRE_EQ(c, n);
}

TEST_SUITE_END();
