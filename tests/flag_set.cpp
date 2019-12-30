/*
 * This file is part of liblcf. Copyright (c) 2019 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "flag_set.h"
#include "doctest.h"

enum Color {
	Red,
	Green,
	Blue
};

template class FlagSet<Color>;

using ColorSet = FlagSet<Color>;

TEST_SUITE_BEGIN("flag_set");

TEST_CASE("Default Construct") {
	ColorSet cs;
	REQUIRE(!cs[Red]);
	REQUIRE(!cs[Green]);
	REQUIRE(!cs[Blue]);
	REQUIRE_EQ(cs.count(), 0);
}

TEST_CASE("List Construct") {
	ColorSet cs = { Red, Blue };
	REQUIRE(cs[Red]);
	REQUIRE(!cs[Green]);
	REQUIRE(cs[Blue]);
	REQUIRE_EQ(cs.count(), 2);

	cs[Green] = true;
	REQUIRE(cs[Green]);
	REQUIRE_EQ(cs.count(), 3);

	cs[Red] = false;
	REQUIRE(!cs[Red]);
	REQUIRE_EQ(cs.count(), 2);
}

TEST_CASE("Logical Ops") {
	ColorSet cs0 = {};
	ColorSet csr = { Red };
	ColorSet csg = { Green };
	ColorSet csb = { Blue };

	ColorSet csrg = { Red, Green };
	ColorSet csrb = { Red, Blue };
	ColorSet csgb = { Green, Blue };
	ColorSet csrgb = { Red, Green, Blue };

	REQUIRE(cs0 == (csr & csg));
	REQUIRE(cs0 == (csb & csg));
	REQUIRE(cs0 == (csr & csb));
	REQUIRE(cs0 == (csrg & csb));
	REQUIRE(cs0 == (csrb & csg));
	REQUIRE(cs0 == (csgb & csr));
	REQUIRE(cs0 == (csrgb & cs0));

	REQUIRE(csrb == (csr | csb));
	REQUIRE(csgb == (csb | csg));
	REQUIRE(csrgb == (csr | csb | csg));

	REQUIRE(csrb == (csr ^ csb));
	REQUIRE(csb == (csr ^ csrb));
}

TEST_SUITE_END();
