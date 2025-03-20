/*
 * This file is part of liblcf. Copyright (c) liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#include "doctest.h"
#include "lcf/config.h"

#if LCF_SUPPORT_INI

#include <sstream>
#include "lcf/inireader.h"

using namespace lcf;

INIReader load_ini() {
	std::string ini = R"("
[Section]
StrKey=StrValue
IntKey=-123
RealKey=-1.234
BoolKeyT=true
BoolKeyF=off
EmptyKey=

[OtherSection]
SomeKey=XXX
DupeKey=A
DupeKey=B
DupeKey=C
)";

	std::stringstream ss(ini);
	return {ss};
}

TEST_SUITE_BEGIN("INI");

TEST_CASE("Get") {
	auto ini = load_ini();

	REQUIRE_EQ(ini.Get("Section", "StrKey", "Default"), "StrValue");
	REQUIRE_EQ(ini.Get("Section", "EmptyKey", "Default"), "");
	REQUIRE_EQ(ini.Get("Section", "MissingKey", "Default"), "Default");

	REQUIRE_EQ(ini.Get("OtherSection", "SomeKey", "Default"), "XXX");
}

TEST_CASE("GetString") {
	auto ini = load_ini();

	REQUIRE_EQ(ini.GetString("Section", "StrKey", "Default"), "StrValue");
	REQUIRE_EQ(ini.GetString("Section", "EmptyKey", "Default"), "Default");
	REQUIRE_EQ(ini.GetString("Section", "MissingKey", "Default"), "Default");
}

TEST_CASE("GetInteger") {
	auto ini = load_ini();

	REQUIRE_EQ(ini.GetInteger("Section", "IntKey", -1), -123);
	REQUIRE_EQ(ini.GetInteger("Section", "StrKey", -1), -1);
	REQUIRE_EQ(ini.GetInteger("Section", "EmptyKey", -1), -1);
	REQUIRE_EQ(ini.GetInteger("Section", "MissingKey", -1), -1);
}

TEST_CASE("GetReal") {
	auto ini = load_ini();

	REQUIRE_EQ(ini.GetReal("Section", "RealKey", -1.), -1.234);
	REQUIRE_EQ(ini.GetReal("Section", "StrKey", -1.), -1.);
	REQUIRE_EQ(ini.GetReal("Section", "EmptyKey", -1.), -1.);
	REQUIRE_EQ(ini.GetReal("Section", "MissingKey", -1.), -1.);
}

TEST_CASE("GetBoolean") {
	auto ini = load_ini();

	REQUIRE_EQ(ini.GetBoolean("Section", "BoolKeyT", false), true);
	REQUIRE_EQ(ini.GetBoolean("Section", "BoolKeyF", true), false);
	REQUIRE_EQ(ini.GetBoolean("Section", "StrKey", true), true);
	REQUIRE_EQ(ini.GetBoolean("Section", "EmptyKey", true), true);
	REQUIRE_EQ(ini.GetBoolean("Section", "MissingKey", true), true);
}

TEST_CASE("GetDupe") {
	auto ini = load_ini();

	REQUIRE_EQ(ini.GetString("OtherSection", "DupeKey", "Default"), "A\nB\nC");
}

TEST_CASE("HasValue") {
	auto ini = load_ini();

	REQUIRE(ini.HasValue("Section", "StrKey"));
	REQUIRE(ini.HasValue("Section", "EmptyKey"));
	REQUIRE_FALSE(ini.HasValue("Section", "MissingKey"));

	REQUIRE(ini.HasValue("OtherSection", "SomeKey"));
}

TEST_SUITE_END();

#endif
